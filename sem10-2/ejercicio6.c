#include <stdio.h> 

struct Estudiante {//typedef struct { 
    int codigo; 
    char nombre[30]; 
    float promedio; 
}; // Estudiante; 

int main() { 
    FILE *archivo; 
    struct Estudiante e; 
    archivo = fopen("estudiantes.dat", "wb"); 
    if (archivo == NULL) { 
    printf("Error al crear el archivo.\n"); 
        return 1; 
    } 
    // 1er registro, se pone los datos en la estructura e
    e.codigo = 1001; 
    snprintf(e.nombre, sizeof(e.nombre), "Juan Perez"); // se asigna la cadena "Juan Perez" a e.nombre
    e.promedio = 18.5f; 
    fwrite(&e, sizeof(e), 1, archivo); 

    // 2do registro, se actualiza los datos de e
    e.codigo = 1002; 
    snprintf(e.nombre, sizeof(e.nombre), "Maria Lopez"); 
    e.promedio = 17.0f; 
    fwrite(&e, sizeof(e), 1, archivo); 

    fclose(archivo); 
    printf("Archivo binario creado correctamente.\n"); 
    return 0; 
} 