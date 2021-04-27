#include <stdio.h>
#include <stdlib.h>

int main (int arch, char *arg[]){
    char nombre[20];
    int edad;
    printf("%s","Ingrese su nombre: ");
    scanf("%s",nombre);
    printf("%s","Ingrese su edad: ");
    scanf("%i", &edad);
    printf("Le deseamos un buen dia %s su edad es %i \n", nombre, edad);
    system ("pause");
    return 0;
}
