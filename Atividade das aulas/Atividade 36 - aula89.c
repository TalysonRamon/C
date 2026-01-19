/*
Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O
monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com
grãos de trigo dispostos em um tabuleiro de xadrez (que possui 64 casas), de tal forma que o
primeiro quadro deveria conter apenas um grão e os quadros subsequentes, o dobro do quadro
anterior. Crie um programa para calcular o total de grãos de trigo que o monge recebeu.7
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;
    unsigned long long int total = 1, soma_tot = 1; //precisamos de uma variavel mais longa para caber todos os números;

    for ( i = 1; i < 64; i++)
    {
        total = total * 2; 
        soma_tot += total;
    }
    
    printf("O total de trigos recebidos: %llu", soma_tot); // código de formatação %llu para unsigned long long int;
    return 0;
}
