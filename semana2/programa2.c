/*programa 2, semana 2, creado el 16-agosto-2018 pro Ismael Juarez Palacios*/
#include<stdio.h>

int main()
{

int a, b, c, d, n1, n2, n3, n4;
printf("introduce tu primer numero \n");
scanf("%d", &a);
printf("introduce tu segundo numero \n");
scanf("%d", &b);
printf("introduce tu tercer numero \n");
scanf("%d", &c);
printf("introduce tu cuarto numero \n");
scanf("%d", &d);

n1= (a+b)*c/d;
n2= ((a+b)*c)/d;
n3= (a+b)*c/d;
n4= a+(b*c)/d;



printf("los resultados de las operaciones son: %d,\n %d,\n %d,\n %d,\n", n1, n2, n3, n4);






return 0;
}

