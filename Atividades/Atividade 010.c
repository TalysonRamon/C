//Ler um valor real e exibir este valor com a precisão de duas casas decimais (nem mais
//nem menos).

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float n;
    printf("Digite um número: ");
    scanf("%f", &n);
    printf("O número com duas casas decimais é: %.2f", n);
    return 0;
}
