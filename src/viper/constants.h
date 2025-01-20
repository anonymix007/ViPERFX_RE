#pragma once

#ifdef ANDROID_TOOLCHAIN
#include <android/errno.h>
#else
#include <cerrno>
#endif

#include "../log.h" // TODO: Remove this dependency

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#if defined(__arm__)
#define VIPER_ARCHITECTURE "ARM"
#elif defined(__aarch64__)
#define VIPER_ARCHITECTURE "ARM64"
#elif defined(__i386__)
#define VIPER_ARCHITECTURE "x86"
#elif defined(__x86_64__)
#define VIPER_ARCHITECTURE "x86_64"
#elif defined(__hexagon__)
#define VIPER_ARCHITECTURE "HexagonDSP"
#else
#error "Unknown architecture"
// Note from the developer:
// There's no architecture dependent code in ViPER4Android, this is just for debugging purposes.
// Feel free to add your architecture if it's not listed here.
#endif

#define VIPER_NAME "ViPER4Android"
#define VIPER_AUTHORS "viper.WYF, Martmists, Iscle"
#define VIPER_DEFAULT_SAMPLING_RATE 44100
