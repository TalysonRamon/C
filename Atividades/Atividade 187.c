#include<stdio.h>
/*
                            Lista - Questão 187
Escreva um programa completo que permita a qualquer aluno introduzir, pelo teclado,
uma sequência arbitrária de notas (válidas no intervalo de 10 a 20) e que mostre na
tela, como resultado, a média aritmética correspondente. O número de notas com que
o aluno pretente efetuar o cálculo não será fornecido ao programa, o qual terminará
quando for introduzido um valor que não seja válido como nota.
*/

int main()
{
    float nota, soma = 0;
    int cont = 0;
    
    do{
        printf("Digite a nota [10, 20]: ");
        scanf("%f", &nota);

        if (nota >= 10 && nota <= 20){
            soma += nota;
            cont ++;
        }
        
    } while (nota >= 10 && nota <= 20);

    printf("Media Aritmetica: %.2f\n", soma / cont);
    
    return 0;
}
