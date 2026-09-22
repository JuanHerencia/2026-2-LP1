#include<stdio.h>

int main()
{
    // Mostrar los múltiplos de 3 que hay en los
    // primeros 25 números enteros
    int hasta = 25;
    //for(inicializar contador; limitar contador; variacion contador)
    for(int desde = 1; desde <= hasta; desde++)
    {
        if(desde % 3 == 0) {
            printf("%d\n", desde);
        }
    }
    return 0;
}