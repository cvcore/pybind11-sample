cc_test(
    name = "pybind11-sample-test",
    srcs = ["test_samplelib_cpp.cpp"],
    copts = [
      "-Iexternal/gtest/googletest/include",
      "-Iexternal/gtest/googletest",
    ],
    deps = [
        "@gtest//:main",
        "//samplelib_cpp:samplelib_cpp",
    ],
)
