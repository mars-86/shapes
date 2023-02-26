#include "../../lib.h"
#include "../../common/common.h"

rect_t *rect(int x1, int y1, size_t width, size_t height)
{
    int __x1 = x1,
        __y1 = y1,
        __width = x1 + width,
        __height = y1 + height,
        __size = (width + height) << 1;

    _CREATE_SHAPE(rect_t, rect, __size);
	while (__x1 < __width)
        _INSERT_POINT(rect, __x1++, __y1);
	while (__y1 < __height)
        _INSERT_POINT(rect, __x1, __y1++);
	while (__x1 > x1)
        _INSERT_POINT(rect, __x1--, __y1);
	while (__y1 > y1)
        _INSERT_POINT(rect, __x1, __y1--);
#ifdef __DEBUG
    PRINT(rect_t, rect);
#endif // __DEBUG
    return rect;
}

void print_rect(rect_t *rect)
{
    _PRINT(rect);
}
