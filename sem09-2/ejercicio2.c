// Puntero que cambia de direccion
#include <stdio.h> 

int main(void) { 
    int numeros[5] = {10, 20, 30, 40, 50}; 
    int *ptr = numeros; 
    printf("Direccion inicial del puntero *ptr es %p\n", ptr);
    for (int i = 0; i < 5; i++) { 
        printf("numeros[%d] = %d\n", i, *ptr); 
        ptr++;
    } 
    printf("Direccion final del puntero *ptr es %p\n", ptr);
    return 0; 
} 