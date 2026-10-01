#include<stdio.h>

int contador() {
    static int clave = 0; // da persistencia a la variable clave
    int k = 10; // variable efímera
    clave++;
    return clave;
}

int contador2() {
    int clave2 = 0;  // Es una variable efímera, solo existe dentro de contador2()
    clave2++;
    return clave2;
}

int clave3 = 20; // variable global
int contador3() {
    clave3++;
    return clave3;
}

int main() {

    int k = contador2(); // contador2() devuelve o retorna un valor que es asignado o recibido por k
    printf("Se registra el alumno %d\n", k);
    printf("Se registra el alumno %d\n", contador2());
    printf("Se registra el alumno %d\n", contador2());
    printf("Se registra el alumno %d\n", contador2());
    // printf("%d", clave); // clave es una variable local
    printf("Contador 3 es %d", contador3());
    return 0;
}
