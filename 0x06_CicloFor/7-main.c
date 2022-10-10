#include <stdio.h>

int main()
{
int i, n, sum=0;

printf("Cual es el numero limite: ");
scanf("%d", &n);

for(i=1; i<=n; i+=2)
{
sum += i;
}

printf("La suma de los números impares es = %d", sum);

return 0;
}
