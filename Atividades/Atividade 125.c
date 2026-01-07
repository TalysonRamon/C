#include<stdio.h>
/*
                                Lista - Questão 125
Dados três valores A, B e C, veri car se eles podem ser comprimentos de lados de um
triângulo e, se forma um triângulo equilátero, isósceles ou escaleno. Considere que:
• Ocomprimento de um lado do triângulo é menor que a soma dos dois outros lados;
• Umtriângulo equilátero deve ter os três lados com a mesmo tamanho;
• Umtriângulo isósceles deve ter pelo menos dois lados com a mesmo tamanho;
• Umtriângulo escaleno deve ter os três lados com tamanhos diferente
*/

int main()
{
    float a, b, c;
    
    printf("Digite o valor dos tres lados de um triangulo: ");
    scanf("%f%f%f", &a, &b, &c);

    if ((a < (b + c)) && (b < (a + c)) && (c < (a + b))){
        if (a == b && a == c){
            printf("Triangulo equilatero!");
        }
        else if (a == b || b == c || a == c){
            printf("Triangulo isosceles!");
        }
        else{
            printf("Triangulo escaleno!");
        }
    } 
    else
        printf("Nao e um triangulo!");
    return 0;
}
