#include "cliente.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int cargarDescripcionCliente(char descripcion[],int id, eCliente clientes[],int tamCli)
{

    int todoOk=0;

for(int i=0; i < tamCli ; i++){

    if(clientes[i].id == id){

        strcpy(descripcion,clientes[i].nombre);
        todoOk=1;

    }

}

return todoOk;

}



void mostrarClientes(eCliente clientes[],int tamCli)
{


    printf("\n\n***** Listado de Clientes *****\n");
    printf(" Id   | Clientes\n");
    printf("------------------\n");


    for(int i=0 ; i < tamCli ;i++)
    {

        printf("  %4d  |  %-10s \n",clientes[i].id ,clientes[i].nombre);


    }

}



