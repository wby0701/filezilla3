/*
 * Find the platform-specific header for this platform.
 */

#ifndef PUTTY_PUTTYPS_H
#define PUTTY_PUTTYPS_H

#ifdef _WINDOWS

#include "windows/winstuff.h"

#else

#include "unix/unix.h"

#endif

#endif
