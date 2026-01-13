#include<stdio.h>
#include<math.h>
/*
                            Lista - Questão 164
Faça um programa que leia três valores sendo o primeiro e o terceiro valores números
e o segundo valor um caractere. O caractere representará uma operação matemática e
deverá ser um dos seguintes: `+', `−',`∗',`/' e `'. O programa deverá calcular e exibir
o resultado da operação correspondente. Obs.: o caractere `' deverá ser usado para o
cálculo de exponenciação
*/

int main()
{
    float a, b;
    char op;

    printf("Digite dois numeros e um caracter (+, -, *, /, '^'): ");
    scanf("%f%f %c", &a, &b, &op);

    switch (op)
    {
    case '+':
        printf("Soma:\n");
        printf("%.2f + %.2f = %.2f", a, b, a + b);
        break;
    case '-':
        printf("Subtracao:\n");
        printf("%.2f - %.2f = %.2f", a, b, a - b);
        break;
    case '*':
        printf("Multiplicacao:\n");
        printf("%.2f x %.2f = %.2f", a, b, a * b);
        break;
    case '/':
        printf("Divisao:\n");
        if (b == 0){
            printf("Impossivel realizar divisao!");
        }
        else
             printf("%.2f / %.2f = %.2f", a, b, a / b);
        break;
        
    case '^':
        printf("Exponenciacao:\n");
        printf("%.2f elavado a %.2f = %.2f",a, b, pow(a, b));
        break;
    default:
        printf("Caracter invalido! Tente novamente!");
        break;
    }
    return 0;
}
