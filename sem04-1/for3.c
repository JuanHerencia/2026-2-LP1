#include<stdio.h>
#include<math.h>

int main()
{
    float y; 
    float error = 0.01;
    for(float x = 5; x > -5; x -= 0.1) {
        y = x*x - 6*x + 9; 
        if(fabs(y) < error) { // si | y | es menor que error
          printf("Una solucion aprox es %f\n", x);
        }
    }

    return 0;
}