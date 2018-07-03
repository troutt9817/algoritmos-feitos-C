#include <stdio.h>
#include <stdlib.h>

int main() {

float vel;
float temp;
float So;
float S;

printf("Qual é o espaço inicial?");
scanf("%f", &So);

printf("Qual a velocidade Inicial?");
scanf("%f", &vel);

printf("Qual é o tempo inicial?");
scanf("%f", &temp);

S = So + vel * temp;

printf("Espaço percorrido:%.2f", S);

return 0;
}
