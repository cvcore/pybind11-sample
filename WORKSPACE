load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "pybind11_bazel",
    strip_prefix = "pybind11_bazel-2.11.1.bzl.3",
    urls = ["https://github.com/pybind/pybind11_bazel/archive/v2.11.1.bzl.3.zip"],
)

http_archive(
    name = "pybind11",
    build_file = "@pybind11_bazel//:pybind11-BUILD.bazel",
    strip_prefix = "pybind11-2.11.1.bzl.3",
    urls = ["https://github.com/pybind/pybind11/archive/v2.11.1.bzl.3.zip"],
)

# Download googletest
http_archive(
    name = "gtest",
    url = "https://github.com/google/googletest/archive/release-1.10.0.zip",
    sha256 = "94c634d499558a76fa649edb13721dce6e98fb1e7018dfaeba3cd7a083945e91",
    build_file = "@//:gtest.BUILD",
    strip_prefix = "googletest-release-1.10.0",
)
