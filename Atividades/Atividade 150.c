#include<stdio.h>
#include<math.h>
/*
                            Lista - Questão 150
Ler um número e calcular sua raiz quadrada. Se o valor for negativo, o resultado da
raiz deverá estar em notação de números complexos.
*/

int main()
{
    float n1;

    printf("Digite um numero: ");
    scanf("%f", &n1);

    if (n1 < 0){
        printf("raiz quadrada de %.2f = %.2fi", n1, sqrt(-n1));
    }
    else
        printf("raiz quadrda de %.2f = %.2f", n1, sqrt(n1));
    
    return 0;
}
