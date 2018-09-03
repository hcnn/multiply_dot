#include <stdio.h>  //printf
#include "multiply_dot.h"

int main()
{
    size_t n = 4;
    double x[] = {1,2,3,4};
    double y[] = {2,3,4,5};
    double z = multiply_dot(x,y,n);
    printf("%.1f\n", z);
}
