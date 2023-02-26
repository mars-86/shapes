#include "../../lib.h"
#include "../../common/common.h"

square_t *square(int x1, int y1, size_t size)
{
    int __x1 = x1,
        __y1 = y1,
        __width = x1 + size,
        __height = y1 + size,
        __size = size << 2; // size * 4 edges

    _CREATE_SHAPE(square_t, square, __size);
	while (__x1 < __width)
        _INSERT_POINT(square, __x1++, __y1);
	while (__y1 < __height)
        _INSERT_POINT(square, __x1, __y1++);
	while (__x1 > x1)
        _INSERT_POINT(square, __x1--, __y1);
	while (__y1 > y1)
        _INSERT_POINT(square, __x1, __y1--);
#ifdef __DEBUG
    PRINT(square_t, square);
#endif // __DEBUG
    return square;
}

void print_square(square_t *square)
{
    _PRINT(square);
}
