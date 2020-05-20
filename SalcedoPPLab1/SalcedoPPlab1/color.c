#include <stdio.h>
#include <stdlib.h>
#include "color.h"
#include <string.h>







void cargarDescripcionColor(char descripcion[],int id, eColor colores[],int tamC)
{


    int todoOk=0;

for(int i=0; i < tamC ; i++){

    if(colores[i].id == id){

        strcpy(descripcion,colores[i].nombre);
        todoOk=1;

    }

}

return todoOk;

}



void mostrarColores(eColor colores[],int tamC)
{


    printf("\n\n***** Listado de Colores *****\n");
    printf(" Id   | Colores\n");
    printf("------------------\n");


    for(int i=0 ; i < tamC ;i++)
    {

        printf("  %4d  |  %-10s \n",colores[i].id,colores[i].nombre);


    }








}








