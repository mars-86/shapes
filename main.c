#include <stdlib.h>
#include <stdio.h>
#include "shapes.h"

int main(int argc, char *argv[])
{
    // line_t *l1 = line(0, 0, 20, 5);
    // rect_t *r1 = rect(0, 0, 1, 1);
    square_t *s1 = square(0, 0, 5);

    // print_line(l1);
    // print_rect(r1);
    print_square(s1);

    // free(l1);
    // free(r1);
    free(s1);

    return 0;
}
