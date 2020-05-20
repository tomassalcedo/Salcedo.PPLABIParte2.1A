#include <stdio.h>
#include <stdlib.h>
#include "auto.h"
#include "color.h"
#include "fecha.h"
#include "marca.h"
#include "servicio.h"
#include "trabajo.h"
#include "menu.h"

#define TAMM 5
#define TAMC 5
#define TAMS 4
#define TAMA 20
#define TAMT 20
#define TAMCLI 6

int main()
{



eMarca Marcas[TAMM]={{1000,"Renault"},{1001,"Fiat"},{1002,"Ford"},{1003,"Chevrolet"},{1004,"Peugeot"}};
eColor Colores[TAMC]={{5000,"Negro"},{5001,"Blanco"},{5002,"Gris"},{5003,"Rojo"},{5004 ,"Azul"}};
eServicio Servicios[TAMS]={{20000,"Lavado",250},{20001,"Pulido",300},{20002,"Encerado"   ,400},{20003,"Completo"   ,600}};
eCliente clientes[TAMCLI]={{100,"Oscar",'m'},{101,"Susana",'f'},{102,"Federico",'m'},{103,"Victoria",'f'},{104,"Pedro",'m'},{105,"Maria",'f'}};


eAuto listaA[TAMA];
eTrabajo listaT[TAMT];


char confirma;
char seguir='s';



int proximoIdA=1000;
int proximoIdT=1000;


inicializarA(listaA,TAMA);

inicializarT(listaT,TAMT);


do
{


    switch(menu())
    {

    case 'a':
        if(altaAuto(proximoIdA,listaA,TAMA,Marcas,TAMM,Colores,TAMC,clientes,TAMCLI))
        {
            proximoIdA++;
        }

        break;

    case 'b':
        modificarAuto(listaA,TAMA,Marcas,TAMM,Colores,TAMC,clientes,TAMCLI);
        system("pause");
        break;

    case 'c':
        bajaAuto(listaA,TAMA,Marcas,TAMM,Colores,TAMC,clientes,TAMCLI);
        system("pause");
        break;

    case 'd':

        mostrarAutos(listaA,TAMA,Marcas,TAMM,Colores,TAMC,clientes,TAMCLI);
        system("pause");
        break;

    case 'e':
        mostrarMarcas(Marcas,TAMM);
        printf("\n\n");
        system("pause");
        break;

    case 'f':
        mostrarColores(Colores,TAMC);
        printf("\n\n");
        system("pause");
        break;

    case 'g':
        mostrarServicios(Servicios,TAMS);
        printf("\n\n");
        system("pause");
        break;

    case 'h':
        if(altaTrabajo(proximoIdT,listaT,TAMT,listaA,TAMA,Servicios,TAMS))
        {
            proximoIdT++;

        }

        break;

    case 'i':
        mostrarTrabajos(listaT,TAMT,listaA,TAMA,Servicios,TAMS);
        printf("\n\n");
        system("pause");
        break;



    case 'j':
        informar(listaA,TAMA,Colores,TAMC,Marcas,TAMM,clientes,TAMCLI);
        system("pause");





    case 'k':
        printf("Confirma salida?: ");
        fflush(stdin);
        scanf("%c",&confirma);

        if(confirma == 's')
        {
            seguir='n';

        }


    break;




    }




}while(seguir=='s');





    return 0;
}
