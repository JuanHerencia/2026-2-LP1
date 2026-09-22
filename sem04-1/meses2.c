#include<stdio.h>

int main()
{
    int mes;

    mes = 20;

    switch( mes ) {
        case 1: 
        case 3: 
        case 5: 
        case 8: 
        case 10: 
        case 12: printf("Tiene 31 dias\n");break;

        case 4: 
        case 6: 
        case 7: 
        case 9: 
        case 11: printf("Tiene tiene 30 dias\n");break;
        case 2: printf("Febrero tiene 28\n");break;
        default: printf("Mes invalido");
    }

    return 0;
}