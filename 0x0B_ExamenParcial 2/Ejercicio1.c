#include <stdio.h>
int main()
{
int E;
int i;
int C;
printf("Ingrese el numero de lineas:\n");
scanf("%d", &E);



for(i=1; i<=E; i++)
{
for(C=1; C<=i; C++)
{
printf(" ");
}

for(C=(2*i-2); C<(2*E-1); C++)
{
printf("*");
}

for(C=1; C<=i; C++)
{
printf(" ");
}

printf("\n");
}
return (0);
}
