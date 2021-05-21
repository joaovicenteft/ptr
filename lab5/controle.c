#include "controle.h"

void controle(char *nameFile) {

    int t = 20;
    double *values_yt = malloc(sizeof(double)*3);
    while (t >= 0 ) {
        
        values_yt = yt_f(t);
        
        writeString(values_yt, t, nameFile);
        t--;
    }

}

void writing(char *string, char *file) {
    
    FILE *fp = fopen(file, "a+");
    fputs(string, fp);
    fputs("\n", fp);

}

void writeString(double* values, int t, char*nameFile) {

    char *tab = "   ";
    char *names = "   t           ut(v)       u(w)        xc           yc         theta";
    char finalString[200];

    char t_char[2];
    char t_values1[25], t_values2[25], t_values3[25];
    char ut_values1[25], ut_values2[25];
    double *ut_values = malloc(sizeof(double)*2);

    sprintf(t_char, "%d", t);
    //printf("o t é: %s\n", t_char);

    // tempo
    strcat(finalString, tab);    
    strcat(finalString, t_char);
    strcat(finalString, tab);
    
    ut_values = ut(t);

    //ut(v)
    sprintf(ut_values1, "%lf", ut_values[0]);
    strcat(finalString, tab);    
    strcat(finalString, ut_values1);
    strcat(finalString, tab);

    //ut(w)

    sprintf(ut_values2, "%lf", ut_values[1]);
    strcat(finalString, tab);    
    strcat(finalString, ut_values2);
    strcat(finalString, tab);

    // xc
    sprintf(t_values1, "%lf", values[0]);

    strcat(finalString, t_values1);
    strcat(finalString, tab);

    //yc
    sprintf(t_values2, "%lf", values[1]);

    strcat(finalString, t_values2);
    strcat(finalString, tab);

    //theta
    sprintf(t_values3, "%lf", values[2]);
    strcat(finalString, t_values3);
    
    printf("%s\n", finalString);
    
    if (t==20) {
        writing(names, nameFile);
    
        writing(finalString, nameFile);
    } else {
        writing(finalString, nameFile);
    }
    

    
}