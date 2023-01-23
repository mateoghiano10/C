/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    programa flujo de datos entrada y salida

    capitulo1, variables, expresiones iteraciones y decisiones 
    modificacion: contar caracteres
*/

#include <stdio.h>
// copia la entrada a la salida

main(){
    long nc;
    nc = 0;

    while(getchar()!=EOF)
        ++ nc; 
    // there is only one function so we can eliminate the corchetes
    
    printf("%ld\n", nc);
}