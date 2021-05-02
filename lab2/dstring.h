#ifndef STRING_H
#define STRING_H
#endif

#include <string.h>
#include <stdlib.h>
#include <stdio.h>


struct dstring;
typedef struct dstring* dstring;

// retorna char, utilizando define como macro
char* macroString(const dstring s);

// inicializa o tipo abstrato
dstring ds_new(const char* cstr);

// inicializa o tipo abstrato, mas dessa vez com int
dstring ds_int(const int numstr);

// inicializa o tipo abstrato, mas dessa vez com long int
dstring ds_longint(const long int numstr);

// inicializa o tipo abstrato, mas dessa vez com float
dstring ds_float(const float numstr);

// inicializa o tipo abstrato, mas dessa vez com o tipo ADT dstring
dstring ds_dstring(const dstring otherdstring);

// libera a memória alocada
void ds_free(dstring s);

// retorno da string do tad
char* ds_base(const dstring s);

// retorna o tamanho da string
size_t lenString(const dstring s);

// merge de duas strings
dstring ds_cat(const dstring s1, const dstring s2);


