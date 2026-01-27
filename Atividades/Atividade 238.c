#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*
                        Lista - Questão 238
Faça um programa que seja semelhante ao jogo de forca, mas com uma única letra. A
letra que o usuário deve adivinhar deve ser definida aleatoriamente. O usuário tem 5
chances de acertar a letra. O programa finaliza sua execução quando o usuário acerta
a letra ou quando acabam suas chances.
*/

int main()
{
    int n, cont = 0, valor;
    char l, letra;

    srand(time(NULL));
    do{
        n = rand();
        n = n % 122;
    } while (n <= 64 || (n >= 91 && n <= 96));
    
    if (n <= 90){
        n += 32;
    }
    
    l = n;
    
    do{
        printf("Digite uma letra: ");
        scanf(" %c", &letra);
        valor = letra;
        if (valor <= 90){
            valor = letra + 32;
        }
        cont++;
    } while (cont < 5 && valor != l);
    
    if (valor == l){
        printf("\nAcertou a letra!");
    }
    else
        printf("\nAcabou as chances!");
    
    return 0;
}
