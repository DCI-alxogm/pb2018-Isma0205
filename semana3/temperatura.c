/*semana 3, Programa 1: conversión de temperaturas; creado por Ismael Juárez Palacios el 20-Agosto-2018*/
#include<stdio.h>

int main()
{

float C, Ck, CF;
printf("introduce el valor de la temperatura en Celsius \n");
scanf("%f", &C);

 Ck= C+273.15;
 CF= (C*1.800) +32;

printf("la temperatura en kelvin es: %f,\n", Ck);
 printf("la temperatura en farenheit es: %f,\n",CF);
 printf("la temperatura en Celsius es: %f,\n",C);


return 0;
}
