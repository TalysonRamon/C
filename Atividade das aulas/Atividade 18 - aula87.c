/*
Foi feita uma pesquisa entre os habitantes de uma região e foram coletados os dados de idade,
sexo (M/F) e salário de X pessoas (x deve ser informado pelo usuário). Faça um algoritmo que
informe:
a) a média de salário do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com salário até R$2000,00.
*/

#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_ALL,"Portuguese");
    int pes, idade, i, contmenor = 9999999, contmaior = 0, contf = 0;
    float sal, contsal = 0;
    char sexo;

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &pes);

    for ( i = 1; i <= pes; i++)
    {
        printf("%d° pessoa:\n", i);
        printf("Digite a idade: ");
        scanf("%d", &idade);
        if (contmenor > idade)
        {
            contmenor = idade;
        }
        if (contmaior < idade)
        {
            contmaior = idade;
        }
        
       do
       {
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);
       } while (sexo != 'M' && sexo != 'F');
       
       printf("Digite o valor do salário: ");
       scanf("%f", &sal);

       contsal += sal;

        if (sexo == 'F' && sal <= 2000)
       {
        contf++;
       }
    }

    printf("A média do salário do grupo é: %.2f\n", contsal / pes);
    printf("A maior idade do grupo é: %d\n", contmaior);   
    printf("A menor idade do grupo é: %d\n", contmenor); 
    printf("%d mulheres com salário até 2000 R$", contf);
    return 0;
}