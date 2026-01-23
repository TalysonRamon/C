#include<stdio.h>
#include<math.h>
/*
                            Lista - Questão 220
Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e
escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize
a entrada de dados com um valor negativo ou zero
*/

int main()
{
    int n;

    do{
        printf("Digite um valor: ");
        scanf("%d", &n);
        if (n > 0){
            printf("O quadrado de %d: %.2f\n", n, pow(n, 2));
            printf("O cubo de %d: %.2f\n", n, pow(n, 3));
            printf("A raiz quadrada de %d: %.2f\n", n, sqrt(n));
        }
        else{

        }
    } while (n > 0);
    
    return 0;
}
