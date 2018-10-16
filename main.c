//Carlos Yael Hernandez Alcala
//A01412016
//A01412016@ITESM.MX

#include <stdio.h>

int main() {
int numbers[5]={0,0,0,0,0}; //Array variable

for (int i=0; i<5;i++){    //This loop will fill the array
     printf("Gimme a number\n");
     scanf("%d",&numbers[i]);
}

    for (int j = 0; j <5 ; j++) { //This loop print the normal output
        printf("%d ",numbers[j]);
    }
    
    printf("\n"); //Line jump

    for (int k = 4; k >= 0 ; k--) { //This loop print the  reverse output
        printf("%d ",numbers[k]);
    }


    return 0;
}