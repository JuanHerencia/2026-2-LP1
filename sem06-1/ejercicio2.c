#include<stdio.h>
#define FILAS    5
#define COLUMNAS 4

int main()
{
    // Definir un arreglo bidimensional
    double matriz[FILAS][COLUMNAS];

    // Inicializar sus elementos con cero
    for(size_t f = 0; f < FILAS; f++) {
        for(size_t c = 0; c < COLUMNAS; c++) {
            matriz[f][c] = 0.0;
        }
    }

    // Mostrar la matriz
    for(size_t f = 0; f < FILAS; f++) {
        for(size_t c = 0; c < COLUMNAS; c++) {
            printf("\t%lf",matriz[f][c]); // el elemento en memoria es f*FILAS + COLUMNAS
        }
        printf("\n"); // cambiar de línea
    }


    return 0;
}