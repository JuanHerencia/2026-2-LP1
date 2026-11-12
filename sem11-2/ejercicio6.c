#include <stdio.h> 
#include <math.h>
/*
   El objetivo de puntero a funciones es lograr el "polimorfismo"
*/
double seno(double x) {
    return sin(x);
}

double balistica(double x) {
    return -x*x;
}

double cubica(double x) {
    return x*x*x + 3*x*x - 2*x + 5;
}

/*
// Esta es la forma tradicional de graficar una función
// Si se desea graficar otra función hay que copiar y redefinir esta función
void graficar(double xmin, double xmax)
{
    for(double dx = xmin; dx < xmax; dx += 0.1) 
    {
        // Aquí se llama a la funcion generadora del gráfico
        seno(dx); // realmente sería plot(seno(dx));
    }
}
*/

// Esta función está lista para graficar cualquier función
void graficar(double xmin, double xmax, double (*funcion)(double))
{
    for(double dx = xmin; dx < xmax; dx += 0.1) 
    {
        // Aquí se llama a la funcion generadora del gráfico
        funcion(dx); // realmente sería plot(seno(dx));
        printf(".");
    }
}

int main() {

    printf("Graficando el seno\n");
    graficar(-3.14, 3.14, seno); // graficar el seno

    // Y como se hace para graficar la balística ?
    printf("\nGraficando el movimiento de una bala\n");
    graficar(0,25, balistica);

    // Graficar la función cúbica
    printf("\nGraficando la funcion cubica\n");
    graficar(0,5, cubica);

    return 0;
}