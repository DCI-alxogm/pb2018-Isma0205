/*ejemplo 3, semana 3, Ismael Juarez Palacios*/

#include <stdio.h>
int main()
{
int numero1, numero2;
printf("introduzca dos numeros enteros: ");
scanf("%i %i", &numero1, &numero2);

if(numero1==numero2)
{
printf("resultado: %d = %d",numero1,numero2);
}
else if (numero1> numero2)
{
printf("resultado: %d > %d", numero1, numero2);
}
else
{
printf("resultado: %d < %d", numero1, numero2);
}
return 0;
}

