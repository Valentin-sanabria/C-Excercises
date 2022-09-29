#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]){

    int i =5 , arrayNum []={1 ,2 ,3 ,6 ,7 ,61 ,71 ,8 ,49 ,170};
    char x = "a";
    char palabra [] = "texto en c";
    int * pi ;
    char * pc ;

    pi = &arrayNum;
    int length = sizeof(arrayNum) / sizeof(arrayNum[0]);


    printf("\nLa direccion de i es: %d y su valor es: %d\n", &i, i);
    printf("\nLa direccion de pi, puntero de i, es: %d y su valor es: %d\n", pi, *pi);

    for(int q=0; q < length ; q++){
        printf("La direccion de arrayNum%d es: %d y su valor es: %d\n",q, &arrayNum[q], arrayNum[q]);
        printf("La direccion de arrayNum%d usando punteros es: %d y su valor es: %d\n",q, pi+q , *(pi+q) );
    }


    return 0;
}
