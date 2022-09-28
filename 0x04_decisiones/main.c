#include <stdio.h>
#include "main.h"
int main()
{
int consumo;
int cobro;

char opcion;

printf("Elija la tarifa en la que se encuentra:\n");
printf("a- TarifaX \n");
printf("b- TarifaX1\n");
printf("c- TarifaX2\n");
printf("d- TarifaX3\n");
printf("e- TarifaX4\n");
printf("f- TarifaX5\n");
printf("g- TarifaX6\n");

scanf("%c",&opcion);

printf("\nIngrese su consumo mensual en KWh: \n");
scanf("%d",&consumo);

switch (opcion)
{
case 'XX':
cobro= TarifaX(consumo);
break;
case 'X1':
cobro= TarifaX1(consumo);
break;
case 'X2':
cobro= TarifaX2(consumo);
break;
case 'X3':
cobro= TarifaX3(consumo);
break;
case 'X4':
cobro= TarifaX4(consumo);
break;
case 'X5':
cobro= TarifaX5(consumo);
break;
case 'X6':
cobro= TarifaX6(consumo);
break;
default:
printf ("Opcion no valida\n");

return (1);

}

printf ("El costo a pagar por KWh es de: %.2d\n",cobro);
}