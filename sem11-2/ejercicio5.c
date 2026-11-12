#include <stdio.h> 
typedef struct Configuracion { 
    unsigned int flag  : 1;    // 0b0      // 1 bit de ancho
    unsigned int nivel : 3;    // 0b000    // 3 bits de ancho
    unsigned int modo : 2;     // 0b00     // 2 bits de ancho
    unsigned int prioridad : 4;// 0b0000   // 4 bits de ancho
} Confi; 

//        1100 1000
// bits altos | bits bajos

int main(){
    Confi c1;

    c1.flag = 1; // Solo se permiten valores 0 o 1, sino ERRORRRR!!!

    printf("El flag es %d\n", c1.flag);
    printf("c1 ocupa %d bytes", sizeof(Confi)); // c1 ocupa 4 bytes
    return 0;
}