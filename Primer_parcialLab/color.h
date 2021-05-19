#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED

typedef struct{
        int id;
        char nombreColor[20];
}eColor;


#endif // COLOR_H_INCLUDED


int cargarDescColor(int idColor, eColor colores[], int tamC, char nombre[]);
