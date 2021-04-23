#include "sum.h"

void sum1(char* valueOne, char* valueTwo) {

    int firstValue = atoi(valueOne);
    int secondValue = atoi(valueTwo);

    int sumNumbers = firstValue+secondValue;

    printf("A soma dos números: %d\n", sumNumbers);
}