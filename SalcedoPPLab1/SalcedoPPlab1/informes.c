#include "informes.h"
#include "color.h"
#include "marca.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>








int menuInformes()
{
    int opcion;


    system("cls");
    printf("****Informes****\n\n");
    printf("1_Mostrar auto del color seleccionado\n");
    printf("2_Mostrar autos de una marca seleccionada.\n");
    printf("3_Elegir un color y una marca y contar cuantos autos hay de ese color y esa marca.\n");
    printf("4_Salir\n\n");

    printf("Elija una opcion: ");
    scanf("%d",&opcion);


    return opcion;
}






void informar(eAuto vecA[],int tamA,eColor vecC[],int tamC,eMarca vecM[],int tamM,eCliente vecCli[],int tamCli)
{


    char confirma;
    char seguir='s';

    do
    {


        switch(menuInformes())
        {


        case 1:
         mostrarAutoPorColor(vecA,tamA,vecM,tamM,vecC,tamC,vecCli,tamCli);
         break;

        case 2:
            mostrarAutoPorMarca(vecA,tamA,vecM,tamM,vecC,tamC,vecCli,tamCli);
            break;


        case 3:
            contarAutosColorYmarca(vecA,tamA,vecM,tamM,vecC,tamC,vecCli,tamCli);
            break;


        case 4:
            printf("Confirma salida?: ");
        fflush(stdin);
        scanf("%c",&confirma);

        if(confirma == 's')
        {
            seguir='n';

        }


    break;


        }











    }while(seguir == 's');






}
