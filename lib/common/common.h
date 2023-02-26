#ifndef __SHAPES_LIB_COMMON_INCLUDED__
#define __SHAPES_LIB_COMMON_INCLUDED__

#include <stdlib.h>
#include "../coords/point2d.h"

static inline point2d_node_t *create_node(int __x, int __y)
{
    point2d_node_t *__node = (point2d_node_t *)malloc(sizeof(point2d_node_t));
    __node->point.x = __x;
    __node->point.y = __y;
    __node->next = NULL;

    return __node;
}

#define CREATE_SHAPE(type, name) \
    type *name = (type *)malloc(sizeof(type)); \
    name->points = NULL; \
    name->end = NULL; \
    name->endp = NULL;

#define INSERT_POINT(type, shape, x, y) \
    do { \
        type* __shape_tmp = (type *)shape; \
        point2d_node_t *point = create_node(x, y); \
        if (__shape_tmp->points == NULL) { \
            __shape_tmp->end = __shape_tmp->points = point; \
            __shape_tmp->endp = point->next; \
        } else { \
            __shape_tmp->end = __shape_tmp->end->next = point; \
            __shape_tmp->endp = point->next; \
        } \
    } while (0);

#define PRINT(type, shape) \
    do { \
        point2d_node_t *node = NULL; \
        for (node = shape->points; node != shape->endp; node = node->next) \
            printf("x: %d - y: %d\n", node->point.x, node->point.y); \
        \
    } while (0);
// void *create_shape(const char *type);

#endif // __SHAPES_LIB_COMMON_INCLUDED__
