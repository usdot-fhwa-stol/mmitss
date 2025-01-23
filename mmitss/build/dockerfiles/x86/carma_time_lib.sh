apt-get update && apt-get install -y \
    curl \
    lsb-release \
    cmake \
    libgtest-dev \
    libgmock-dev \
    git \
    bash \
    python3-dev \
    build-essential \
    python3-pip \
    libpthread-stubs0-dev \
    libssl-dev \
    zlib1g-dev \
    && rm -rf /var/lib/apt/lists/*

# Set working directory for the repository
cd /root/dev_ws/src

# Clone the carma-time-lib repository
git clone https://github.com/usdot-fhwa-stol/carma-time-lib.git -b develop

# Download necessary CMake files into the appropriate directory
mkdir -p /opt/carma/cmake/ && \
    curl -L -o /opt/carma/cmake/CommonSource.cmake https://raw.githubusercontent.com/usdot-fhwa-stol/carma-builds/develop/cmake/CommonSource.cmake && \
    curl -L -o /opt/carma/cmake/Testing.cmake https://raw.githubusercontent.com/usdot-fhwa-stol/carma-builds/develop/cmake/Testing.cmake && \
    curl -L -o /opt/carma/cmake/Packing.cmake https://raw.githubusercontent.com/usdot-fhwa-stol/carma-builds/develop/cmake/Packing.cmake && \
    curl -L -o /opt/carma/cmake/CodeCoverage.cmake https://raw.githubusercontent.com/usdot-fhwa-stol/carma-builds/develop/cmake/CodeCoverage.cmake && \
    curl -L -o /opt/carma/cmake/InstallingGeneral.cmake https://raw.githubusercontent.com/usdot-fhwa-stol/carma-builds/develop/cmake/InstallingGeneral.cmake && \
    curl -L -o /opt/carma/cmake/InstallingConfigs.cmake https://raw.githubusercontent.com/usdot-fhwa-stol/carma-builds/develop/cmake/InstallingConfigs.cmake && \
    curl -L -o /opt/carma/cmake/GetCPM.cmake https://raw.githubusercontent.com/usdot-fhwa-stol/carma-builds/develop/cmake/GetCPM.cmake


# Move into the carma-time-lib directory
cd /root/dev_ws/src/carma-time-lib

# Set the environment variable
CARMA_OPT_DIR=${CARMA_OPT_DIR:-/opt/carma}

# Print the value of CARMA_OPT_DIR
echo "CARMA_OPT_DIR is set to: $CARMA_OPT_DIR"

# Build and install using CMake
cmake -Bbuild -DBUILD_PYTHON_BINDINGS=ON . && \
cmake --build build --target install