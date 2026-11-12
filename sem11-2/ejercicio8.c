#include <stdio.h> 
#include <stdlib.h> 
///////////// ARBOL BINARIO ////////////////
/*
Estructura Nodo:
    valor
    hijoIzquierdo  (apuntador a Nodo, inicialmente NULO)
    hijoDerecho    (apuntador a Nodo, inicialmente NULO)
FinEstructura
*/
typedef struct nodo {
    int valor;
    struct nodo *izq;
    struct nodo *der;
} Nodo;

Nodo* Insertar(Nodo *nodoActual, int nuevoValor) {
    if(nodoActual == NULL) {
        nodoActual = malloc(sizeof(Nodo));
        nodoActual->valor = nuevoValor;
        nodoActual->izq = NULL;
        nodoActual->der = NULL;
        return nodoActual;
    }

    if(nuevoValor < nodoActual->valor) {
        nodoActual->izq = Insertar(nodoActual->izq, nuevoValor);
    } else {
        nodoActual->der = Insertar(nodoActual->der, nuevoValor);
    }
    return nodoActual;
}

/*
Función Buscar(nodoActual, valorBuscado):
    Si nodoActual es NULO entonces:
        Retornar FALSO  // El elemento no existe
    FinSi

    Si valorBuscado == nodoActual.valor entonces:
        Retornar VERDADERO  // ¡Elemento encontrado!
    FinSi

    Si valorBuscado < nodoActual.valor entonces:
        Retornar Buscar(nodoActual.hijoIzquierdo, valorBuscado)
    Sino:
        Retornar Buscar(nodoActual.hijoDerecho, valorBuscado)
    FinSi
FinFunción
*/
int Buscar(Nodo *nodoActual, int valorBuscado) {
    if(nodoActual == NULL) {
        return 0;
    }

    if(valorBuscado == nodoActual->valor) {
        return 1;
    }

    // Comienza a profundizar la búsqueda en las ramas del árbol
    if(valorBuscado < nodoActual->valor) {
        return Buscar(nodoActual->izq, valorBuscado);
    } else {
        return Buscar(nodoActual->der, valorBuscado);
    }
}


int main()
{

    Nodo *arbol1 = NULL;

    Insertar(arbol1, 10);
    Insertar(arbol1, 12); // rama derecha
    Insertar(arbol1, 7);  // rama izquierda

    int encontrado = Buscar(arbol1, 7);
    if(encontrado) {
        printf("Valor encontrado\n");
    } else {
        printf("Valor no encontrado\n");
    }

    return 0;
}

Tarea corregir los errores y hacerlo funcionar
Implemetar la rotación de valores si rama se desbalancea
