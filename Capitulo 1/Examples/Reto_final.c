/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    RETO FINAL CAPITULO 1
*/

#include <stdio.h> 
#include <stdlib.h>
#define IN 1
#define OUT 0


main(){
    int n, state, gu, gc; // user guess, computer guess, number
    state = OUT;
    srand(getpid()); 
    n = rand () % (122-97+1) + 97; 
    printf("Bienvenido a take a guess!\nEste juego consiste en " 
        "adivinar una letra antes que la maquina lo haga por ti.\n");
    while (state != IN)
    {                    
        gu = getchar();
        if (gu != n)
        {
            printf("Lo siento! Esa no era la letra.\n");
            if (gu > n)
                printf("Debe de ingresar una letra menor a la ingresada.\n");
            else if (gu < n)
                printf("Debe de ingresar una letra mayor a la ingresada.\n");
        }
        else if (gu == n)
        {
            printf("Felicidades! Acertaste!\n");
            state = IN;
        }
        if ((gc =rand () % (122-97+1) + 97) == n)
        {
            printf("La maquina ha acertado el numero.\n");
            state = IN;
        }
        gu = getchar();    
    }
    printf("Gracias por participar!");
}
