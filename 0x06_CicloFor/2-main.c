#include <stdio.h>

int main()
{
int i, start;

printf("Introduzca el valor inicial: ");
scanf("%d", &start);

for(i=start; i>=1; i--)
{
        printf("%d\n", i);
}

return 0;
}