#include "stdlib.h"
#include "stdio.h"
#include <math.h>

#define N 5

typedef struct romberg {

    double limiteInferior;
    double limiteSuperior;
    double (*func)(double);
    double result;

} Romberg;

Romberg* createRombergADT(double (*func)(double), double limiteInferior, double limiteSuperior);

double romberg(Romberg *s1);