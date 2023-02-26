#include <stdlib.h>
#include <stdio.h>
#include "shapes.h"

int main(int argc, char *argv[])
{
    // line_t *l1 = line(-20, 70, 50, 143);
    // rect_t *r1 = rect(0, 0, 1, 1);
    // square_t *s1 = square(0, 0, 5);
    circle_t *c1 = circle(0, 0, 100);

    // print_line(l1);
    // print_rect(r1);
    // print_square(s1);
    print_circle(c1);

    // free(l1);
    // free(r1);
    // free(s1);
    free(c1);

    return 0;
}
