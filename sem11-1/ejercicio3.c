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
    struct Alumno a1 = {999, "Abel", 18};  // Declaración de la variable a1 de tipo Alumno
    struct Alumno *ptr; // se crea un apuntador al tipo Alumno

    ptr = &a1;  // ptr toma la direccion de a1

    mostrar(*ptr);

    // Modificar los datos
    ptr->edad = 33;// (*ptr).edad = 33;
    mostrar(*ptr);

    return 0;
}