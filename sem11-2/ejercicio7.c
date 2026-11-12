#include <stdio.h> 
// Definicion de la estructura apuntando a funciones
struct Calculadora { 
    int (*sumar)(int, int); 
    int (*restar)(int, int); 
    int (*multiplicar)(int, int); 
    float (*dividir)(float, float); 
}; 

// Definción de las funciones
int suma(int a, int b) { 
    return a + b; 
} 

int resta(int a, int b) { 
    return a - b; 
} 
int producto(int a, int b) { 
    return a * b; 
} 

float division(float a, float b) { 
        if (b == 0.0f) { 
        return 0.0f; 
    } 
 
    return a / b; 
} 
 
int main() { 
 
    // Vinculación de las funciones a los atributos de la estructura
    struct Calculadora c = { 
        .sumar = suma, 
        .restar = resta, 
        .multiplicar = producto, 
        .dividir = division 
    }; 
 
    // Ejecución de cada función ("método")
    printf("Suma: %d\n", 
           c.sumar(10, 5)); 
 
    printf("Resta: %d\n", 
           c.restar(10, 5)); 
 
    printf("Producto: %d\n", 
           c.multiplicar(10, 5)); 
 
    printf("Division: %.2f\n", 
           c.dividir(10, 5)); 
 
    return 0; 
} 