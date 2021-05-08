#include "matrix.h"
#include <stdio.h>
#include <string.h>

void test() {

    // conjunto de valores que podem ser usados conforme a dimensão da matriz.
    // se for escolhida uma matriz 3x3, somente os 9 primeiros valores serão utilizando, linha por coluna.

    double valoresMatrix[] = {1,0,0,1,1,2,3,2,2,3,4,0,1,2,-1,-2};

    //cria primeira matriz
    matrix *matrixOne = matrix_createMatrix("Matrix 3x3",3,3);

    // colocando os 9 primeiros valores de valoresMatrix na matriz 3x3
    matrix_putValues(matrixOne, valoresMatrix);

    // cria segunda matriz
    matrix* matrixTwo = matrix_createMatrix("Matrix 3x3",3,3);

    // colocando os números de valoresMatrix defasados em 3, on seja de índice 3 até índice 12
    matrix_putValues(matrixTwo, valoresMatrix+3);


    printf("Dada as duas matrizes:\n");
    matrix_printMatrix(matrixOne);
    matrix_printMatrix(matrixTwo);

    printf("O ADT de matrizes irá fazer as seguintes operações nas matrizes 1 e 2\n");

    // soma
    printf("Soma:\n");
    //matrix *soma = matrix_sum(matrixOne,matrixTwo);
    matrix *sum2 = matrix_sum(matrixOne, matrixTwo);
    matrix_printMatrix(sum2);
    //matrix_printMatrix(soma);
    printf("\n");
    // subtração
    printf("Subtração:\n");
    matrix *subtracao = matrix_subtract(matrixOne, matrixTwo);
    matrix_printMatrix(subtracao);

    printf("\n");
    // multiplicação
    printf("Multiplicação:\n");
    matrix *multiplicacao = matrix_multiply(matrixOne, matrixTwo);
    matrix_printMatrix(multiplicacao);

    printf("\n");
    printf("Agora iremos testar a matriz variando a qtd de linhas e colunas\n Respeitando a proporção coluna==linhas\n");
    matrix *matrixThree=matrix_createMatrix("Matriz 4x2",4,2);
    
    // Colocando os valores de valoresMatrix em uma matriz 4x2
    matrix_putValues(matrixThree, valoresMatrix);


    matrix *matrixFour = matrix_createMatrix("Matriz 2x3",2,3);
    
    // Colocando os valores de valoresMatrix em uma matriz 2x3
    matrix_putValues(matrixFour, valoresMatrix+3);
    printf("\n");
    printf("Dada as duas matrizes:\n");
    matrix_printMatrix(matrixThree);
    matrix_printMatrix(matrixFour); 
    printf("\n");
    // procedimento de multiplicação com ordens diferentes
    printf("Multiplicação de matrix 4x2 pela 2x3:\n");
    matrix *multi2 = matrix_multiply(matrixThree, matrixFour);
    matrix_printMatrix(multi2);
    printf("\n");

    printf("Operações com escalar\n");
    matrix_printMatrix(matrixFour);
    printf("\n");
    printf("Matriz 2x3 com escalar de 5\n");
    matrix_addScalar(matrixFour, 5);

    printf("\n");

    matrix_printMatrix(matrixFour);
    printf("\n");
    printf("Matriz 2x3 com redução de escalar 5\n");
    matrix_addScalar(matrixFour,-10);

    printf("\n");
    matrix_printMatrix(matrixFour);
    matrix_addScalar(matrixFour, 5);

    printf("\n");
    // Matriz com multiplicação em escalar
    printf("Matriz 2x3 multiplicada pelo escalar 5\n");
    matrix_multiScalar(matrixFour, 5);
    matrix_printMatrix(matrixFour);
    printf("\n");

    // Matriz transposta
    printf("Agora demonstrando a matriz tranposta:\n");
    matrix_printMatrix(matrixFour);
    printf("\n");
    multi2 = matrix_transposed(matrixFour);
    matrix_printMatrix(multi2);
    printf("\n");
    // Determinante
    printf("Para o exemplo do determinante, temos a seguinte matriz:\n");

    matrix *matrizA = matrix_createMatrix("MatrizA",4,4);
    matrix_putValues(matrizA,valoresMatrix);
    printf("\n");
    matrix_printMatrix(matrizA);
    printf("\n");
    printf("Determinante: %lf\n",matrix_determinant(matrizA));

    //Matriz inversa
    printf("\n");
    printf("Matriz invertida de será:");
    
    multi2=matrix_invers(matrizA);
    matrix_printMatrix(multi2);


}



int main(int argc, char *argv[]) {
    test();
}