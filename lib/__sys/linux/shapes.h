#ifndef __LIB_SYS_LINUX_SHAPES_INCLUDED_H__
#define __LIB_SYS_LINUX_SHAPES_INCLUDED_H__

#include <stdio.h>
#include "../../types.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

extern line_t *__cdecl line(int __x1, int __y1, int __x2, int __y2)
    __attribute__((nothrow));

extern rect_t *__cdecl rect(int __x1, int __y1, size_t __width, size_t __height)
    __attribute__((nothrow));

extern square_t *__cdecl square(int __x1, int __y1, size_t __size)
    __attribute__((nothrow));

extern circle_t *__cdecl circle(int __x1, int __y1, size_t __radius)
    __attribute__((nothrow));

extern void __cdecl print_line(line_t *__line)
    __attribute__((nothrow)) __attribute__((nonnull (1)));

extern void __cdecl print_rect(rect_t *__rect)
    __attribute__((nothrow)) __attribute__((nonnull (1)));

extern void __cdecl print_square(square_t *__square)
    __attribute__((nothrow)) __attribute__((nonnull (1)));

extern void __cdecl print_circle(circle_t *__circle)
    __attribute__((nothrow)) __attribute__((nonnull (1)));

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif // __LIB_SYS_LINUX_SHAPES_INCLUDED_H__
