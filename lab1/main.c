#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "sum.h"
#include "difference.h"

int failure(char **arg1) {
  
    errno = 0;

    int value = 0;

    char *end_ptr;
    char *end_ptr2;

    long parsed_value = strtol(arg1[1], &end_ptr, 10);
    
    long parsed_valueTwo = strtol(arg1[2], &end_ptr2, 10);
    
    //printf("failure %s\n", end_ptr);
    //argument check, overflow, trailing characters, underflow,  errno

    if(*end_ptr == arg1[1][0] || *end_ptr != '\0' || errno == ERANGE || 
            *end_ptr2 != '\0' || *end_ptr2 == ERANGE || *end_ptr2 == arg1[1][0]) {
        printf("remova string do meio dos números\n");
        return 0;
    } else {
        return 1;
    }
}

int verifyFailure(int argc1, char **argv1) {
    int validString;
    if (argc1 == 3) {
        validString = failure(argv1);
        return validString;

    } else {
        printf("corriga sua string ou quantidade de elementos na entrada\n");
        return 0;
    }

}

void callingFunctions(int argc1, char **argv1) {

    if(verifyFailure(argc1, argv1)) {
        sum1(argv1[1], argv1[2]);
        difference1(argv1[1], argv1[2]);
    }
}


int main(int argc, char *argv[]) {
    callingFunctions(argc, argv);
}