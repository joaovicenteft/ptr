#include <stdio.h>
#include <stdlib.h>
#include "dstring.h"

void test() {

    //testando a criação de dois ADT, com duas strings
    dstring s1 = ds_new("hello world");
    dstring s2 = ds_new(" merge thing");

    // retorno da string de s1
    printf("string s1: %s\n", ds_base(s1));

    // retorno da string de s2
    printf("string s2: %s\n", ds_base(s2));

    //tamanho da string s1
    size_t len = lenString(s1);
    printf("tamanho string s1: %lu\n", len);

    //junção da string s1 e s2 em uma terceira string s3
    dstring s3 = ds_cat(s1, s2);

    // retorno da string s3, que é a junção de s1 e s2
    printf("retorno cat: %s\n", ds_base(s3));

    // criação de um ADT de string a partir de um int
    dstring s4 = ds_int(12);
    printf("int convertido para string no ADT: %s\n", ds_base(s4));

    // criação de um ADT de string a partir de um long int
    dstring s5 = ds_longint(12000);
    printf("long int convertido para string no ADT: %s\n", ds_base(s5));

    // criação de um ADT de string a partir de um float
    dstring s6 = ds_float(12.12);
    printf("float convertido para string no ADT: %s\n", ds_base(s6));

    // criação de um ADT de string a partir de outro ADT de string (s3) (hello world merge thing)
    dstring s7 = ds_dstring(s3);
    printf("ADT com outro ADT de string: %s\n", ds_base(s7));

    // retorno de char a partir de um define
    printf("operador #define com retorno char em string s3: %s\n", macroString(s3));

}


int main(int argc, char *argv[]) {

    test();

}