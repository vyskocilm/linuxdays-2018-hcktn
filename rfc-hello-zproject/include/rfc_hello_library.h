/*  =========================================================================
    rfc-hello - generated layer of public API

    Copyright (c) the Authors

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef RFC_HELLO_LIBRARY_H_INCLUDED
#define RFC_HELLO_LIBRARY_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <czmq.h>

//  RFC_HELLO version macros for compile-time API detection
#define RFC_HELLO_VERSION_MAJOR 0
#define RFC_HELLO_VERSION_MINOR 0
#define RFC_HELLO_VERSION_PATCH 0

#define RFC_HELLO_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define RFC_HELLO_VERSION \
    RFC_HELLO_MAKE_VERSION(RFC_HELLO_VERSION_MAJOR, RFC_HELLO_VERSION_MINOR, RFC_HELLO_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined RFC_HELLO_STATIC
#       define RFC_HELLO_EXPORT
#   elif defined RFC_HELLO_INTERNAL_BUILD
#       if defined DLL_EXPORT
#           define RFC_HELLO_EXPORT __declspec(dllexport)
#       else
#           define RFC_HELLO_EXPORT
#       endif
#   elif defined RFC_HELLO_EXPORTS
#       define RFC_HELLO_EXPORT __declspec(dllexport)
#   else
#       define RFC_HELLO_EXPORT __declspec(dllimport)
#   endif
#   define RFC_HELLO_PRIVATE
#elif defined (__CYGWIN__)
#   define RFC_HELLO_EXPORT
#   define RFC_HELLO_PRIVATE
#else
#   if (defined __GNUC__ && __GNUC__ >= 4) || defined __INTEL_COMPILER
#       define RFC_HELLO_PRIVATE __attribute__ ((visibility ("hidden")))
#       define RFC_HELLO_EXPORT __attribute__ ((visibility ("default")))
#   else
#       define RFC_HELLO_PRIVATE
#       define RFC_HELLO_EXPORT
#   endif
#endif

//  Opaque class structures to allow forward references
//  These classes are stable or legacy and built in all releases
typedef struct _utils_t utils_t;
#define UTILS_T_DEFINED
typedef struct _baltree_t baltree_t;
#define BALTREE_T_DEFINED
typedef struct _hello_t hello_t;
#define HELLO_T_DEFINED


//  Public classes, each with its own header file
#include "utils.h"
#include "baltree.h"
#include "hello.h"

#ifdef RFC_HELLO_BUILD_DRAFT_API

#ifdef __cplusplus
extern "C" {
#endif

//  Self test for private classes
RFC_HELLO_EXPORT void
    rfc_hello_private_selftest (bool verbose, const char *subtest);

#ifdef __cplusplus
}
#endif
#endif // RFC_HELLO_BUILD_DRAFT_API

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
