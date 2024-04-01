load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "pybind11",
    build_file = "@pybind11_bazel//:pybind11-BUILD.bazel",
    strip_prefix = "pybind11-2.11.1",
    urls = ["https://github.com/pybind/pybind11/archive/v2.11.1.zip"],
)

http_archive(
    name = "pybind11_bazel",
    strip_prefix = "pybind11_bazel-2.11.1.bzl.3",
    urls = ["https://github.com/pybind/pybind11_bazel/archive/v2.11.1.bzl.3.zip"],
)

# Download googletest
http_archive(
    name = "gtest",
    url = "https://github.com/google/googletest/archive/release-1.10.0.zip",
    sha256 = "94c634d499558a76fa649edb13721dce6e98fb1e7018dfaeba3cd7a083945e91",
    build_file = "@//:gtest.BUILD",
    strip_prefix = "googletest-release-1.10.0",
)

# http_archive(
#     name = "rules_python",
#     sha256 = "c68bdc4fbec25de5b5493b8819cfc877c4ea299c0dcb15c244c5a00208cde311",
#     strip_prefix = "rules_python-0.31.0",
#     url = "https://github.com/bazelbuild/rules_python/releases/download/0.31.0/rules_python-0.31.0.tar.gz",
# )

# load("@rules_python//python:repositories.bzl", "py_repositories")

# py_repositories()

# load("@rules_python//python:repositories.bzl", "python_register_toolchains")

# python_register_toolchains(
#     name = "python_3_11",
#     # Available versions are listed in @rules_python//python:versions.bzl.
#     # We recommend using the same version your team is already standardized on.
#     python_version = "3.11",
# )

# load("@python_3_11//:defs.bzl", "interpreter")
