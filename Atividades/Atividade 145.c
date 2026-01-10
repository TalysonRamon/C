#include<stdio.h>
/*
                    Lista - Questão 145
As tarifas de um determinado parque de estacionamento são as seguintes:
• 1a e 2a hora: R$ 1,00 cada hora.
• 3a e 4a hora: R$ 1,40 cada hora.
• 5a hora e seguintes: R$ 2,00 cada hora
O número de horas é sempre um inteiro e arredondado por excesso. Assim, quem esta
cionar durante 61 minutos pagará o equivalente a duas horas. Os momentos de chegada
ao parque e de partida são apresentados na forma hh:mm (considere que as horas vão
até 23).
Faça um programa que receba pelo teclado o momento de chegada e de partida, es
creva na tela o preço cobrado pelo estacionamento. O programa deverá realizar uma
veri cação quanto a validade das informações fornecidas. Admite-se que a chegada e
a partida se dão com intervalos não superior a 24 horas, de modo que, se a hora de
chegada é superior a hora de saída, isso significa que a partida ocorreu no dia seguinte
ao dia da chegada
*/

int main()
{
    int horacheg, mincheg, horasaida, minsaida;
    float horatot, hora;

    printf("Digite a horario de chegada hh/mm: ");
    scanf("%d%d", &horacheg, &mincheg);
    printf("Digite o horario de saida: ");
    scanf("%d%d", &horasaida, &minsaida);

    if ((horacheg - horasaida) > 23){
        printf("Horario nao valido!\n");
    }
    else{
        if (horacheg <= horasaida){
            if ((minsaida - mincheg) > 0){
                horatot = (horasaida - horacheg) + 1;
                if (horatot >= 1 && horatot <= 2){
                    printf("Preco: %.2f R$", horatot * 1.0);
                }
                else if (horatot >= 3 && horatot <= 4){
                    printf("Preco: %.2f R$", horatot * 1.4);
                }
                else
                    printf("Preco: %.2f R$", horatot * 2.0);    
            }
            else{
                hora = horasaida - horacheg;
                if (hora >= 1 && hora <= 2){
                    printf("\nPreco: %.2f R$", hora * 1.0);
                }
                else if (hora >= 3 && hora <= 4){
                    printf("\nPreco: %.2f R$", hora * 1.4);
                }
                else
                    printf("\nPreco: %.2f R$", hora * 2.0);  
            }    
        }
        else
            printf("Horario nao valido!\n");
    }
    return 0;
}
