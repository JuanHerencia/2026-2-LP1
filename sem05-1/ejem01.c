// Instrucciones de pre-procesamiento
#include <stdio.h>
#define ANIO_ACTUAL 2027

#ifndef __linux__
#define __SO__ "Windows"
#else
#define __SO__ "Linux"
#endif

/////////////////////// Zona de prototipos
void saludar();
int devolver_anio_actual();

// función principal (main), aquí comienza todo
int main() {

    // llamada o uso de la función
    saludar();  // Toda función que se use, debe estar declarada y/o definida
    printf("El sistema operativo actual es %s", __SO__);

    return 0;
}

///////////////// Zona de definiciones de funciones
// Definicón de la función devolver_anio_actual
// Parámetros  : NINGUNO
// Salida      : 1
//               Numérico de tipo entero 
int devolver_anio_actual() {
    return ANIO_ACTUAL;
}

// Definición de la función llamada saludar()
// Parámetros : NINGUNO
// Salida     : NINGUNA (void)
void saludar()
{
    printf("Bienvenidos a SW303 en este anio %d\n", devolver_anio_actual());
}
