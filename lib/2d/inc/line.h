#ifndef __SHAPES_LIB_2D_LINE_INCLUDED__
#define __SHAPES_LIB_2D_LINE_INCLUDED__

typedef struct _SHAPE2D line_t;

line_t *line(int __x1, int __y1, int __x2, int __y2);
void print_line(line_t *line);

#endif // __SHAPES_LIB_2D_LINE_INCLUDED__
