#include <stdio.h>
#include <stdlib.h>

int main(){

float l;
float w;
float h;
float v;
printf("Calcule o volume.\n\n");
printf("Qual � a altura em cm?\n");
scanf("%f", &h);

printf("Qual � o comprimento em cm\n");
scanf("%f", &l);

printf("Qual � a largura em cm\n");
scanf("%f", &w);

v = l * w * h;
printf("Volume � %.2f cm", v);


return 0;
}
