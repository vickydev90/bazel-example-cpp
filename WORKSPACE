load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
  name = "remote",
  remote = "https://github.com/vickydev90/bazel-example-cpp-remote.git",
  commit = "7cfc081",
)

BARE_BUILD = """
cc_library(
    name = "bare",
    srcs = ["bare.cc"],
    hdrs = ["bare.h"],
    visibility = ["//visibility:public"],
)
"""

#new_git_repository(
#  name = "bare",
#  remote = "https://github.com/laramiel/bazel-example-cpp-bare.git",
#  commit = "e0d67b9",
#  build_file_content = BARE_BUILD
#)
