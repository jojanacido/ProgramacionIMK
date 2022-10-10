#include <stdio.h>

int main()
{
int i, n;
  
printf("Cual es el numero limite: ");
scanf("%d", &n);

printf("Los números pares del 1 al %d son: \n", n);

for(i=1; i<=n; i++)
{

if(i%2 == 0)
{
            printf("%d\n", i);
}
}

    return 0;
}