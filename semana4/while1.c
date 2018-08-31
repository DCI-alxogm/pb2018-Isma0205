/*Ejercicio semana 4 de while, creado por Ricardo Ismael Juarez Palacios, 30 de Agosto del 2018*/

#include<stdio.h>
#include<math.h>
int main()
{
int l=1,opcion;
float x,y,z,r,pi,teta,c,k,f,c1;

printf("¿Que tipo de conversión quieres realizar? \n");

while (l==1){

printf("(1) conversión de temperaturas \n");
printf("(2) conversión de coordenadas \n");
scanf("%i",&opcion);

switch(opcion)
{
case 1: 
printf("Cual es la temperatura en C° que deseas convertir: \n");
scanf("%f",&c);

f= (c*1.8)+32;
k=c+273.15;

printf("La temperatura en grados K es: %f \n",k);
printf("La temperatura en grados °F es: %f \n",f);


printf("la temperatura en grados °C es: %f \n",c);
break;

case 2:
printf("introduce la coordenada cartesiana x \n");
scanf("%i",&x);
printf("introduce la coordenada cartesiana y \n");
scanf("%i",&y);
printf("introduce la coordenada cartesiana z \n");
scanf("%i",&z);

r= sqrt(pow(x,2)+ pow(y,2)+ pow(z,2));
teta= acos(z/r);
pi= atan(x/y);

printf("La coordenada esférica r es %i \n",r);
printf("La coordenada esférica pi es %i \n",pi);
printf("La coordenada esférica teta es %i \n",teta);

break;

default:
printf("error! selecciona una de las opciones \n");
break;
}

printf("Para continuar con otra opción elige el 1 o para cerrar el programa selecciona un número diferente a 1\n");
scanf("%i",&l);

}

return 0;
}
