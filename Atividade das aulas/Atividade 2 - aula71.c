/*
Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura
de senha incorreta informada, escrever a mensagem “Senha Invalida”. Quando a senha for
informada corretamente deve ser impressa a mensagem “Acesso Permitido” e o programa deve ser
encerrado. Considere que a senha correta é o valor 123456.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portugese");
    int senha;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    //do while para analisar se foi digitado a senha correta.
    do
    {
        printf("Senha invalida \n");
        printf("Digite a senha: ");
        scanf("%d", &senha);
    } while (senha != 123456);

    printf("\nAcesso Permitido");
    
    return 0;
}
