#licenses(["notice"])

# package(default_visibility = ["//mediapipe/examples:__subpackages__"])

# proto_library(
#     name = "autoflip_messages_proto",
#     srcs = ["autoflip_messages.proto"],
#     deps = [
#         "//mediapipe/framework:calculator_proto",
#     ],
# )

# mediapipe_cc_proto_library(
#     name = "autoflip_messages_cc_proto",
#     srcs = ["autoflip_messages.proto"],
#     cc_deps = ["//mediapipe/framework:calculator_cc_proto"],
#     visibility = [
#         "//mediapipe/examples:__subpackages__",
#     ],
#     deps = [":autoflip_messages_proto"],
# )

cc_binary(
    name = "first",
    deps = [
        "//mediapipe/calculators/milad:first_calculator",
    ],
)
