#include<stdio.h>

int main()
{
    // Mostrar los múltiplos de 3 que hay en los
    // primeros 25 números enteros
    int hasta = 25;
    int desde = 1; 
    for(;;) // bucle, lazo, loop infinito
    {
        if(desde > hasta)
            break;
        if(desde % 3 == 0) {
            printf("%d\n", desde);
        }
        desde++;
    }
    return 0;
}