/* Create python bindings for the samplelib_cpp with pybind11 */

#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>

#include "mean.h"

namespace py = pybind11;

double py_mean(py:array_t<double> v) {
    if (v.ndim != 1) {
        throw std::runtime_error("Input must be 1-D array");
    }
    double *data = v.request();
    return mean(std::vector<double>(data, data + v.size()));
}

PYBIND11_MODULE(test, m) {
    m.def("mean", &py_mean, "Calculate the mean of a 1-D array");
}
