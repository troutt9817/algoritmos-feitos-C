#include <stdio.h>
#include <stdlib.h>

int main(){
int a;
int b;
int c;

printf("Troca de valores");
printf("Digite valor de A.\n");
scanf("%d", &a);
printf("Digite valor de B.\n");
scanf("%d", &b);

c = a;
a = b;
b = c;
printf("Ap�s troca, A � %d. B � %d", a, b);
}
