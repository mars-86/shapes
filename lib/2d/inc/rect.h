#ifndef __SHAPES_LIB_2D_RECT_INCLUDED__
#define __SHAPES_LIB_2D_RECT_INCLUDED__

typedef struct _SHAPE2D rect_t;

rect_t *rect(int x1, int y1, unsigned int width, unsigned int height);
void print_rect(rect_t *rect);

#endif // __SHAPES_LIB_2D_RECT_INCLUDED__
