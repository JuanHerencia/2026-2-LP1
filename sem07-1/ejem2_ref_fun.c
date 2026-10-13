/* Gestión de matrices */
#include<stdio.h>
#define MAX_FIL 4
#define MAX_COL 4

// Poner todos sus valores a cero
void ini_matriz(int **matriz)  {
    for(size_t i = 0; i < MAX_FIL; i++) {
      for(size_t j = 0; j < MAX_COL; j++) {
        *(*(matriz + i) + j) = 0;
      }
    }  
}

// Mostrar la matriz
void mostrar_mat(int **matriz) {
    for(size_t i = 0; i < MAX_FIL; i++) {
      for(size_t j = 0; j < MAX_COL; j++) {
        printf("%d\t", *(*(matriz + i) + j));
      }
      printf("\n");
    }
}

int main() {
    int mat1[MAX_FIL][MAX_COL]; // se crea la matriz
    int mat2[MAX_FIL][MAX_COL] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    int **ptr = mat2[0]; // Errorrrrr!!!!
    printf("Dirección 1ra fila : %p", (*ptr));
    /*
    // mat1
    printf("Matriz 1:\n");
    ini_matriz((int **)mat1);
    mostrar_mat((int **)mat1);
    // mat2
    printf("Matriz 2:\n");
    mostrar_mat((int **)mat2);
    ini_matriz((int **)mat2);
    mostrar_mat((int **)mat2);

    */
    return 0;
}