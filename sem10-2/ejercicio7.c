#include <stdio.h> 
typedef struct { 
    int codigo; 
    char nombre[30]; 
    float promedio; 
} Estudiante; 

int main() { 
    FILE *archivo; 
    Estudiante e; 
    archivo = fopen("estudiantes.dat", "rb"); 
    if (archivo == NULL) { 
        printf("Error al abrir el archivo.\n"); 
        return 1; 
    } 
    printf("LISTADO DE ESTUDIANTES\n\n"); 
    // mientras exista 1 bloque (un registro) continuar con la lectura
    while (fread(&e, sizeof(Estudiante), 1, archivo) == 1) { 
        printf("Codigo: %d\n", e.codigo); 
        printf("Nombre: %s\n", e.nombre); 
        printf("Promedio: %.2f\n\n", e.promedio); 
    } 
    if (ferror(archivo)) { 
        printf("Ocurrio un error durante la lectura.\n"); 
    } 
    fclose(archivo); 
    return 0; 
} 