load("@pybind11_bazel//:build_defs.bzl", "pybind_extension")

pybind_extension(
    name = "samplelib_pybind",
    srcs = ["py_mean.cpp"],
    deps = [
        "//samplelib_cpp:samplelib_cpp",
    ],
    visibility = ["//visibility:public"],
)
