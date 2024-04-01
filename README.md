# pybind11-sample

This is a sample project that demonstrates how to use pybind11 to create a Python module from C++ code.

# Prerequisites

- [Bazel](https://bazel.build/install)


# Building and testing the project

To build the project, run the following command:

```
# Build the C++ sample library
bazel build //samplelib_cpp/...

# Test the C++ sample library
bazel test test:pybind11-sample-test

# Build the pybind module (.so)
bazel build //samplelib_pybind/...

```

This will build the Python module for the current platform. The Python module will be located at `bazel-bin/samplelib_pybind/samplelib_pybind.so`. You can use it in Python as follows:

```python
import samplelib_pybind
import numpy as np

a = np.array([1, 2, 3], dtype=np.float32)
print(samplelib_pybind.mean(a))
```


# TODO

- [ ] Add cross compilation support for multiple platforms
- [ ] Add sample for CI / CD
