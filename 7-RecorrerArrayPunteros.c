// Crear un programa que lea un n ́umero determinado (¡100) de reales introducidos por teclado, los almacene en un vector para luego mostrarlos en orden
// inverso Para recorrer el array deber ́a usar aritm ́etica de punteros en lugar de ́ındices del array.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int i=0, j=0, tamanioArray;
    int *arrayNum;

    printf("Cuantos numeros deseas ingresar?\n");
    scanf("%d",tamanioArray);

    arrayNum = (int *) malloc(tamanioArray * sizeof(int));

    for(i=0; i<tamanioArray;i++){
        
    }

    return 0;
}
