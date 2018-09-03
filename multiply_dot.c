#include "multiply_dot.h"

double multiply_dot(const double* x, const double* y, size_t n){
    size_t i;
    double z = 0.0;
    for(i=0; i<n; i++){
        z += x[i] * y[i];
    }
    return z;
}
