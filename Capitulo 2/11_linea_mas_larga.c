3/*
    CURSO C KERNIGHAN & RITCHIE 
    linea mas larga 

    capitulo 2, arreglos, funciones
    herramientas, arrays de caracteres
*/

#include <stdio.h>
#define MAXLINE 1000 /* Tamaño maximo de la linea de entrda*/

int getline2(char line[], int maxline);
void copy(char to[], char from[]); // void elemento vacio 

/* Imprime la linea de entrada mas larga*/
main(){
    int len; // longitud linea actual 
    int max; // maxima longitud vista hasta la fecha 
    char line[MAXLINE]; // linea actual 
    char longest[MAXLINE]; // linea mas larga 

    max = 0;
    while ((len = getline2(line, MAXLINE))>0)
        if(len > max){
            max = len;
            copy(longest, line);
        }
    if (max > 0)
        printf("%s", longest); // %s de longest 
    return 0; 
}  

/* getline: lee una linea en s, regresa su longitud */
int getline2(char s[], int lim){
    int c, i;

     while(((c=getchar())==' ')&&(c!=EOF)) //Elimina los espacios en blanco iniciales
       ;                     //No cuentan para la contabilizacion de linea más larga
    if((c!=' ')&&(c!=EOF)) s[i]=c;
    if(c!=EOF){
        for(i=1;(i<lim-1)&&((c=getchar())!=EOF)&&(c!='\n');++i)
            s[i]=c;
        if(c=='\n'){
            s[i]=c;
            ++i;
        }
    }
    s[i] = '\0';
    return i;
    
} // cambiamos las variables 

/* copy: copia from hacia to*/
void copy(char to[], char from[]){
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0' )
        ++i;    
    
}