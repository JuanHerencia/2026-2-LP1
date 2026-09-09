/*
   NOTA: Compilar con la siguiente linea, a fin de mostrar ñ y acentos
   gcc hola.c -o hola.exe -fexec-charset=cp850

   Para ver el debug en un archivo ejecutable:
   Instalar en el bash de MINGW64
   pacman -S mingw-w64-x86_64-gdb
*/
#include <stdio.h>

int main() {        
    // Función principal
    // Declaración de variables 
    int edad = 25; 
    float altura = 1.75; 
    char inicial = 'J'; 
    int anio_nac = 2005;
    int x;
    // Salida con printf 
    printf("Hola mundo en C\n"); 
    printf("Edad: %d años\n", edad); 
    printf("Altura: %.2f metros\n", altura); 
    printf("Inicial: %c\n", inicial); 

    x = anio_nac++;
    printf("x es %d\n", x);
    printf("anio_nac es %d\n", anio_nac);
    return 0;        
}