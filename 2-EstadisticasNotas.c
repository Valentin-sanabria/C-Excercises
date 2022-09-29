#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int i=0, j=0, promedioAlumno=0, promedioMateria=0;
    int **matrizAlumnos;
    srand(time(NULL));
    matrizAlumnos = (int **) malloc(4 * sizeof(int*));

    for(i=0; i<5;i++){
        matrizAlumnos[i] = (int*) malloc(3 * sizeof(int));
        
    }
    
    for(i=0; i<5;i++){
        for(j=0; j<5;j++){
            matrizAlumnos[i][j] = rand()%10 + 1;
        }
    }

    for(i=0; i<5;i++){
        for(j=0; j<5;j++){

            printf("%d ", matrizAlumnos[j][i]);
            promedioAlumno = promedioAlumno + matrizAlumnos[i][j];
            promedioMateria = promedioMateria + matrizAlumnos[j][i];
        }
    printf("\n");
    printf("El promedio del alumno n%d es: %d\n", i+1, promedioAlumno/5);
    printf("El promedio de la materia num %d es: %d\n", i+1,promedioMateria/5);
    promedioAlumno = 0;
    promedioMateria = 0;
    }

    return 0;
}
