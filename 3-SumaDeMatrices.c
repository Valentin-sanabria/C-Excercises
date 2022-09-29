#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int i=0,j=0, tamanioMatriz=0;
    srand(time(NULL));
    int **matriz1;
    int **matriz2;
    int **matrizSuma;

    printf("Ingresa el tamanio de la matriz: ");
    scanf("%d",&tamanioMatriz);

    matriz1 = (int **) malloc( tamanioMatriz * sizeof(int *) );
    matriz2 = (int **) malloc( tamanioMatriz * sizeof(int *) );
    matrizSuma = (int **) malloc( tamanioMatriz * sizeof(int *) );

    for(i=0; i<tamanioMatriz;i++){
        matriz1[i] = (int *) malloc( tamanioMatriz * sizeof(int) );
        matriz2[i] = (int *) malloc( tamanioMatriz * sizeof(int) );
        matrizSuma[i] = (int *) malloc( tamanioMatriz * sizeof(int) );
    }

    //Llenar arrays
    for(i=0; i<tamanioMatriz;i++){
        for(j=0; j<tamanioMatriz; j++){
            matriz1[i][j] = rand()%10;
            matriz2[i][j] = rand()%10;
        }
    }

    //Mostrar arrays
    printf("\nArray 1: \n");
    for(i=0; i<tamanioMatriz;i++){
        for(j=0; j<tamanioMatriz; j++){
            printf("%d ",matriz1[i][j]);
        }
    printf("\n");
    }

    printf("\nArray 2: \n");
    for(i=0; i<tamanioMatriz;i++){
        for(j=0; j<tamanioMatriz; j++){
            printf("%d ",matriz2[i][j]);
        }
    printf("\n");
    }

    //Sumar arrays
    for(i=0; i<tamanioMatriz;i++){
        for(j=0; j<tamanioMatriz; j++){
            matrizSuma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    //Mostrar array sumado
    printf("\nArray suma: \n");
    for(i=0; i<tamanioMatriz;i++){
        for(j=0; j<tamanioMatriz; j++){
            printf("%d ", matrizSuma[i][j]);
        }
    printf("\n");
    }
}