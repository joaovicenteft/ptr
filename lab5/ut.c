#include "ut.h"

double* ut(int t) {

    matrix *matrixut = matrix_createMatrix("Matrix ut(t)",2,1);

    double *ut_matrix = malloc(sizeof(double)*2);

    if (t < 0) {
        return 0;
    } else if (t < 10) {
        
        ut_matrix[0] = 1;
        ut_matrix[1] = 0.2*3.14;

        return ut_matrix;

    } else if (t >= 10) {
        ut_matrix[0] = 1;
        ut_matrix[1] = -0.2*3.14;

        return ut_matrix;
    }
} 