/*
Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por
5, ou se não é divisível por nenhum deles.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n;

    printf("Digite um número inteiro diferente de 0: ");
    scanf("%d", &n);

    // obs.: só foi colocado else no final, pois um número pode ser divisivel por dois ou mais ao mesmo tempo, então ao colocar um else if o valor das outras divisôes podem ser comprometidos.
    if (n % 2 == 0)
    {
        printf("O número %d é divisivel por 2\n", n);
    }

    if (n % 3 == 0)
    {
        printf("O número %d é divisivel por 3\n", n);
    }

    if (n % 5 == 0)
    {
        printf("O número %d é divisivel por 5\n", n);
    }
    if ((n % 2 == 0 || n % 3 == 0 || n % 5 == 0)) // if caso o número não seja divisivel por nenhum desses números.
    {
        
    }
    else
    {
        printf("\nO número %d não é divisivel por 2, 3 e 5", n);
    }
    
    return 0;
}
