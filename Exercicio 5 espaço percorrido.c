#include <stdio.h>
#include <stdlib.h>

int main() {

float vel;
float temp;
float So;
float S;

printf("Qual � o espa�o inicial?");
scanf("%f", &So);

printf("Qual a velocidade Inicial?");
scanf("%f", &vel);

printf("Qual � o tempo inicial?");
scanf("%f", &temp);

S = So + vel * temp;

printf("Espa�o percorrido:%.2f", S);

return 0;
}
