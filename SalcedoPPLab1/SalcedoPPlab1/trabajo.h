#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED
#include "fecha.h"
#include "auto.h"
#include "servicio.h"

typedef struct
{

    int id;
    int patente;
    int idServicio;
    eFecha fechaTrabajo;
    int isEmpty;





}eTrabajo;


#endif // TRABAJO_H_INCLUDED




void inicializarT(eTrabajo vec[], int tam);

int buscarLibreTrabajo(eTrabajo trabajo[], int tamT);


int altaTrabajo(int idx,eTrabajo vecT[],int tamT,eAuto vecA[],int tamA,eServicio vecS[],int tamS);


void mostrarTrabajo(eTrabajo trabajo, eAuto vecA,eServicio vecS[],int tamS);





void mostrarTrabajos(eTrabajo trabajos[],int tamT,eAuto vecA[],int tamA, eServicio vecS[],int tamS);


