/*
    CURSO C LIBRO KERNIGHAN & RITCHIE 
    uso de los arreglos para el conteo de diferentes caracteres
    capitulo 2, arreglos, if-else if-else, condiciones 
    herramientas: arreglos
*/

#include <stdio.h>
/* cuenta digitos, espacios blanco y otros*/

main(){
    int c, i, nwhite, nother, npoint, ncom;
    int ndigit[10];
    // array definition 

    nwhite = nother = npoint = ncom = 0;
    for ( i = 0; i < 10; i++)
        ndigit[i] = 0;
    
    while((c=getchar()!=EOF)){
        if(c >= '0' && c <= '9'){
            ++ndigit[c-'0'];
        }
            
        else if(c == ' ' || c == '\n' || c == '\t')
            ++nwhite; 
        else if(c == '.')
            ++npoint;
        else if(c == ',')
            ++ncom;
        else
            ++nother;
    }

    // Impresion por pantalla
    printf("digitos =\n");
    for ( i = 0; i < 10; i++) 
        printf("%d",ndigit[i]);// imprimir array
    printf(", espacios blancos = %d, puntos= %d, comas= %d otros = %d\n", nwhite, npoint, ncom, nother); 
}