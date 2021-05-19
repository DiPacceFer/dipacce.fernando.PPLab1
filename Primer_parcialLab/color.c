#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "color.h"


char colores[4][20]={
        "Gris",
        "Negro",
        "Blanco",
        "Azul",
        "Rojo"
};

int cargarDescColor(int idColor, eColor colores[], int tamC, char nombre[])
{
    int todoOk=0;
    if(idColor>=5000 && idColor<=5004 && colores != NULL && tamC > 0 && nombre != NULL)
    {

    for(int i=0;i<tamC;i++)
    {
        if(colores[i].id == idColor)
        {
            strcpy(nombre, colores[i].nombreColor);
            todoOk = 1;
            break;
        }
    }
    }
    return todoOk;
}
