#include <stdio.h>
int main()

{
int volumen =0;
char opcion;
float DAC =0.9;
float DAL =0.8;
float DG =0.68;
float DACE =0.79;

printf("\nHola que material va a envasar en su lata");
printf("\na-Aceite");
printf("\nb-Alcohol");
printf("\nc-Gasolina");
printf("\nd-Acetona");

printf("\nIngrese la letra mostrada alado de el material, para elegir dicho material");
scanf ("%c", &opcion);

switch(opcion)
{
case 'a':printf("Usted eligio Aceite\n");
printf("ingresa el volumen a envasar:\n");
scanf ("%c", &volumen);

break;
case 'b':printf("Usted eligio Alcohol\n");
break;
case 'c':printf("Usted eligio Gasolina\n");
break;
case 'd':printf("Usted eligio Acetona\n");
break;
default: printf("No se encuentra ninguna opcion con esa letra\n");
}


}


