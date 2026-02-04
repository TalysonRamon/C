#include<stdio.h>
/*
                        Aula - Questão 6 | Lista IV
Faça um programa que leia 10 números reais e os armazene em um vetor. Em seguida, leia um
código inteiro e faça uma das ações abaixo:
0 – finaliza o programa;
1 – imprime o vetor na ordem do início ao fim;
2 – imprime o vetor na ordem inversa (do fim para o início).
O programa deve funcionar até que o usuário digite 0 para finalizar.
*/

int main()
{
    int i, op;
    float v1[10];

    do{
        printf("\n");
        for ( i = 0; i < 10; i++){
            printf("Digite um numero na posicao [%d] do vetor: ", i);
            scanf("%f", &v1[i]);
        }
        printf("\nDigite:\n0 - Para finalizar o programa\n1 - Para imprimir o vetor\n2 - Para imprimir o vetor na ordem inversa\nOpcao: ");
        scanf("%d", &op);
        switch (op)
        {
        case 0:
            printf("Saindo...\n");
            break;
        case 1:
            for ( i = 0; i < 10; i++){
                printf("%.2f ", v1[i]);
            }
            break;
        case 2:
            for ( i = 9; i >= 0; i--){
                printf("%.2f ", v1[i]);
            }
            break;
        default:
            printf("Codigo invalido!\nDigite novamente:\n");
            break;
        }  
    } while (op != 0);
    
    return 0;
}
