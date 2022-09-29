#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int tamanioMatriz;
    int **array;
    srand (time(NULL) );

    printf("Whats the size of the matriz?");
    scanf("%d", &tamanioMatriz);

    printf("\n size of matriz: %d", tamanioMatriz);
    array = (int **) calloc(tamanioMatriz, sizeof(int*));
    
    for(int i = 0; i<tamanioMatriz; i++){
        array[i] = (int **) calloc(tamanioMatriz, sizeof(int*));
    }

    for(int i = 0; i<tamanioMatriz; i++){
        for(int j = 0; j<tamanioMatriz; j++){
            printf("\nIngresa el num %d de la columna %d\n", j, i);
            scanf("%d", &array[i][j]);
        }
    }
    printf("\n El array es:\n ");
    for(int i = 0; i<tamanioMatriz; i++){
        printf("\n");
        for(int j = 0; j<tamanioMatriz; j++){
           printf("%d ", array[i][j]);
        }
    }
    return 0;
}
