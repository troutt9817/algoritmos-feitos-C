#include <stdio.h>
#include <stdlib.h>

int main(){
float K;
float F;
float C;



printf("Escreva o Celsius\n");
scanf("%f", &C);

F = (9 * C+ 160)/5;
K = C + 273;

printf("F = %f", F);
printf("K = %f", K);

return 0;
}
