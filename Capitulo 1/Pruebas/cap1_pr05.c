/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    programa flujo de datos entrada y salida 

    capitulo 1, variables, expreisonles, iteraciones y decisiones
    modificacion: contar lineas, sentencia if, espacios en blanco, tabuladores 

*/

#include <stdio.h>
// copia la entrada a la salida 

main(){
    int c, nl, ne, nt;  

    nl = ne = nt = 0;

    while((c = getchar())!=EOF)
    {
        if (c == '\n')
           ++nl;
        if (c == ' ')
            ++ne;
        if (c == '\t')
            ++nt;
    }

    printf("%d %d %d\n", nl,ne,nt);      
}