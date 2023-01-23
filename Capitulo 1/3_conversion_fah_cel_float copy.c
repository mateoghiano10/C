/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    programa de conversion de Fahrenhein a Celsius

    capitulo1, variables, expresiones e iteraciones
*/

#include <stdio.h>
// imprime la tabla de F-C para fahr=0,20,...,300

main(){
    float fahr, celsius;
    int lower, upper, step;

    lower=0;
    upper=300;
    step=20;

    fahr = lower;

    while(fahr<=upper){
        celsius = (5.0/9.0)*(fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;  
    }
}   