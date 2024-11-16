//Ler um valor inteiro e exibir este valor com pelo menos três dígitos.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a;
    printf("Digite um número: ");
    scanf("%d", &a);
    printf("O número digitado com até 3 casas é: %03d", a);
    return 0;
}
