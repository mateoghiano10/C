/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    programa flujo de datos entrada y salida

    capitulo1, variables, expresiones iteraciones y decisiones 
    herramientas: getchar, putchar
*/

#include <stdio.h>
// copia la entrada a la salida

main(){
    int c;


    c = getchar();
    while(c!=EOF){
        printf("%c", c);
        c = getchar();
    }
    

}