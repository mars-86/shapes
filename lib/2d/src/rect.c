#include "../../lib.h"
#include "../../common/common.h"

rect_t *rect(int x1, int y1, size_t width, size_t height)
{
    int __x1 = x1, __y1 = y1, __width = width - 1, __height = height - 1;
    CREATE_SHAPE(rect_t, rect);
	while (__x1 < __width)
        INSERT_POINT(rect_t, rect, __x1++, __y1);
	while (__y1 < __height)
        INSERT_POINT(rect_t, rect, __x1, __y1++);
	while (__x1 > x1)
        INSERT_POINT(rect_t, rect, __x1--, __y1);
	while (__y1 > y1)
        INSERT_POINT(rect_t, rect, __x1, __y1--);
#ifdef __DEBUG
    PRINT(rect_t, rect);
#endif // __DEBUG
    return rect;
}

void print_rect(rect_t *rect)
{
    PRINT(rect_t, rect);
}
