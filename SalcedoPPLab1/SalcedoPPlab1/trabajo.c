#include "fecha.h"
#include "trabajo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "marca.h"





void inicializarT(eTrabajo vec[], int tam)
{

    for(int i=0; i < tam; i++)
    {

        vec[i].isEmpty=1;



    }



}


int buscarLibreTrabajo(eTrabajo trabajo[], int tamT)
{
    int indice = -1;

    for(int i=0; i<tamT; i++)
    {
        if(trabajo[i].isEmpty == 1)
        {
            indice = i;
            break;
        }
    }

    return indice;
}



void mostrarTrabajo(eTrabajo trabajo, eAuto vecA,eServicio vecS[],int tamS)
{


    char nombreServicio[20];


    cargarInformacionServicio(nombreServicio,trabajo.idServicio,vecS,tamS);

    printf("  %d|        %d          |      %-10s| %02d/%02d/%4d  \n",trabajo.id,vecA.patente,nombreServicio,trabajo.fechaTrabajo.dia,trabajo.fechaTrabajo.mes,trabajo.fechaTrabajo.anio);






}









void mostrarTrabajos(eTrabajo trabajos[],int tamT,eAuto vecA[],int tamA, eServicio vecS[],int tamS)
{

     int flag=0;
    system("cls");


    system("cls");
    printf("\n     ***** Listado de Trabajos *****\n");
    printf("  Id   | Patente del Auto |   Servicio   | Fecha   \n");
    printf("---------------------------------------------------\n");
    for(int i=0; i<tamT; i++)
    {
        if(trabajos[i].isEmpty == 0)
        {
            mostrarTrabajo(trabajos[i],vecA[i],vecS,tamS);
            flag=1;

        }
    }
    if(flag==0)
    {
        printf("\n   No hay trabajo que mostrar\n\n");
    }


}



int altaTrabajo(int idx,eTrabajo vecT[],int tamT,eAuto vecA[],int tamA,eServicio vecS[],int tamS)
{


    int todoOk=0;
    int patente;
    int buscar;



    int indice = buscarLibreTrabajo(vecT,tamT);
    eTrabajo auxTrabajo;

    system("cls");
    printf("*****Alta Trabajo*****\n\n");

    if(indice== -1)
    {
        printf("Sistema Completo\n\n");
    }
    else
    {
        auxTrabajo.id= idx;


        printf("Ingrese patente: ");
        fflush(stdin);
        scanf("%d",&patente);

       buscar= buscarAuto(patente,vecA,tamA);


        if(buscar == -1)
        {
            printf("No hay registro de un auto con la patente: %d\n\n",patente);
            system("pause");


        }
        else{


             mostrarServicios(vecS,tamS);
             utn_getEntero(&auxTrabajo.idServicio,3,"\nElija una opcion: ","\n  Opcion ingresada no es valida! \n\n",20000,20003);


            printf("Ingrese fecha dd/mm/aaaa: ");
            scanf("%d/%d/%d",&auxTrabajo.fechaTrabajo.dia,&auxTrabajo.fechaTrabajo.mes,&auxTrabajo.fechaTrabajo.anio);





        auxTrabajo.isEmpty=0;

        vecT[indice]=auxTrabajo;
        todoOk=1;

        printf("\nAlta Exitosa\n\n");
        system("pause");





        }


    }











    return todoOk;








}
