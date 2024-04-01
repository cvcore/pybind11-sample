load("@pybind11_bazel//:build_defs.bzl", "pybind_extension")
load("@pybind11_bazel//:build_defs.bzl", "pybind_library")


load("@rules_python//python/cc:py_cc_toolchain.bzl", "py_cc_toolchain")

pybind_library(
    name = "samplelib_pybind",
    srcs = ["py_mean.cpp"],
    deps = [
        "//samplelib_cpp:samplelib_cpp",
    ],
    visibility = ["//visibility:public"],
)
