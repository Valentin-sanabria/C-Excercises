#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ** escalar (int ** matriz, int mulPor, int col, int fil );

int main(int argc, char const *argv[])
{
    int i=0, j=0, multiplicarPor=0, columnas=0, filas=0;
    srand(time(NULL));
    int ** matriz1;
    int ** matrizMultiplicada;

    printf("Cuantas columnas tiene la matriz? ");
    scanf("%d", &columnas);
    printf("Cuantas filas tiene la matriz? ");
    scanf("%d", &filas);    
    
    matriz1 = (int **) malloc(filas * sizeof(int *));
    matrizMultiplicada = (int **) malloc(filas * sizeof(int *));
    
    for(i=0;i<filas;i++){
        matriz1[i] = (int *) malloc(columnas * sizeof(int));
        matrizMultiplicada[i] = (int *) malloc(columnas * sizeof(int));
    }

    //Llenar array aleatorio
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            matriz1[i][j] = rand()%10;
        }
    }

    //Mostrar array completo
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf("%d ", matriz1[i][j]);
        }
    printf("\n");
    } 

    //Multiplicar array
    printf("Por cuanto quieres multiplicar los elementos de la matriz? ");
    scanf("%d", &multiplicarPor);

    matrizMultiplicada = escalar(matriz1, multiplicarPor, columnas, filas);

    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf("%d ", matrizMultiplicada[i][j]);
        }
    printf("\n");
    } 
    return 0;
}

int ** escalar(int ** matriz1, int multiplicarPor, int columnas, int filas){
    int i=0, j=0;
    int **matrizMultiplicada;
    matrizMultiplicada = (int **) malloc(filas * sizeof(int *));
    
    for(i=0;i<filas;i++){
        matrizMultiplicada[i] = (int *) malloc(columnas * sizeof(int));
    }

    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            matrizMultiplicada[i][j] = matriz1[i][j] * multiplicarPor;
        }
    } 
    return matrizMultiplicada;
}