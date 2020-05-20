#ifndef MARCA_H_INCLUDED
#define MARCA_H_INCLUDED


typedef struct
{

    int id;
    char descripcion[21];



}eMarca;


#endif // MARCA_H_INCLUDED

int cargarDescripcionMarca(char descripcion[],int id,eMarca marcas[],int tamM);

void mostrarMarcas(eMarca marcas[],int tamM);

