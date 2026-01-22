#include<stdio.h>
/*
                        Lista - Questão 199
Faça um programa utilizando o comando while que mostra a contagem regressiva na
tela, iniciando em 10 e terminando em 0. Mostrar a mensagem FIM! após a contagem
*/
int main()
{
    int cont = 10;

    while (cont >= 0){
        printf("%d\n", cont);
        cont--;
    }
    printf("FIM!");
    return 0;
}
