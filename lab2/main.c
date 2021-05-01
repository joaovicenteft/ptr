#include <stdio.h>
#include <stdlib.h>
#include "dstring.h"


int main(int argc, char *argv[]) {

    dstring s1 = ds_new("hello world");
    dstring s2 = ds_new(" merge thing");

    printf("base %s\n", ds_base(s1));

    size_t len = lenString(s1);
    printf("tamanho string %lu\n", len);

    dstring s3 = ds_cat(s1, s2);

    printf("%s\n", ds_base(s3));

    dstring s4 = ds_float(12.32);

    printf("int convertido para string no ADT %s\n", ds_base(s4));

    size_t len4 = lenString(s4);
    printf("tamanho string %lu\n", len4);

    dstring s5 = ds_dstring(s3);

    printf("adt copy on adt %s\n", ds_base(s5));

}