#include<stdio.h>
/*
            Lista - Questão 237
Faça programas para calcular as seguintes fórmulas:
1 + 2 + 3 + 4 + 5 +...+n
1 − 2 + 3 − 4 + 5 +...+(2n−1)
1 + 3 + 5 + 7 +...+ (2n−1)
*/

int main()
{
    int n, soma = 0, mult = 0, i, m, b = 1, res = 0, z;

    do{
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &n);
    } while (n <= 0);

    for ( i = 1; i <= n; i++){
        soma += i;
    }
    
    int p = 1;
    for (z = 1; z <= n; z++){
        mult += b - 2 * p;
        p++;
        b = b + 2;
    }

    for ( m = 1; m <= n; m++){
        res += 2 * m - 1;
    }
    
    printf("Formula 1: %d\n", soma);
    printf("Formula 2: %d\n", mult);
    printf("Formula 3: %d", res);

    return 0;
}
