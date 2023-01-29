/*
    CURSO C LIBRO KERNIGHAN & RITCHIE 
    RETO FINAL 2
*/

#include <stdio.h>

int main(){
    int i, c, t;
    char nletter[26], p, text;

    for (i = 0, p = 97; i < 26; i++, p++)
    {
        nletter[i] = p;
    }
    for (i = 0; i < 26; i++) 
        printf("%c",nletter[i]);
    while((c = getchar()) != EOF){
        if (c == 'c')
        {
            char cadena[1000];
            char codifder[1000];
            for (i = 0; (t = getchar()) != EOF; i++)
            {
                cadena[i] = t;
            }
            
            for (i = 0; i < strlen(cadena); i++)
            {
                codifder[i] = nletter[cadena[i] + 3];
            }
            
            
        }
        
    }
    
}