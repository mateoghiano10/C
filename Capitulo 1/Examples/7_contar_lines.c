/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    programa flujo de datos entrada y salida 

    capitulo 1, variables, expreisonles, iteraciones y decisiones
    modificacion: contar lineas, sentencia if   

*/

#include <stdio.h>
// copia la entrada a la salida 

main(){
    int c, nl;  

    nl = 0;

    while((c = getchar())!=EOF)
        if (c == '\n')
           ++nl;

    printf("%d\n", nl);       
}