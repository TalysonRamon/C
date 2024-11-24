/*
Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.
*/


#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float a, b, c;
    
    printf("Digite um valor qualquer: ");
    scanf("%f", &a);
    printf("Digite outra valor qualquer: ");
    scanf("%f", &b);

    c = b;
    b = a;
    a = c;

    printf("O valor trocado para a variável a é: %.2f", b);
    printf("O valor trocado para a variável b é: %.2f", a);
    return 0;
}
