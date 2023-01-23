/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    programa de conversion de Fahrenhein a Celsius

    capitulo1, variables, expresiones e iteraciones
*/

#include <stdio.h>
// imprime la tabla de F-C para fahr=0,20,...,300

main(){
    int fahr;

    for (fahr=0;fahr<=300; fahr=fahr + 20)
    {
        printf("%3d %6.1f\n", fahr,(5.0/9.0)*(fahr-32));
    }
    
}   