/*
    CURSO C LIBRO KERNIGHAN & RITCHIE 
    RETO FINAL 2
*/

#include <stdio.h>
#include <string.h>

#define IN 1
#define OUT 0

int main(){
    int i, c, t, def, state;
    char nletter[1000], p;
    char cadena[1000];
    char code[1000];
    char decode[1000];
    def = 0;
    state = OUT;

    for (i = 97; i < 123; i++)
    {
        nletter[i] = i;
    }
    while((c = getchar()) != EOF){
        if (c == 'c')
        {
            while ((c = getchar()) != EOF)
            {
                 
            for (i = 0; (c = getchar()) != EOF; i++)
            {
                cadena[i] = c;  
                def ++;
                
            }
            
            for (i = 0; i < strlen(cadena); i++)
            {
                if (cadena[i] < 110)
                    code[i] = nletter[cadena[i] + 13];
                else if (cadena[i] >= 110)
                {
                    code[i] = nletter[cadena[i] - 13];
                }
                
            }
    
            }
           
        }
        else if (c == 'd')
        {
            state = IN;
            while ((c = getchar()) != EOF)
            {
                 
            for (i = 0; (c = getchar()) != EOF; i++)
            {
                cadena[i] = c;  
                def ++;
                
            }
            
            for (i = 0; i < strlen(cadena); i++)
            {
                if (cadena[i] < 110)
                    decode[i] = nletter[cadena[i] + 13];
                else if (cadena[i] >= 110)
                {
                    decode[i] = nletter[cadena[i] - 13];
                }
                
            }
            }
        
    }
    if (state == OUT)
    {
       for (i = 0; i < (def - 1); i++)
    {
        printf("%c", code[i]);
    }
    }
    else
        for (i = 0; i < (def - 1); i++)
        {
            printf("%c", decode[i]);
        }
}
}