/*programa , semana 3, creado el 16-agosto-2018 pro Ismael Juarez Palacios*/
#include<stdio.h>

int main()
{

float a, b, c, d, n1, n2, n3, n4;
printf("introduce tu primer numero \n");
scanf("%f", &a);
printf("introduce tu segundo numero \n");
scanf("%f", &b);
printf("introduce tu tercer numero \n");
scanf("%f", &c);
printf("introduce tu cuarto numero \n");
scanf("%f", &d);

n1= (a+b)*c/d;
n2= ((a+b)*c)/d;
n3= (a+b)*c/d;
n4= a+(b*c)/d;



printf("los resultados de las operaciones son: %f,\n %f,\n %f,\n %f,\n", n1, n2, n3, n4);






return 0;
}

