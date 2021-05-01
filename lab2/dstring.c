#include "dstring.h"

struct dstring {
    size_t size;
    char *cstr;
};

// novo ADT a partir de um char
dstring ds_new(const char* cstr) {

    dstring ds = calloc(1, sizeof(struct dstring));

    if (ds == NULL) return NULL;

    size_t len = strlen(cstr);

    ds->cstr = calloc(len+1, sizeof(char));
    ds->size = len;

    strcpy(ds->cstr, cstr);

    if(ds->cstr == NULL) return NULL;

    return ds;

}

// novo ADT a partir de um inteiro, onde o inteiro é convertido em char*
dstring ds_int(const int numstr) {

    // casting int to char*

    char *str;

    str = (char*)malloc(sizeof(numstr));

    sprintf(str, "%d", numstr);

    dstring ds = calloc(1, sizeof(struct dstring));

    if (ds == NULL) return NULL;


    size_t len = strlen(str);

    ds->cstr = calloc(len+1, sizeof(char));
    ds->size = len;

    strcpy(ds->cstr, str);

    if(ds->cstr == NULL) return NULL;

    return ds;
}

dstring ds_dstring(const dstring otherdstring) {

    dstring ds = calloc(1, sizeof(struct dstring));

    if (ds == NULL) return NULL;

    ds->cstr = otherdstring->cstr;
    ds->size = otherdstring->size;

    if(ds->cstr == NULL) return NULL;

    return ds;

}

dstring ds_float(const float numstr) {

    // casting int to char*

    char *str;

    str = (char*)malloc(sizeof(numstr));

    sprintf(str, "%lf", numstr);

    dstring ds = calloc(1, sizeof(struct dstring));

    if (ds == NULL) return NULL;


    size_t len = strlen(str);

    ds->cstr = calloc(len+1, sizeof(char));
    ds->size = len;

    strcpy(ds->cstr, str);

    if(ds->cstr == NULL) return NULL;

    return ds;
}

void ds_free(dstring s) {
    if (s != NULL) {
        free(s->cstr);
        free(s);
    }
}

char* ds_base(const dstring s) {
    if (s==NULL) return NULL;
    else return s->cstr;
}

size_t lenString(const dstring s) {

    if (s==NULL) return 0;
    else return s->size;
}

dstring ds_cat(const dstring s1, const dstring s2) {
    
    dstring s_cat = calloc(1, sizeof(dstring));

    if (s_cat == NULL) return NULL;

    size_t len_s_cat = (s1->size + s2->size);

    s_cat->size = len_s_cat;
    s_cat->cstr = calloc(len_s_cat+1, sizeof(char));

    if (s_cat->cstr == NULL) return NULL;

    s_cat->cstr = strcat(s_cat->cstr, s1->cstr);
    s_cat->cstr = strcat(s_cat->cstr, s2->cstr);

    return s_cat;
}