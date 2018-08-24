/*ejemplo 4, semana 3, Ismael Juarez Palacios*/

#include <stdio.h>
int main()
{
char c;
int es_vocalminuscula, es_vocalmayuscula;
printf("introduce una letra: ");
scanf("%c", &c);
es_vocalminuscula = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
es_vocalmayuscula = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
if (es_vocalmayuscula || es_vocalminuscula){
printf("%c es vocal\n", c);
} else{
printf("%c es consonante\n", c);
}
return 0;
}
