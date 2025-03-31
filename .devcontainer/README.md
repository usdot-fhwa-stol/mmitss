# Dev Container
The following setup allows you to develop and test MMITSS functionality in a Dev Container. For more information about the Dev Container VS Code plugin or how it works read the [Visual Studio Code documentation](https://code.visualstudio.com/docs/devcontainers/containers) for Dev Containers.
## Instructions to Build Dev Container
1) Run `make linux` under `mmitss/src/common` to build the mmitss-common library.
2) Run the `setup-build-environment.sh` script under `mmitss/build/scripts/` to install the mmitss-common library in `/usr/local/lib`.
3) Run the `build-script.sh` script under `mmitss/build/scripts/` to build the appropriate mmitss base image.
4) Now you should be able use the `Dev Containers:Rebuild and Reopen in Container` command found when hitting ctrl+shift+p. This should create and launch the Dev Container
5) Inside the Dev Container, you can using the `build_vsp_ros2_transceiver.sh` script to rebuild VSP transceivers and then either the `runCarmaDecoder.sh`  or `runCarmaEncoder.sh` to run either or both nodes. All of thise scripts are found under `mmitss/build/dockerfiles/x86/scripts`.
6) To switch in between VSP and MRP Dev Container environments, simply update the `dockerfile` parameter in the `devcontainer.json`.

