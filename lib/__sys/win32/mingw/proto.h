#ifndef __LIB_SYS_WIN32_MINGW_PROTO_INCLUDED_H__
#define __LIB_SYS_WIN32_MINGW_PROTO_INCLUDED_H__

#include <stdio.h>
#include "../../types.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

extern line_t *__cdecl line(int __x1, int __y1, int __x2, int __y2)
    __MINGW_NOTHROW;

extern rect_t *__cdecl rect(int __x1, int __y1, size_t __width, size_t __height)
    __MINGW_NOTHROW;

extern square_t *__cdecl square(int __x1, int __y1, size_t __size)
    __MINGW_NOTHROW;

extern circle_t *__cdecl circle(int __x1, int __y1, size_t __radius)
    __MINGW_NOTHROW;

extern void __cdecl print_line(line_t *__line)
    __MINGW_ATTRIB_NONNULL(1) __MINGW_NOTHROW;

extern void __cdecl print_rect(rect_t *__rect)
    __MINGW_ATTRIB_NONNULL(1) __MINGW_NOTHROW;

extern void __cdecl print_square(square_t *__square)
    __MINGW_ATTRIB_NONNULL(1) __MINGW_NOTHROW;

extern void __cdecl print_circle(circle_t *__circle)
    __MINGW_ATTRIB_NONNULL(1) __MINGW_NOTHROW;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif // __LIB_SYS_WIN32_MINGW_PROTO_INCLUDED_H__
