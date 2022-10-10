#include <stdio.h>

int main()
{
int i, n, sum=0;

printf("Cual es el numero limite: ");
scanf("%d", &n);

for(i=1; i<=n; i++)
 
{
sum += i;
}

printf("La suma de los primeros %d números naturales es = %d", n, sum);

return 0;
}