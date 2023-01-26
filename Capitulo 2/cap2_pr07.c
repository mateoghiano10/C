/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    programa de conversion de Fahrenhein a Celsius

    capitulo1, variables, expresiones e iteraciones
*/

#include <stdio.h>
// imprime la tabla de F-C para fahr=0,20,...,300

float fahr_cel(float fahr);

main(){
    float fahr, celsius;
    int lower, upper, step;

    lower=0;
    upper=300;
    step=20;

    fahr = lower;

    while(fahr<=upper){
        celsius = fahr_cel(fahr);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;  
    }
}   

float fahr_cel(float fahr){
    return (5.0/9.0)*(fahr-32.0);
}