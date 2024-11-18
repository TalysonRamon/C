//Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que
//solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que
//deverá ser paga, sabendo-se que são descontados 8% para pagamento de impostos e
//taxas devidas.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int d, q = 0;
    float ql = 0.0;
    printf("Digite a quantidade de dias trabalhadas pelo encanador: ");
    scanf("%d", &d);
    q = 30 * d;
    ql = q - (q * 8/100);
    printf("A quantia líquida que deve ser paga é: %.2f", ql);
    return 0;
}

