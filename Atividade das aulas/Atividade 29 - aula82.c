/*
Faça um programa que peça ao usuário um número inteiro maior que 2 e diga se o número
informado é primo ou não.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n, i, contp = 0;

    //do while para conferir se o usúario digitou um número maior que 2;
    do
    {
        printf("Digite um número inteiro maior que 2: ");
        scanf("%d", &n);
    } while (n <= 2);

    for ( i = n; i >= 1; i--)
    {
        //A cada número divisivel por n é adicionado mais 1 na variavel contp;
        if (n % i == 0)
        {
            contp++;
        }
        
    }
    //O número primo só é divisivel por 1 e por ele mesmo, por isso que o número é primo se a variavel contp for igual a 2;
    if (contp == 2)
    {
        printf("\nO número %d é primo! ", n);
    }
    else
    {
        printf("\nO número %d não é primo! ", n);
    }

    return 0;
}
