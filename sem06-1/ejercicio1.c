#include<stdio.h>

int main()
{

    int c[5]; // se define el arreglo de 5 valores enteros

    printf("La direccion del arreglo c es %p\n",c);
    printf("La direccion del 1er elemento de c es %p\n",&c[0]); // & obtener la dirección de memoria
    printf("y su valor es %d\n", c[0]);
    printf("La direccion del 2do elemento de c es %p\n",&c[1]); // & obtener la dirección de memoria
    printf("y su valor es %d\n", c[1]);

    printf("Inicializar los valores a 1\n");
    for(size_t i = 0; i < 5; i++) {
        c[i] = 1; // asignación en el lugar del índice i
    }
    printf("La direccion del 1er elemento de c es %p\n",&c[0]); // & obtener la dirección de memoria
    printf("y su valor es %d\n", c[0]);
    printf("La direccion del 2do elemento de c es %p\n",&c[1]); // & obtener la dirección de memoria
    printf("y su valor es %d\n", c[1]);

    return 0;
}