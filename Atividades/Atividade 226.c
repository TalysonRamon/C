#include<stdio.h>
/*
                            Lista - Questão 226
Dados n e dois números inteiros positivos, i e j, diferentes de 0, imprimir em ordem
crescente os n primeiros naturais que são múltiplos de i ou de j ou de ambos.
Exemplo: Para n = 6, i = 2 e j = 3 a saída deverá ser: 0,2,3,4,6,8.
*/

int main()
{
    int i, n, j, cont = 0;

    printf("Digite a quantidade de numeros inteiros positivos: ");
    scanf("%d", &n);

    for ( i = 1; i <= 1; i++){
        for ( j = 0; j <= n * 2; j++){
            
            if (j % 2 == 0 || j % 3 == 0){
                printf("%d ", j);
                cont ++;
                if (cont == n){
                    break;
                }
            }
        }
    }
    
    return 0;
}
