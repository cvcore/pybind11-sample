/* Create python bindings for the samplelib_cpp with pybind11 */

#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>

#include "samplelib_cpp/mean.h"

namespace py = pybind11;

double py_mean(py::array_t<double> v) {
    py::buffer_info buf = v.request();
    if (buf.ndim != 1) {
        throw std::runtime_error("Input must be 1-D array");
    }
    auto *data = static_cast<double *>(buf.ptr);
    return mean(std::vector<double>(data, data + v.size()));
}

PYBIND11_MODULE(test, m) {
    m.def("mean", &py_mean, "Calculate the mean of a 1-D array");
}
