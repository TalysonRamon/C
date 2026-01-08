#include<stdio.h>
/*
                                Lista - Questão 134
Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
aposentar. As condições para aposentadoria são:
• Ter pelo menos 65 anos de idade.
• Ou ter trabalhado pelo menos 30 anos.
• Ou ter pelo menos 60 anos e ter trabalhado pelo menos 25 anos.
*/

int main()
{
    int idade, tempo;

    printf("Digite sua idade e seu tempo de servico: ");
    scanf("%d%d", &idade, &tempo);

    if (idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25)){
        printf("Pode se aposentar!");
    }
    else
        printf("Nao pode se aposentar!");
    
    return 0;
}
