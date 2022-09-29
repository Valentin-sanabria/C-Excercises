// Escribir una funci ́on que tome como argumento un entero positivo entre 1 y 7 y retorne un puntero a cadena con el nombre del 
// dıa de la semana correspondiente al argumento. Probar dicha funci on.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char * chooseDay(int numberDay);

int main(int argc, char const *argv[])
{
    int i=0, j=0, numDia;
    char *dia;
    printf("Ingresa un numero del 1 al 7: ");
    scanf("%d",&numDia);

    dia =  chooseDay(numDia);

    printf("El dia numero %d es: %s",numDia, dia);
    return 0;
}

char * chooseDay( int numberDay ){
    char *day;
    day = (char *) malloc( 10 * sizeof(char) );

    if(numberDay == 1){
        strcpy(day, "lunes");
        return day;
    }
    if(numberDay == 2){
        strcpy(day, "martes");
        return day;
    }
    if(numberDay == 3){
        strcpy(day, "miercoles");
        return day;
    }
    if(numberDay == 4){
        strcpy(day, "jueves");
        return day;
    }
    if(numberDay == 5){
        strcpy(day, "viernes");
        return day;
    }
    if(numberDay == 6){
        strcpy(day, "sabado");
        return day;
    }
    if(numberDay == 7){
        strcpy(day, "domingo");
        return day;
    }
}