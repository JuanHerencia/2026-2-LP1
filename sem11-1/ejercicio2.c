#include<stdio.h>
#include<string.h>
// Definición de un tipo de dato llamado Alumno
struct Alumno {
   int codigo;
   char nombre[20];
   int edad;
};

// Función con argumento de tipo struct
void mostrar(struct Alumno a) {
    printf("Codigo     : %d\n", a.codigo);
    printf("Nombre     : %s\n", a.nombre);
    printf("Edad       : %d\n\n", a.edad);
}

int main()
{
    struct Alumno a1;  // Declaración de la variable a1 de tipo Alumno
    struct Alumno a2[5]; // Array de 5 alumnos
    struct Alumno a3 = {1250, "Abel", 18};
    struct Alumno a4 = {.edad = 22, .codigo = 999}; // no se ha inicializado el atributo nombre
    

    // LLenado de datos
    a1.codigo = 123;
    strcpy(a1.nombre, "Jhonny"); // asignación a cadenas
    a1.edad = 25;

    // Mostrar los datos
    mostrar(a1);
    // Mostrar datos inicializados
    mostrar(a3);
    // Mostrar datos inicializados
    mostrar(a4);


    for(int i = 0; i < 5; i++) {
        a2[i].codigo = 100 + i;
        a2[i].edad = 12 + i;
    }
    printf("Mostrar el arreglo\n");
    for(int i = 0; i < 5; i++) {
        mostrar(a2[i]);
    }
    return 0;
}