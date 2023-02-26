#include "../../lib.h"
#include "../../common/common.h"

circle_t *circle(int x, int y, size_t radius)
{
    int __x = x, __y = y, __radius = radius,
        __x0 = 0,
        __y0 = radius,
        __p0 = 1 - radius; // 5 / 4 - r
    CREATE_SHAPE(circle_t, circle);
    INSERT_POINT(circle_t, circle, (__x + __x0), (__y + __y0));
    INSERT_POINT(circle_t, circle, (__x - __x0), (__y - __y0 /* - 1*/));
    // __y0 - 1 prevents that last 8 points pair gets duplicate
	while (__x0 < __y0 - 1) {
		__x0 += 1;
		if (__p0 < 0)
			__p0 += (__x0 << 1) + 1;
		else {
			__y0 -= 1;
			__p0 += (__x0 << 1) + 1 - (__y0 << 1);
		}
		// insert points for all octants
        INSERT_POINT(circle_t, circle, (__x + __x0), (__y + __y0));
        INSERT_POINT(circle_t, circle, (__x + __x0), (__y - __y0 /* - 1*/));
        INSERT_POINT(circle_t, circle, (__x - __x0), (__y + __y0));
        INSERT_POINT(circle_t, circle, (__x - __x0), (__y - __y0 /* - 1*/));
        INSERT_POINT(circle_t, circle, (__x - __y0), (__y + __x0));
        INSERT_POINT(circle_t, circle, (__x - __y0), (__y - __x0 /* - 1*/));
        INSERT_POINT(circle_t, circle, (__x + __y0), (__y + __x0));
        INSERT_POINT(circle_t, circle, (__x + __y0), (__y - __x0 /* - 1*/));
	}
#ifdef __DEBUG
    PRINT(circle_t, circle);
#endif // __DEBUG
    return circle;
}

void print_circle(circle_t *circle)
{
    PRINT(circle_t, circle);
}
