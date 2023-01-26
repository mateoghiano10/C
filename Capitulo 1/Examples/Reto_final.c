/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    RETO FINAL CAPITULO 1
*/

#include <stdio.h> 
#include <stdlib.h>
#define IN 1
#define OUT 0


main(){
    int n, state, gu, gc;
    state = OUT;
    n = rand () % (122-97+1) + 97; 
    while (state != IN)
    {
        gu = getchar();
        if (gu==n)
        {
            state = IN;
        }
        else if ((gc = rand () % (122-97+1) + 97) == n)
            state = IN;
        
    }
    
    
}
