#ifndef AUTO_H_INCLUDED
#define AUTO_H_INCLUDED
#include "marca.h"
#include "color.h"
#include "cliente.h"

typedef struct
{

    int id;
    int patente;
    int idMarca;
    int idColor;
    int modelo;
    int isEmpty;
    int idCliente;




}eAuto;



#endif // AUTO_H_INCLUDED



void inicializarA(eAuto vec[], int tamA);

int buscarLibreA(eAuto vec[],int tamA);

int altaAuto(int idx,eAuto vecA[],int tamA,eMarca vecB[],int tamM,eColor vecC[],int tamC,eCliente cliente[],int tamCli);

void mostrarAuto(eAuto coche,eMarca vecM[],int tamM,eColor vecC[],int tamC,eCliente cliente[],int tamCli);

void mostrarAutos(eAuto vecA[],int tamA,eMarca vecM[],int tamM,eColor vecC[],int tamC,eCliente cliente[],int tamCli);

void bajaAuto(eAuto vecA[], int tamA,eMarca vecM[], int tamM,eColor vecC[],int tamC,eCliente cliente[],int tamCli);

int buscarAuto(int patente, eAuto vecA[],int tamA);

void modificarAuto(eAuto vecA[],int tamA,eMarca vecM[], int tamM,eColor vecC[],int tamC,eCliente cliente[],int tamCli);

void cargarInformacionAuto(char descripcio[] ,int id,eAuto vecA[],int tamA);










//parte de informes


void mostrarAutoPorColor(eAuto vecA[],int tamA,eMarca vecM[],int tamM,eColor vecC[],int tamC,eCliente cliente[],int tamCli);

void mostrarAutoPorMarca(eAuto vecA[],int tamA,eMarca vecM[],int tamM,eColor vecC[],int tamC,eCliente cliente[],int tamCli);

int contarAutosColorYmarca(eAuto vecA[],int tamA,eMarca vecM[],int tamM,eColor vecC[],int tamC,eCliente cliente[],int tamCli);




