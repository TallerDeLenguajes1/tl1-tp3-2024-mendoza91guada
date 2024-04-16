#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int arreglo[5][12];
    int sumas[5]={0,0,0,0,0};

    srand(time(NULL));
    for (int j=0; j<13; j++)
    {
        printf("# %d     ", j);
    }
    printf("\n");
    for (int i=0; i<5; i++)
    {
        printf("#%d AÑO |", i+1);
        for (int j=0; j<12; j++)
        {
            arreglo[i][j]=10000+rand()%40000;
            printf("%d | ", arreglo[i][j]);
            sumas[i]+=arreglo[i][j];
        }
        printf("\n");
    }
    printf("\n\n---PROMEDIOS POR AÑO---\n");
    for (int i=0; i<5; i++)
    {
        printf("Año %d: %d | ",i+1, sumas[i]/12);
    }
    int max=0;
    int min=0;
    int anio_max, mes_max, anio_min, mes_min;

    for (int i=0; i<5; i++)
    {
        for (int j=0; j<12; j++)
        {
            if (arreglo[i][j]>=max)
            {
                max=arreglo[i][j];
                anio_max=i+1;
                mes_max=j+1;
            }
        }
    }
    min=max;
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<12; j++)
        {
            if (arreglo[i][j]<=min)
            {
                min=arreglo[i][j];
                anio_min=i+1;
                mes_min=j+1;
            }
        }
    }

    printf("\n\n---MAXIMOS Y MINIMOS---\n");
    printf("El máximo valor fue %d, ocurrido el mes %d del %d° año.\n", max, mes_max, anio_max);
    printf("El mínimo valor fue %d, ocurrido el mes %d del %d° año. ", min, mes_min, anio_min);


}

