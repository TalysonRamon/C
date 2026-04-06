#include<stdio.h>
/*
                            Lista - Questão 277
Leia um texto de até 140 caractere e conte a quantidade de vogais e consoantes
*/

int main()
{
    int i, vogal = 0, consoante = 0;
    char v[141];

    printf("Digite um texto de ate 140 caracter: ");
    scanf("%140[^\n]", v);

    for ( i = 0; v[i] != '\0'; i++){
        if ((v[i] >= 'A' && v[i] <= 'Z') || (v[i] >= 'a' && v[i] <= 'z')){
            v[i] += 32;
            if (v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u'){
                vogal++;
            }
            else
                consoante++;
        }
    }

    printf("\nTotal de vogais: %d\n", vogal);
    printf("Total de consoantes: %d", consoante);

    return 0;
}