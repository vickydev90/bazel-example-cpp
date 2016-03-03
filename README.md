# bazel-example-cpp

An example project demonstrating bazel build rules for C++ with
a local binary (cc_binary) and a local library (cc_library),
a remote library (git_repository) and a bare library (new_git_repository + cc_library).

```
$ git clone https://github.com/laramiel/bazel-example-cpp.git
$ cd bazel-example-cpp

$ bazel run :hello

$ bazel run :local
$ bazel run :remote
$ bazel run :bare

$ git submodule update --init --recursive
$ bazel run //submodule:bare
$ bazel run //submodule:remote

```


