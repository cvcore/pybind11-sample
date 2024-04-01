# pybind11-sample

This is a sample project that demonstrates how to use pybind11 to create a Python module from C++ code. Additionally, this project uses bazel to build the C++ code and the Python module for multiple platforms (Linux and macOS).

# Prerequisites

- [Bazel](https://bazel.build/install)

# Folder structure

```
pybind11-sample
│
├── BUILD
├── README.md
├── WORKSPACE
├── pybind11-sample
|   ├── samplelib_cpp
│   │   ├── mean.h
│   │   └── mean.cpp
│   ├── __init__.py
│   ├── pybind11_sample.cc
│   └── pybind11_sample.h
└── pybind11-sample.bzl
```

# Building the project

To build the project, run the following command:

```
bazel build //pybind11-sample:pybind11_sample.so
```

This will build the Python module for the current platform. The Python module will be located at `bazel-bin/pybind11-sample/pybind11_sample.so`.

# Running the tests
