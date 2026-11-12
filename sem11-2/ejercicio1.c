#include<stdio.h>
/*
// Las estructuras tienen un byte adicional por cada atributo
// Porque en memoria existirá un fin de atributo
struct Dato { 
    int entero;  // 4 bytes + 1 byte de finalización
    float decimal; // 4 bytes + 1 byte de finalización
    char caracter; // 1 byte + 1 byte de finalización
};
*/

// Aqui se comparte el espacio de memoria entre los tres atributos
// Toma la dimensión de memoria del atributo que tiene mayor tamaño de memoria
union Dato { 
    int entero;  // 4 bytes + 1 byte de finalización
    float decimal; // 4 bytes + 1 byte de finalización
    char caracter; // 1 byte + 1 byte de finalización
};

int main()
{
    union Dato u1;
    union Dato *x;
    x = &u1;
    printf("El tipo entero ocupa %d bytes\n", sizeof(int));
    printf("El tipo float ocupa %d bytes\n", sizeof(float));
    printf("El tipo char ocupa %d byte\n", sizeof(char));
    printf("Un tipo de dato del tipo union Dato ocupa %d bytes\n", sizeof(union Dato));

    // Incialización
    u1.entero = 120;
    printf("Entero: %d\n", u1.entero); 
    u1.decimal = 3.1416;
    printf("Decimal: %f\n", u1.decimal); 
    printf("Entero: %d\n", u1.entero); 

    printf("(desde el puntero) Decimal: %f\n", x->decimal); 
    return 0;
}
