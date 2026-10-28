#include <stdio.h> 
int main(void) { 
    int numero = 100; 
    int *ptr = &numero; // toma la dirección de numero
    int **pptr = &ptr;  // toma la dirección de la dirección de numero 

    printf("numero = %d, direccion %p\n", numero, &numero); 
    printf("*ptr = %d, direccion %p\n", *ptr, ptr); 
    printf("**pptr = %d, direccion %p\n", **pptr, pptr); 

    **pptr = 200; 
    printf("Nuevo numero = %d\n", numero); 
    return 0; 
} 