#include<stdio.h>
#include<stdlib.h>

struct nodo {
    int valor;
    struct nodo *next;
};

int main() {

    //Def de lista
    struct nodo *lista = NULL;
    struct nodo *head = NULL;
    struct nodo *aux = NULL;
    
    // primer elemento
    lista = malloc(sizeof(struct nodo));

    if(lista != NULL) {  // si hay espacio de memoria, poner el 1er elemento
        lista->valor = 10;
        lista->next = NULL;
    } else {
        printf("No hay memoria");
        return 0;
    }

    //2do elemento
    head = lista; // head apunta al inicio de la lista
    head->next = malloc(sizeof(struct nodo));
    if(head->next != NULL) {  // si hay espacio de memoria, poner el 2do elemento
        head = head->next;  // head apunta al next
        head->valor = 100;
        head->next = NULL;
    } else {
        printf("No hay memoria");
        return 0;
    }

    // 3er elemento
    head->next = malloc(sizeof(struct nodo));
    if(head->next != NULL) {  // si hay espacio de memoria, poner el 2do elemento
        head = head->next;  // head apunta al next
        head->valor = 1000;
        head->next = NULL;
    } else {
        printf("No hay memoria");
        return 0;
    }

    // mostrar los valores
    head = lista; // apunta al inicio de la lista
    while(head != NULL) {
        printf("Valor : %d\n", head->valor);
        head = head->next;
    }

    // Liberar memoria
    head = lista; // apunta al inicio de la lista
    while(head != NULL) {
        printf("Valor : %d\n", head->valor);
        aux = head;
        head = head->next;
        free(aux);
    }


    return 0;
}