#include <stdio.h>
#include "main.h"

int TarifaX3(int consumo)
{
float consumo_basico = 0;
float consumo_XBajo = 0;
float consumo_XAlto = 0;
float consumo_Excedente = 0;

if (consumo >=0 && consumo<=175)
{
consumo_basico=(consumo*0.786);
printf("consumo basico \n");
}

if (consumo >=176 && consumo <=400)
{
consumo_basico=(175 * 0.786);
consumo_XBajo= ((consumo-175)*0.911);

printf("consumo Intermedio Bajo \n");

}

if (consumo >=401 && consumo <=600)
{
consumo_basico=(175 * 0.786);
consumo_XBajo= ((400-175)*0.911);
consumo_XAlto=((consumo-400)*1.177);

printf("consumo Intermedio Alto \n");

}

if (consumo >=601)
{
consumo_basico=(175*0.786);
consumo_XBajo=((400-175)*0.911);
consumo_XAlto=((600-400)*1.177);
consumo_Excedente=((consumo-600)*3.134);

printf ("consumo excedente\n");

}
  
printf("Cobro por consumo basico %.2f\n", consumo_basico);
printf("Cobro por consumo X.Bajo %.2f\n", consumo_XBajo);
printf("Cobro por consumo X.Alto %.2f\n", consumo_XAlto);
printf("Cobro por consumo Excedente %.2f\n", consumo_Excedente);

return (consumo_basico + consumo_XBajo + consumo_XAlto + consumo_Excedente);
}