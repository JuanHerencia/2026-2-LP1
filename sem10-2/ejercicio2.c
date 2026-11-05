#include <stdio.h> 
 
int main() { 
    FILE *archivo; 
    int caracter; 
 
    archivo = fopen("datos.txt", "r"); 
 
    if (archivo == NULL) { 
        printf("Error al abrir el archivo.\n"); 
        return 1; 
    } 
 
    // Leer 20 caracteres
    int i = 0;
    while ((caracter = fgetc(archivo)) != EOF) { 
        putchar(caracter); 
        i++;
        if(i == 20) 
            break;
    } 
 
    fclose(archivo); 
 
    return 0; 
} 