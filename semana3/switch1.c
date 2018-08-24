#include <stdio.h>

int main()
{

int opcion;
printf("elige una opcion\n");
scanf("%i",&opcion);

switch(opcion)
{
opcion1:
printf("buenos dias\n");
break;

opcion2:
printf("buenas tardes\n");
break;

opcion3:
printf("buenas noches\n");
break;
}
return 0;
}
