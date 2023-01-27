/*
    CURSO C LIBRO KERNIGHAN & RITHCIE 
    uso de las funciones 
    
    capitulo 2, funciones, parametros 
    herramientas: funciones 
*/

#include <stdio.h>

int power(int m, int n);

main(){
    int i;
    
    for (i = 0; i < 10; i++) 
        printf("%d %d %d\n", i, power(2,i), power(-3, i));
    return 0;
}
int power(int base, int n){
    int i, p; // p is the final result 

    p = 1;
    for(i = 1; i <= n; ++i)
        p = p * base;
    return p;    
}    


