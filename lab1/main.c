#include "stdio.h"
#include "stdlib.h"


int retrieveMistakes(int argcc_n) {

    if (argcc_n < 2) {
        printf("O programa retornou erro, insera dois números");
        return 0;
    }
}




int main(int argc, char* argv[]) {


    int argOne = atoi(argv[1]);
    int argTwo = atoi(argv[2]);


    printf("%d %d\n", argOne, argTwo);

}