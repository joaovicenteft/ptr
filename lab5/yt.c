#include "yt.h"

double* yt_f(int t) {
    
    matrix *matrixyt = matrix_createMatrix("Matrix yt(t)",3,1);

    double *yt_values = malloc(sizeof(double)*3);

    if (t < 0) {
        return 0;
    } else if (t < 10) {
        yt_values[0] = sin(0.2*3.14*t);
        yt_values[1] = cos(0.2*3.14*t);
        yt_values[2] = 0.2*3.14*t;

        return yt_values;

    } else if (t <= 20) {
        yt_values[0] = sin(-0.2*3.14*t);
        yt_values[1] = cos(-0.2*3.14*t);
        yt_values[2] = -0.2*3.14*t;

        return yt_values;

    } else {
        return 0;
    }
}