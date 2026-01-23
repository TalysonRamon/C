#include<stdio.h>
/*
                            Lista - Questão 216
Faça um programa que calcula a associação em paralelo de dois resistores R1 e R2
fornecidos pelo usuário via teclado. O programa ca pedindo estes valores e calculando
até que o usuário entre com um valor para a resistência igual a zero. Dica: utilize a
fórmula: R = (R1∗R2)/(R1+R2)
*/

int main()
{
    float r1, r2, R;

    do
    {
        printf("Digite os resistores R1 e R2: ");
        scanf("%f%f", &r1, &r2);

        if ((r1 + r2) == 0){
            printf("Não e possivel calcular a associacao!\n");
        }
        else{
           R = (r1 * r2) / (r1 + r2); 
           printf("Valor resistencial: %.2f\n", R);
        }
        
    } while (R < 0 || R > 0);
    
    return 0;
}
