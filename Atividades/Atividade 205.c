#include<stdio.h>
/*
Lista - Questão 205
Faça um programa que calcule o menor número divisível por cada um dos números de
1 a 20. Ex: 2520 é o menor número que pode ser dividido por cada um dos números
de 1 a 10,sem sobrar resto.
*/
int main()
{
    int i, n = 20, h, cont = 0;
    for ( i = 1; i <= 1;){
        n++;
        for ( h = 1; h <= 20; h++){
            if (n % h == 0){
                cont++;
                if (cont == 20){
                    i++;
                }
                
            }
            
        }
        cont = 0;
        
    }
    printf("Menor MMC: %d ", n);
    
    return 0;
}
