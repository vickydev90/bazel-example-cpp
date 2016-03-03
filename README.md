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

# Explanation

This repository works in conjunction with other git repositories to
provide a demonstration of Bazel BUILD rules for golang.

* [bazel-example-cpp](https://github.com/laramiel/bazel-example-cpp)  
  The main repository, demonstrating binary, local, and remote repository usage.

* [bazel-example-cpp-remote](https://github.com/laramiel/bazel-example-cpp-remote)  
  An example remote repository which includes Bazel rules.

* [bazel-example-cpp-bare](https://github.com/laramiel/bazel-example-cpp-bare)
  An example remote repository without any Bazel rules.


Each of the remote repositories is linked into `cc_binary()` targets in several
ways:

1. Using the WORKSPACE file to define `git_repository()` rules.
   This accounts for the `:remote` and `:bare` targets.

2. Using git submodules to import the repository source, and
   using those paths. This accounts for the `//submodule:bare`
   and `//submodule:remote` targets.

