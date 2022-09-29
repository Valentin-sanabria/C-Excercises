#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i=0,j=0, columnas=0, filas=0;
    srand(time(NULL));
    int **matriz1;
    int **matriz2;
    int **matrizTranspuesta;

    printf("Cuantas columnas tiene la matriz: ");
    scanf("%d",&columnas);
    printf("\nCuantas filas tiene la matriz: ");
    scanf("%d",&filas);

    matriz1 = (int **) malloc( columnas * sizeof(int *));
    matrizTranspuesta = (int **) malloc( filas * sizeof(int *));

    for(i=0; i<columnas;i++){
        matriz1[i] = (int *) malloc(filas * sizeof(int));
        matrizTranspuesta[i] = (int *) malloc( columnas * sizeof(int ));
    }

    //Llenar array3
    for(i=0; i<columnas;i++){
        for(j=0; j<filas;j++){
            matriz1[i][j] = rand()%10;
        }
    }
    for(i=0; i<columnas;i++){
        for(j=0; j<filas;j++){
            matrizTranspuesta[i][j] = matriz1[i][j];
        }
    }

    //Mostrar arrays
    printf("\n Matriz normal:\n");
    for(i=0; i<columnas;i++){
        for(j=0; j<filas;j++){
            printf("%d ", matriz1[i][j] );
        }
    printf("\n");
    }

    printf("\n Matriz transpuesta:\n");
    for(i=0; i<filas;i++){
        for(j=0; j<columnas;j++){
            printf("%d ", matrizTranspuesta[j][i] );
        }
    printf("\n");
    }
}