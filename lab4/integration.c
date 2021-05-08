#include "integration.h"

double romberg(Romberg *s1) {
    double h[N+1], r[N+1][N+1];
    for (int i = 1; i < N + 1; ++i) {
        h[i] = (s1->limiteSuperior - s1->limiteInferior) / pow(2, i - 1);
    }
    r[1][1] = h[1] / 2 * (s1->func(s1->limiteInferior) + s1->func(s1->limiteSuperior));
    for (int i = 2; i < N + 1; ++i) {
        double coeff = 0;
        for (int k = 1; k <= pow(2, i - 2); ++k) {
            coeff += s1->func(s1->limiteInferior + (2 * k - 1) * h[i]);
        }
        r[i][1] = 0.5 * (r[i - 1][1] + h[i - 1] * coeff);
    }
    
    for (int i = 2; i < N + 1; ++i) {
        for (int j = 2; j <= i; ++j) {
            r[i][j] = r[i][j - 1] + (r[i][j - 1] - r[i - 1][j - 1]) / (pow(4, j - 1) - 1);
        }
    }
    return r[N][N];
}

Romberg* createRombergADT(double (*func)(double), double limiteInferior, double limiteSuperior) {

    Romberg *s1;

    s1 = malloc(sizeof(Romberg));

    s1->limiteInferior = limiteInferior;
    s1->limiteSuperior = limiteSuperior;
    s1->func = func;

    return s1;
}