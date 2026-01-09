#include<stdio.h>
#include<math.h>
/*
                            Lista - Quuestão 140
Um número n no intervalo de 100 a 999 é chamado número de Angstron se n obedece
a seguinte regra:
n =centenas3 +dezenas3 +unidades3
Exemplo:
153 = 13 +53 +33
Escreva um programa que leia um número inteiro no intervalo [100;999] e veri que o é
um número de Angstron
*/

int main()
{
    int i, n;

    for ( i = 0; i < 1;){
        printf("Digite um numero inteiro no intervalo [100;999]: ");
        scanf("%d", &n);
        if (n >= 100 && n <= 999){
            i++;
        }
    }

    int valorc = n / 100;
    int valord = (n / 10) % 10;
    int valoru = (n % 10) % 10;
    
    int resul = pow(valorc, 3) + pow(valord, 3) + pow(valoru, 3);

    if (n == resul){
        printf("e um numero Angstron!");
    }
    else
        printf("Nao e um numero angstron!");
    
    return 0;
}
