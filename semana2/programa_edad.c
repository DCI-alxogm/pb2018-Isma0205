/*programa 1, semana 2, creado el 16-agosto-2018 pro Ismael Juarez Palacios*/
#include<stdio.h>

int main()
{
int edad, edadproxima;
char nombre[25];

printf("ingresa tu nombre\n");
scanf("%s", &nombre);
printf("cual es tu edad\n");
scanf("%d",&edad);
edadproxima=edad+10;
printf("%s tu edad en el 2028 es: %d \n" ,nombre,edadproxima);
return 0;
}

