int main()
{
int number;
int n;
number=1;
printf("Ingrese el valor de N: ");
scanf("%d",&n);
printf("N�meros impares del 1 al %d:\n",n);
while(number<=n)
{
if(number%2 != 0)
printf("%d ",number)
number++;
}

return 0;
}