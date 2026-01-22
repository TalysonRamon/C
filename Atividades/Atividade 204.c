#include<stdio.h>
/*
                        Lista - Questão 204
Faça um programa que calcule o maior número palíndromo feito a partir do produto
de dois números de 3 dígitos. Ex: O maior palíndromo feito a partir do produto de
números de dois dígitos é 9009 (que é resultado de 91*99).
*/

int main()
{
    int i, h, r, u, d, c, num, cont = 0;
    for ( i = 100; i <= 999; i++){
        for ( h = 100; h <= 999; h++){
            r = h * i; //987654
            u = r % 10;
            d = (r % 100) / 10;
            c = (r % 1000) / 100;
            num = r / 1000;
            if (((u * 100) + (d * 10) + c) == num){
                if (cont < r){
                    cont = r;
                }  
            }
        }
    }
    
    printf("Maior palindromo de 3 digitos: %d ", cont);

    return 0;
}
