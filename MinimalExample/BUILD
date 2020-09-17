package (
    default_visibility = ["//visibility:public"]
)

# Breaks MyLibBrokenTest.
TARGET_UNDER_TEST = "//MinimalExample:ComplicatedLib"
# Everything works with this one:
# TARGET_UNDER_TEST = "//MinimalExample:CCOnlyComplicatedLib"

cc_library(
    name = "MyLib",
    hdrs = ["MyLib.h"],
    srcs = ["MyLib.cpp"],
    deps = [
        TARGET_UNDER_TEST,
    ],
)

cc_test(
    name = "MyLibBrokenTest",
    srcs = ["MyLibWorkingBinary.cpp"],
    deps = [
        "//MinimalExample:MyLib",
    ],
)

cc_binary(
    name = "MyLibWorkingBinary",
    srcs = ["MyLibWorkingBinary.cpp"],
    deps = [
        "//MinimalExample:MyLib",
    ],
)

cc_test(
    name = "MyLibWorkingTest",
    srcs = ["MyLibWorkingTest.cpp"],
    deps = [
        TARGET_UNDER_TEST,
    ],
)

# A target mocking the complicated structure used to import JUCE.
# https://github.com/chetgnegy/bazel_juce/blob/master/ThirdParty/Juce/juce.bzl

cc_library (
    name = "CCOnlyComplicatedLib",
    hdrs = ["ComplicatedLib.h"],
    srcs = ["ComplicatedLib.cpp"],
)


cc_library (
    name = "ComplicatedLibTextualHdrs",
    textual_hdrs = [
        "ComplicatedLib.h",
        "ComplicatedLib.cpp",
    ],
)

cc_library (
    name = "ComplicatedLib",
    deps = [":ComplicatedLibInternal"],
)

cc_library (
    name = "ComplicatedLibInternal",
    deps = [
        ":ComplicatedLibTextualHdrs",
        ":ComplicatedLibInternalObjC",
    ],
)

filegroup(
    name = "ComplicatedLibObjCFiles",
    srcs = ["ComplicatedLib.mm"],
)
objc_library (
    name = "ComplicatedLibInternalObjC",
    non_arc_srcs = [":ComplicatedLibObjCFiles"],
    deps = [":ComplicatedLibTextualHdrs"],
)