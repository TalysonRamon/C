/*
Para uma turma de 45 alunos, construa um algoritmo que determine:
a) A idade média dos alunos com menos de 1,70m de altura;
b) A altura média dos alunos com mais de 20 anos.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int idade, med = 0, cont = 0, contalt = 0, i;
    float altura, altmed = 0;

    for ( i = 1; i <= 45; i++)
    {
        printf("Digite a idade e a altura em metros do %d° aluno: ", i);
        scanf("%d%f",&idade, &altura);

        //Solução alternativa a:
        if (altura < 1.7)
        {
           med += idade;
           cont++;
        }
        
        //Solução alternativa b:
        if (idade > 20)
        {
            altmed += altura;
            contalt++;
        }
        
    }
    printf("\nA idade média dos alunos com menos de 1,70m de altura é: %d\n", med / cont);
    printf("A altura média dos alunos com mais de 20 anos é: %.2f", altmed / contalt);
    
    return 0;
}
