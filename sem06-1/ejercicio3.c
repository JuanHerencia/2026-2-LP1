#include<stdio.h>

int main()
{

    int *ptr;  // se define ptr como puntero
               // es una variable que opera con dirección de memoria
               // inicialmente apunta a algún lugar de la memoria (tiene un lugar de memoria)
    int cantidad = 200;               

    /* Regla: Si se crea el puntero se requiere inicializar antes de usar */

    ptr = NULL; // NULL es cero, significa que no se apunta a nada, que no tiene memoria

    // ... después de muchas líneas
    if(ptr == NULL) {
        ptr = &cantidad;
        printf("Puntero inicializado, su direccion es %p y su valor es %d", ptr, *ptr);
    } else {
        printf("El puntero ya tiene memoria, no es necesario inicializar!\n");
    }



}