#include<stdio.h>
/*
                            Lista - Questão 221
Faça um programa para ler o código, o sexo (M: masculino F: feminino) e o número de
horas/aula dada mensalmente pelos professores de uma universidade, sabendo se que
cada hora/aula vale R$ 30,00. Emita uma listagem contendo o código, o salário bruto
e o salário líquido (levando em consideração os descontos explicados a seguir) de todos
os professores. Mostre também a média dos salários líquidos dos professores do sexo
masculino e a média dos salários líquidos dos professores do sexo feminino. Considere:
• Desconto para homens, 10% e, para mulheres, 5%.
• As informações terminarão quando for lido o código = 99999.
*/

int main()
{
    int codigo, cont = 0, contf = 0;
    char sexo;
    float salario_bruto, hora, salario_liquido, soma = 0, soma2 = 0;
    float salariof, salario_liquidof;

    do
    {
        printf("Digite o codigo: ");
        scanf("%d", &codigo);
        printf("Digite o sexo (M: masculino F: feminino): ");
        scanf(" %c", &sexo);
        printf("Digite a quantidade de horas/ aula: ");
        scanf("%f", &hora);
        if (sexo == 'M' || sexo == 'm'){
            salario_bruto = hora * 30;
            salario_liquido = salario_bruto - (salario_bruto * 0.10);
            cont++;
            soma += salario_liquido;
            printf("Salario Bruto Masculino: %.2f R$\n", salario_bruto);
            printf("Salario Liquido Masculino: %.2f R$\n", salario_liquido);
        }
        if (sexo == 'F'|| sexo == 'f'){
            salariof = hora * 30;
            salario_liquidof = salariof - (salariof * 0.05);
            contf++;
            soma2 += salario_liquidof;
            printf("Salario Bruto Feminino: %.2f R$\n", salariof);
            printf("Salario Liquido Femino: %.2f R$\n", salario_liquidof);
        }
    } while (codigo < 99999 || codigo > 99999);
    
    printf("Media Salario Liquido Masculino: %.2f R$\n", soma / cont);
    printf("Media Salario Liquido Feminino: %.2f R$\n", soma2 / contf);
    return 0;
}
