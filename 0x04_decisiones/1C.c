#include <stdio.h>
#include "main.h"

int TarifaX2(int consumo)
{
float consumo_basico = 0;
float consumo_XBajo = 0;
float consumo_XAlto = 0;
float consumo_Excedente = 0;

if (consumo >=0 && consumo<=150)
{
consumo_basico=(consumo*0.786);
printf("consumo basico \n");
}

if (consumo >=151 && consumo <=300)
{
consumo_basico=(150 * 0.786);
consumo_XBajo= ((consumo-150)*0.911);

printf("consumo Intermedio Bajo \n");

}
    
if (consumo >=301 && consumo <=450)
{
consumo_basico=(150 * 0.786);
consumo_XBajo= ((300-150)*0.911);
consumo_XAlto=((consumo-300)*1.177);

printf("consumo Intermedio Alto \n");

}

if (consumo >=451)
{
consumo_basico=(150*0.786);
consumo_XBajo=((300-150)*0.911);
consumo_XAlto=((450-300)*1.177);
consumo_Excedente=((consumo-450)*3.134);

printf ("consumo excedente\n");

}
printf("Cobro por consumo basico %.2f\n", consumo_basico);
printf("Cobro por consumo X.Bajo %.2f\n", consumo_XBajo);
printf("Cobro por consumo X.Alto %.2f\n", consumo_XAlto);
printf("Cobro por consumo Excedente %.2f\n", consumo_Excedente);
return (consumo_basico + consumo_XBajo + consumo_XAlto + consumo_Excedente);
}