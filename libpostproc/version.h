/*
 * Copyright (C) 2001-2003 Michael Niedermayer (michaelni@gmx.at)
 *
 * This file is part of FFmpeg/Libav.
 *
 * FFmpeg/Libav is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * FFmpeg/Libav is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with FFmpeg/Libav; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef POSTPROC_VERSION_H
#define POSTPROC_VERSION_H

/**
 * @file
 * libpostproc version
 */

#include <libavutil/avutil.h>

#define LIBPOSTPROC_VERSION_MAJOR 52
#define LIBPOSTPROC_VERSION_MINOR  3
#define LIBPOSTPROC_VERSION_MICRO  0

#define LIBPOSTPROC_VERSION_INT AV_VERSION_INT(LIBPOSTPROC_VERSION_MAJOR, \
                                               LIBPOSTPROC_VERSION_MINOR, \
                                               LIBPOSTPROC_VERSION_MICRO)
#define LIBPOSTPROC_VERSION     AV_VERSION(LIBPOSTPROC_VERSION_MAJOR, \
                                           LIBPOSTPROC_VERSION_MINOR, \
                                           LIBPOSTPROC_VERSION_MICRO)
#define LIBPOSTPROC_BUILD       LIBPOSTPROC_VERSION_INT

#define LIBPOSTPROC_IDENT       "postproc" AV_STRINGIFY(LIBPOSTPROC_VERSION)

/**
 * Return the LIBPOSTPROC_VERSION_INT constant.
 */
unsigned postproc_version(void);

/**
 * Return the libpostproc build-time configuration.
 */
const char *postproc_configuration(void);

/**
 * Return the libpostproc license.
 */
const char *postproc_license(void);

#endif /* POSTPROC_VERSION_H */
