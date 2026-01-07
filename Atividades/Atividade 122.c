#include<stdio.h>
/*
                    Lista - Questão 122
 Faça um programa que leia três números e mostre-os em ordem decrescente
*/

int main()
{
    float n1, n2, n3;

    printf("Digite tres numeros: ");
    scanf("%f%f%f", &n1, &n2, &n3);

    if (n1 <= n2 && n1 <= n3){
        if (n2 <= n3){
            printf("%.2f <= %.2f <= %.2f", n1, n2, n3);
        }
        else{
            printf("%.2f <= %.2f <= %.2f", n1, n3, n2);
        }  
    }
    else if (n2 <= n1 && n2 <= n3){
        if (n1 <= n3){
            printf("%.2f <= %.2f <= %.2f", n2, n1, n3);
        }
        else{
            printf("%.2f <= %.2f <= %.2f", n2, n3, n1);
        }
    }
    else{
       if (n1 <= n2){
        printf("%.2f <= %.2f <= %.2f", n3, n1, n2);
       }
       else{
        printf("%.2f <= %.2f <= %.2f", n3, n2, n1);
       } 
    }

    return 0;
}
