#include <stdio.h>

int main()
{
int i, n;

printf("Introduce cualquier n�mero: ");
scanf("%d", &n);

printf("Los n�meros naturales del 1 al %d son: \n", n);

for(i=1; i<=n; i++)
{
printf("%d\n", i);
}

return 0;
}