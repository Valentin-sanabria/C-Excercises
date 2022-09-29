#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct {
    int anio, mes, dia, hora, minuto, segundo;
} Tiempo;
    

int comparaTiempos(Tiempo *t1, Tiempo *t2);
void imprimeTiempo(Tiempo *t1);

int main(int argc, char const *argv[])
{
    int i=0, j=0, resultadoComparacion=2;
    srand(time(NULL));

    Tiempo t1, t2;
    t1.anio = 1990;
    t1.mes = 2;
    t1.dia = 12;
    t1.hora = 22;
    t1.minuto = 33;
    t1.segundo = 52;

    t2.anio = 1950;
    t2.mes = 2;
    t2.dia = 16;
    t2.hora = 22;
    t2.minuto = 13;
    t2.segundo = 52;
    
    resultadoComparacion = comparaTiempos(&t1, &t2);

    if(resultadoComparacion == 1){
        printf("%d/%d/%d %d:%d:%d es el pasado de %d/%d/%d %d:%d:%d",t1.dia, t1.mes, t1.anio, t1.hora, t1.minuto, t1.segundo, t2.dia, t2.mes, t2.anio, t2.hora, t2.minuto, t2.segundo);
    } else if (resultadoComparacion == 0)
        {
            printf("Ambas fechas son iguales.");
        }else if (resultadoComparacion == -1)
            {
                printf("%d/%d/%d %d:%d:%d es el pasado de %d/%d/%d %d:%d:%d",t2.dia, t2.mes, t2.anio, t2.hora, t2.minuto, t2.segundo, t1.dia, t1.mes, t1.anio, t1.hora, t1.minuto, t1.segundo);
            }
    
    return 0;

}

int comparaTiempos(Tiempo *t1, Tiempo *t2){
    if( t1->anio < t2->anio){

        return 1;
    } else if (t1->anio == t2->anio)
    {
        return 0;
    } else if (t1->anio > t2->anio)
    {
        return -1;
    } else if (t1->mes < t2->mes)
    {
        return 1;
    } else if (t1->mes == t2->mes)
    {
        return 0;
    } else if (t1->mes > t2->mes)
    {
        return -1;
    }
    
}

void imprimeTiempo(Tiempo *t1){
    
    printf("La fecha y hora de hoy es: %d/%d/%d %d:%d:%d ", t1->dia, t1->mes, t1->anio, t1->hora, t1->minuto, t1->segundo);
}