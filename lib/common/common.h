#ifndef __SHAPES_LIB_COMMON_INCLUDED_H__
#define __SHAPES_LIB_COMMON_INCLUDED_H__
 
#include <stdlib.h>
#include "../coords/point2d.h"

static inline point2d_node_t *create_node(int x, int y)
{
    point2d_node_t *__node = (point2d_node_t *)malloc(sizeof(point2d_node_t));
    __node->point.x = x;
    __node->point.y = y;
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

#define PRINT(shape) \
    do { \
        int i = 0; \
        point2d_node_t *node = NULL; \
        for (node = shape->points; node != shape->endp; node = node->next, ++i) \
            printf("x: %d - y: %d\n", node->point.x, node->point.y); \
        \
        printf("size: %d\n", i); \
    } while (0);
// void *create_shape(const char *type);

#define _CREATE_SHAPE(__type, __name, __size) \
    __type *__name = (__type *)malloc(sizeof(__type)); \
    /* add one to set the endp */ \
    __name->points = (point2d_t *)malloc((__size + 1)* sizeof(point2d_t)); \
    __name->end = __name->points; \
    __name->endp = __name->points + __size;

#define _INSERT_POINT(__shape, __x, __y) \
    do { \
        if (__shape->end != __shape->endp) { \
            __shape->end->x = __x; \
            __shape->end->y = __y; \
            __shape->end++; \
        } \
    } while (0);

#define _PRINT(__shape) \
    do { \
        point2d_t *__ptr = NULL; \
        for (__ptr = __shape->points; __ptr != __shape->end; ++__ptr) \
            printf("x: %d - y: %d\n", __ptr->x, __ptr->y); \
        \
    } while (0);

#endif // __SHAPES_LIB_COMMON_INCLUDED__
