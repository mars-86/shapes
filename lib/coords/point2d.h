#ifndef __SHAPES_LIB_COORDS_POINT_2D_INCLUDED__
#define __SHAPES_LIB_COORDS_POINT_2D_INCLUDED__

struct _POINT2D {
    int x;
    int y;
};

typedef struct _POINT2D point2d_t;

struct _POINT2D_NODE {
    point2d_t point;
    struct _POINT2D_NODE *next;
};

typedef struct _POINT2D_NODE point2d_node_t;

struct _SHAPE2D {
    point2d_t *points;
    point2d_node_t *end;
    point2d_node_t *endp;
};

typedef struct _SHAPE2D shape2d_t;

#endif // __SHAPES_LIB_COORDS_POINT_2D_INCLUDED__
