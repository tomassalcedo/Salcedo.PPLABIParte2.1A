#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED

typedef struct
{

    int id;
    char nombre[21];



}eColor;


#endif // COLOR_H_INCLUDED



void cargarDescripcionColor(char descripcion[],int id,eColor colores[],int tamC);


void mostrarColores(eColor colores[],int tamC);
