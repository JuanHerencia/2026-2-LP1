#include <stdio.h>

int main() {
    int a = 25, b = 7, c = 129;
    printf("Operadores aritmeticos\n");
    printf("La suma de %d + %d es %d\n", a,b, a + b);
    printf("La resta de %d - %d es %d\n", a,b, a - b);
    printf("La multip de %d * %d es %d\n", a,b, a * b);
    printf("La div entera de %d / %d es %d\n", a,b, a / b);
    printf("La div real de (float)%d / %d es %f\n", a,b, (float)a / b);
    printf("El resto (%%) de dividir %d entre %d es %d\n", a,b, a % b);

    printf("\nOperadores de comparacion\n");
    printf("a = %d\nb = %d\nc = %d\n",a,b,c);
    printf("¿%d > %d? es %d\n", a,b, a > b);   
    printf("¿%d > %d? es %d\n", b,c, b > c);   
    printf("%d > %d y %d > %d es %d\n", a,b,b,c,(a > b) && (b > c));  // y logico 
    printf("%d > %d o %d > %d es %d\n", a,b,b,c,(a > b) || (b > c));  // o logico
    return 0;
}