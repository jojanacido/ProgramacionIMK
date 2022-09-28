#include <stdio.h>
#include "main.h"

int TarifaX6(int consumo)
{
float consumo_basico = 0;
float consumo_XBajo = 0;
float consumo_XAlto = 0;
float consumo_Excedente = 0;

if (consumo >=0 && consumo<=75)
{
consumo_basico=(consumo*0.786);
printf("consumo basico \n");
}
if (consumo >=76 && consumo <=140)
{
consumo_basico=(75 * 0.786);
consumo_XBajo= ((consumo-75)*0.911);

printf("consumo Intermedio Bajo \n");

}
if (consumo >=176)
{
consumo_basico=(75*0.786);
consumo_XBajo=((140-75)*0.911);
consumo_XAlto=((0)*1.177);
consumo_Excedente=((consumo-140)*3.134);

printf ("consumo excedente\n");

}
    


printf("Cobro por consumo basico %.2f\n", consumo_basico);
printf("Cobro por consumo X.Bajo %.2f\n", consumo_XBajo);
printf("Cobro por consumo X.Alto %.2f\n", consumo_XAlto);
printf("Cobro por consumo Excedente %.2f\n", consumo_Excedente);

return (consumo_basico + consumo_XBajo + consumo_XAlto + consumo_Excedente);
}