#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

float total;
float camisa;
float calca;
float meia;

setlocale(LC_ALL,"");

printf("Quantas camisas?");
    scanf("%f", &camisa);
printf("Quantas calças?");
    scanf("%f", &calca);
printf("Quantas meias?");
    scanf("%f", &meia);

meia *= 2.00;
calca *= 10.00;
camisa *= 5.00;
total = meia + calca + camisa;

printf("Total gasto:%.2f", total);

return 0;
}
