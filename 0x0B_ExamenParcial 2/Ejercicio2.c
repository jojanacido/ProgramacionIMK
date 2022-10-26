#include <stdio.h>
int main(void)
{
int seguir=1;
char dia;
int hora=0;
int minutos=0;
int duracion=0;
float costo=0;
char cont;
while(seguir==1)
{
printf("Que dia hizo realizó la llamada?(L=lunes M=Martes X=Miercoles J=Jueves V= Viener S=Sabado D=Domingo)\n");
scanf("%s",&dia);

printf("A que hora realzo la llamda?(en notacion de 24 horas)\n");
scanf("%d",&hora);

printf("Cuanto minutos habia cuando hizo la llamda?(en notacion de 24 horas)\n");
scanf("%d",&minutos);

printf("Cuanto tiempo duro la llamda\n");
scanf("%d",&duracion);
if(dia=='L'||dia=='l'||dia=='M'||dia=='m'||dia=='X'||dia=='x'||dia=='J'||dia=='j'||dia=='V'||dia=='v'){
if(hora>=6 && hora<=20){
costo=duracion*.30;

printf("El costo de su llamada es de:%f\n",costo);
}else if(hora<6 || hora>20){
costo=duracion*.20;

printf("El costo de su llamada es de:%f\n",costo);
}

    
}else if(dia=='S'||dia=='s'||dia=='D'||dia=='d')
{
costo=duracion*.10;

printf("El costo de su llamada es de:%f\n",costo);
}else
{

printf("Ingreso un dato no valido\n");
}


}


}