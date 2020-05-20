#include "auto.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "marca.h"
#include "color.h"
#include "validaciones.h"
#include "cliente.h"


void inicializarA(eAuto vec[], int tamA)
{

    for(int i=0; i < tamA ; i++)
    {

        vec[i].isEmpty=1;




    }



}

int buscarLibreA(eAuto vec[],int tamA)
{

    int indice = -1;

    for(int i=0; i < tamA ; i++)
    {

        if(vec[i].isEmpty==1)
        {
            indice= i;
            break;

        }


    }

    return indice;
}








int altaAuto(int idx,eAuto vecA[],int tamA,eMarca vecB[],int tamM,eColor vecC[],int tamC,eCliente cliente[],int tamCli)
{


    int todoOk=0;



    int indice = buscarLibreA(vecA,tamA);
    eAuto auxAuto;

    system("cls");
    printf("*****Alta Auto*****\n");

    if(indice== -1)
    {
        printf("Sistema Completo\n\n");
    }
    else
    {
        auxAuto.id= idx;
        mostrarMarcas(vecB,tamM);
        mostrarColores(vecC,tamC);
        mostrarClientes(cliente,tamCli);

        if((utn_getEntero(&auxAuto.patente,3,"\n\nIngrese patente: ","\nError.Reingrese patente: ",1,999))==0 && (utn_getEntero(&auxAuto.idMarca,3,"Ingrese id de la marca: ","\nError.Reingrese id de la marca: ",1000,1004))==0 && (utn_getEntero(&auxAuto.idColor,3,"Ingrese id del color: ","\nError .reingrese id del color: ",5000,5004))==0 &&(utn_getEntero(&auxAuto.modelo,3,"Ingrese modelo(anio de fabricacion): ","\nError reingrese modelo: ",1950,2020))==0 &&(utn_getEntero(&auxAuto.idCliente,3,"Ingrese id del cliente: ","\nErrpr.Reingrese id del cliente: ",100,105))==0)
        {

            todoOk=1;
            auxAuto.isEmpty=0;

            vecA[indice]=auxAuto;
            printf("\n\nAlta Exitosa\n\n");
            system("pause");




        }
        else
        {

            printf("\nDatos erroneos,reingreselos\n\n");
        }



    }

    return todoOk;


}


void mostrarAuto(eAuto coche,eMarca vecM[],int tamM,eColor vecC[],int tamC,eCliente cliente[],int tamCli)
{
    char descripcionMarca[20];
    char descripcionColor[20];
    char descripcionCliente[20];

    cargarDescripcionMarca(descripcionMarca,coche.idMarca,vecM,tamM);
    cargarDescripcionColor(descripcionColor,coche.idColor,vecC,tamC);
    cargarDescripcionCliente(descripcionCliente,coche.idCliente,cliente,tamCli);

    printf("%d  %d %10s%10s  %d   %10s\n\n",coche.id,coche.patente,descripcionMarca,descripcionColor,coche.modelo,descripcionCliente);



}


void mostrarAutos(eAuto vecA[],int tamA,eMarca vecM[],int tamM,eColor vecC[],int tamC,eCliente vecCli[],int tamCli)
{

    int flag=0;
    printf("*****Listado de Autos*****\n\n");
    printf("  id  Patente  Marca    Color  Modelo  Nombre del cliente\n\n");

    for(int i=0; i < tamA; i++)
    {


        if(vecA[i].isEmpty==0)
        {
            mostrarAuto(vecA[i],vecM,tamM,vecC,tamC,vecCli,tamCli);
            flag=1;

        }

    }

    if(flag==0)
    {
        printf("\nNo hay autos que mostrar\n\n");
    }


}



int buscarAuto(int patente, eAuto vecA[],int tamA)
{

    int indice= -1;

    for(int i=0; i < tamA; i++)
    {
        if(vecA[i].patente == patente && vecA[i].isEmpty==0)
        {
            indice=i;
            break;

        }

    }
    return indice;






}


void bajaAuto(eAuto vecA[], int tamA,eMarca vecM[], int tamM,eColor vecC[],int tamC,eCliente cliente[],int tamCli)
{

    int indice;
    int patente;
    char confirma;

    system("cls");
    printf("*****Baja Auto*****\n\n");
    printf("Ingrese patente: ");
    scanf("%d",&patente);

    indice = buscarAuto(patente,vecA,tamA);

    if(indice== -1)
    {
        printf("No hay registro de un auto con la patente: %d\n",patente);

    }
    else
    {
        printf("  id  Patente  Marca    Color  Modelo\n\n");
        mostrarAuto(vecA[indice],vecM,tamM,vecC,tamC,cliente,tamCli);
        printf("\nConfirma baja?: ");
        fflush(stdin);
        scanf("%c",&confirma);
        if(confirma=='s')
        {
            vecA[indice].isEmpty=1;
            printf("Se ha realizado la baja exitosamente\n\n");

        }

        else
        {
            printf("Se ha cancelado la operacion\n\n");

        }


    }


}



void modificarAuto(eAuto vecA[],int tamA,eMarca vecM[], int tamM,eColor vecC[],int tamC,eCliente cliente[],int tamCli)
{

    int indice;
    int patente;
    int nuevoColor;
    int nuevoModelo;
    int seguir='s';
    char confirma;


    do
    {

        switch(menuMod())
        {

        case 'a':
            printf("Ingrese patente: ");
            scanf("%d",&patente);


            indice = buscarAuto(patente,vecA,tamA);




            //MOSTRAR LOS COLORES CON UNA FUNCION.
            if(indice== -1)
            {

                printf("No hay registro de un auto con la patente: %d\n",patente);

            }

            else
            {
                printf("  id  Patente  Marca    Color  Modelo  Nombre del cliente\n\n");
                mostrarAuto(vecA[indice],vecM,tamM,vecC,tamC,cliente,tamCli);

                mostrarColores(vecC,tamC);

                printf("Ingrese id del color: ");
                scanf("%d",&nuevoColor);
                vecA[indice].idColor=nuevoColor;
                printf("\nColor actualizado con exito\n\n");
                system("pause");
                break;
            }




        case 'b':
            printf("Ingrese patente: ");
            scanf("%d",&patente);

            indice = buscarAuto(patente,vecA,tamA);



            if(indice== -1)
            {

                printf("No hay registro de un auto con la patente: %d\n",patente);
            }
            else
            {

                printf("  id  Patente  Marca    Color  Modelo  Nombre del cliente\n\n");
                mostrarAuto(vecA[indice],vecM,tamM,vecC,tamC,cliente,tamCli);

                printf("Ingrese modelo: ");
                scanf("%d",&nuevoModelo);

                vecA[indice].modelo = nuevoModelo;
                printf("\nModelo actualizado con exito\n\n");
                system("pause");
                break;


            }

        case 'c':
            printf("Confirma salida?: ");
            fflush(stdin);
            scanf("%c",&confirma);

            if(confirma=='s')
            {
                seguir='n';
            }


            break;




        }




    }
    while(seguir=='s');



}


void cargarInformacionAuto(char descripcion[],int id,eAuto vecA[],int tamA)
{

    int todoOk= 0;

    for(int i=0; i<tamA; i++)
    {
        if(vecA[i].id == id)
        {
            strncpy(descripcion,vecA[i].idMarca,20);
            todoOk= 1;
        }
    }
    return todoOk;
}















void mostrarAutoPorColor(eAuto vecA[],int tamA,eMarca vecM[],int tamM,eColor vecC[],int tamC,eCliente cliente[],int tamCli)
{
    int flag=0;
    int idColor;
    system("cls");
    mostrarColores(vecC,tamC);

    printf("Ingrese id del color: ");
    scanf("%d",&idColor);


    printf("  id  Patente  Marca    Color  Modelo  Nombre del cliente\n\n");
    for(int i=0; i < tamA; i++)
    {


        if(vecA[i].idColor == idColor && vecA[i].isEmpty == 0)
        {

            mostrarAuto(vecA[i],vecM,tamM,vecC,tamC,cliente,tamCli);
            system("pause");
            flag=1;

        }

    }

    if(flag==0)
    {
        printf("\nNo hay autos de ese color que mostrar\n\n");
    }


}



void mostrarAutoPorMarca(eAuto vecA[],int tamA,eMarca vecM[],int tamM,eColor vecC[],int tamC,eCliente cliente[],int tamCli)
{

    int flag=0;
    int idMarca;
    system("cls");

    mostrarMarcas(vecM,tamM);

    printf("Ingrese id de la marca: ");
    scanf("%d",&idMarca);

    printf("  id  Patente  Marca    Color  Modelo  Nombre del cliente\n\n");
    for(int i=0; i < tamA; i++)
    {


        if(vecA[i].idMarca == idMarca && vecA[i].isEmpty == 0)
        {

            mostrarAuto(vecA[i],vecM,tamM,vecC,tamC,cliente,tamCli);
            system("pause");
            flag=1;

        }

    }

    if(flag==0)
    {
        printf("\nNo hay autos de ese color que mostrar\n\n");
    }


}





int contarAutosColorYmarca(eAuto vecA[],int tamA,eMarca vecM[],int tamM,eColor vecC[],int tamC,eCliente cliente[],int tamCli)
{

    int idMarca;
    int idColor;
    int contadorAutos=0;
    int flag=0;




    system("cls");

    mostrarColores(vecC,tamC);

    mostrarMarcas(vecM,tamM);



    if((utn_getEntero(&idColor,3,"Ingrese id del color: ","\nError.Reingrese id del color: ",5000,5004))==0 && (utn_getEntero(&idMarca,3,"Ingrese id de la marca: ","\nError.Reingrese id de la marca: ",1000,1004))==0)
    {

        for(int i=0; i < tamA; i++)
        {
            if(vecA[i].idColor == idColor && vecA[i].idMarca == idMarca && vecA[i].isEmpty == 0)
            {
                contadorAutos++;
                flag=1;

            }





        }


        printf("\nCantidad de autos con el color y marca elejida: %d\n\n",contadorAutos);
        system("pause");


    }
    else
    {


        printf("\nError.Reingrese datos\n\n");


    }


}



