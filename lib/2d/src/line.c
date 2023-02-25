#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../inc/line.h"
#include "../../coords/point2d.h"
#include "../../common/common.h"

line_t *line(int x1, int y1, int x2, int y2)
{
    int __x1 = x1, __y1 = y1, __x2 = x2, __y2 = y2;
	int __dx = abs(__x2 - __x1),
        __sx = __x1 < __x2 ? 1 : -1,
		__dy = -abs(__y2 - __y1),
		__sy = __y1 < __y2 ? 1 : -1,
		__e1 = __dx + __dy;  /* error value e_xy */
    CREATE_SHAPE(line_t, line);
	while (1){   /* loop */
#ifdef __DEBUG
    printf("x1: %d - y1: %d - e1: %d", __x1, __y1, __e1);
    getchar()
#endif // __DEBUG
        INSERT_POINT(line_t, line, __x1, __y1);
		if(__x1 == __x2 && __y1 == __y2) break;
		int __e2 = __e1 << 1;
		if (__e2 >= __dy){
			__e1 += __dy; /* e_xy+e_x > 0 */
			__x1 += __sx;
		}
		if (__e2 <= __dx){ /* e_xy+e_y < 0 */
			__e1 += __dx;
			__y1 += __sy;
		}
	}
#ifdef __DEBUG
    PRINT(line_t, line);
#endif // __DEBUG
    return line;
}

void print_line(line_t *line)
{
    PRINT(line_t, line);
}
