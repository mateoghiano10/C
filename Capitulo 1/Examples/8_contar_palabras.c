/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    programa flujo de datos entrada y salida 

    capitulo 1, variables, expreisonles, iteraciones y decisiones
    modificacion: contar palabras, if else, define 

*/

#include <stdio.h>
// copia la entrada a la salida 
#define IN 1 // Esta dentro de la palabra 
#define OUT 0 // Esta fuera de la palabra

main(){
    int c, nl, nw, nc, state;  

    state = OUT;
    nl = nw = nc = state = 0;

    while((c = getchar())!=EOF){
        ++nc;
        if (c == '\n')
           ++nl;
        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if(state == OUT){
            ++nw;
            state = IN;
        }
    }
    printf("Numero de lineas:%d Numero de palabras:%d Numero de caracteres:%d\n", nl, nw, nc);       
}