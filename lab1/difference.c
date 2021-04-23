#include "difference.h"

int difference(char *valueOne, char*valueTwo) {
    int firstValue = atoi(valueOne);
    int secondValue = atoi(valueTwo);

    return (firstValue - secondValue);
}