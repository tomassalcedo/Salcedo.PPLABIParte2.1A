#ifndef SERVICIO_H_INCLUDED
#define SERVICIO_H_INCLUDED

typedef struct
{

    int id;
    char descripcion[26];
    int precio;



}eServicio;


#endif // SERVICIO_H_INCLUDED


void cargarInformacionServicio(char descripcion[] ,int id,eServicio vecS[],int tamS);
