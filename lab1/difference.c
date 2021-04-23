#include "difference.h"

void difference1(char *valueOne, char*valueTwo) {
    
    int firstValue = atoi(valueOne);
    int secondValue = atoi(valueTwo);

    int differenceNumbers = firstValue-secondValue;

    printf("A diferença dos números: %d\n", differenceNumbers);
}