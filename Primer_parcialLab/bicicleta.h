#include "color.h"
#include "tipo.h"
#ifndef BICICLETA_H_INCLUDED
#define BICICLETA_H_INCLUDED

typedef struct{
        int id;
        char marca[20];
        int idTipo;
        int idColor;
        int rodado;
        int isEmpty;
}eBicicleta;


#endif // BICICLETA_H_INCLUDED

int altaBicicleta(eBicicleta nuevaBicicleta[], int tam, int* idBicicleta);

int siguienteBicicleta(eBicicleta nuevaBicicleta[],int  tam);

void inicializarBicicletas(eBicicleta lista[],int tam);

int listarBicicletas(eBicicleta lista[], int tam, eTipo tipos[], int tamT, eColor colores[], int tamC);

int mostrarBicicleta(eBicicleta unaBicicleta, int tam, eTipo tipos[], int tamT, eColor colores[], int tamC);

int buscarBicicleta(eBicicleta lista[], int tamB, int idBicicleta);

int subMenuModificar();

int modificarBicicleta(eBicicleta lista[], int tamB, eTipo tipos[], int tamT, eColor colores[], int tamC);

int bajarBicicleta(eBicicleta lista[], int tamB, eTipo tipos[], int tamT, eColor colores[], int tamC);

void ordenarBicicletas(eBicicleta lista[], int tam);
