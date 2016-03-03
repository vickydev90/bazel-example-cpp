cc_binary(
    name = "hello",
    srcs = ["hello.cc"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "local",
    srcs = ["local.cc"],
    visibility = ["//visibility:public"],
    deps = ["//local"],
)

cc_binary(
    name = "remote",
    srcs = ["remote.cc"],
    visibility = ["//visibility:public"],
    deps = ["@remote//:remote"],
)

cc_binary(
    name = "bare",
    srcs = ["bare.cc"],
    visibility = ["//visibility:public"],
    deps = ["@bare//:bare"],
)
