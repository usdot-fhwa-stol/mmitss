# CARMA Time Library Deployment Note

This document record the deployment and testing details of CARMA Time Library. It follows the README.md in the root directory.


### Install library

We install CARMA Time Library via `apt` first.

**Prerequisites**

- Ubuntu ( 20.04 focal )
- CMake 3.10
- Python 3


```shell
# Get ubuntu distribution code name. All STOL APT debian packages are pushed to S3 bucket based on distribution codename.
. /etc/lsb-release
# add the STOL APT repository, use sudo to avoid permission deny
echo "deb [trusted=yes] http://s3.amazonaws.com/stol-apt-repository ${DISTRIB_CODENAME} main" | sudo tee /etc/apt/sources.list.d/stol-apt-repository.list > /dev/null 
apt update
apt install carma-clock-1
```

This steps above add the relavent STOL apt repository for pulling correct debian package.

### Clone the repo and open in in dev container

Add user to docker group if it shows the current user has no permission to run the docker

```shell
# check docker status
sudo systemctl status docker

# if not active, start it
sudo systemctl start docker

# add user
sudo usermod -aG docker $USER 

# restart your computer
```


### Install python bindings for CARMA Time Lib
We install pythin binding locally with the following steps

Install the VS Code dev container extension and re-open the repo in a container

In the container terminal, run followings

```shell
./install_dependencies.sh
cmake -Bbuild -DBUILD_PYTHON_BINDINGS=ON .
cmake --build build
```

After building, you will see if the installation pass tests. 
