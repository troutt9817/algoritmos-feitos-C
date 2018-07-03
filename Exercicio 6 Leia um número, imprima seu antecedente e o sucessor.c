#include <stdio.h>
#include <stdlib.h>

int main(){

int num;

printf("Digite um número.\n");
   scanf("%d", &num);

num -= 1;
printf("Antecedente:%d \n", num);

num += 2;
printf("Sucessor:%d \n", num);

return 0;


}
