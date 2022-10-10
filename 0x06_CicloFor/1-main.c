#include <stdio.h>

int main()
{
int i, n;

printf("Introduce cualquier número: ");
scanf("%d", &n);

printf("Los números naturales del 1 al %d son: \n", n);

for(i=1; i<=n; i++)
{
printf("%d\n", i);
}

return 0;
}