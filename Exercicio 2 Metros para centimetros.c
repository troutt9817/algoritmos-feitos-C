#include <stdio.h>
#include <stdlib.h>


int main(){
int metros;
int centimetros;

printf("Quantos metros deseja converter?");
scanf("%d", &metros);

centimetros = metros * 100;

printf("Valor convertido %d", centimetros);

return 0;
}
