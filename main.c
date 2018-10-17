//Carlos Yael Hernandez Alcala
//A01412016
//A01412016@ITESM.MX


#include <stdio.h>

int main() {
    int n; //Esta variable le dará un tamaño al array

    printf("¿Cuantos numeros vas a introducir?\n");
    scanf("%d",&n); //Peticion de la variable que le dará un tamaño al array

    int num[n]; //array con tamaño n

    for (int i = 0; i <n ; ++i) { //Este ciclo pedirá los numeros al usuario
        printf("Dame el elemento %i",i+1);
        scanf("%i",&num[i]); //Peticion de la posicion i del array
    }

    printf("Los numeros que me diste son:\n ");

    for (int j = 0; j <n ; ++j) {
        printf("%i ",num[j]); //este ciclo imprimirá los numeros introducidos por el usuario en orden
    }
    printf("\nLos numeros que me diste, pero en orden inverso son: \n");

    for (int k = n-1; k >=0 ; --k) {
        printf("%i ",num[k]); //este ciclo imprimirá los numeros introducidos por el usuario en orden inverso
    }

    return 0;
}