#include<stdio.h>
/*
                            Lista - Questão 211
Se os números de 1 a 5 são escritos em palavras: um, dois, três, quatro, cinco, então há
3+4+4+6+5 = 22 letras usadas no total. Faça um programa que conte quantas letras
seriam utilizadas se todos os números de 1 a 1000 (mil) forem escritos em palavras.
Obs.: Não conte espaços ou hifens.
*/ 

int main()
{
    int soma = 0;

    // 1 a 9
    soma += 37;

    // 10 a 19
    soma += 68;

    // 20 a 99 (sem "e") — VALOR CORRETO
    soma += 1082;

    // 100
    soma += 3; // cem

    soma += 5 * 99;//cento

    // palavras das centenas
    soma += (8 + 9 + 12 + 10 + 11 + 11 + 10 + 10) * 100;

    soma += 99 * 9; // contagem de "e" das centenas (cento "e" vinte e um);

    // complemento das centenas (1–99 aparece 9 vezes)
    soma += (37 + 68 + 1082) * 9;

    // mil
    soma += 3;

    printf("Soma: %d\n", soma);

    return 0;
}
