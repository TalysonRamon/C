#include<stdio.h>
/*
                        Lista - Questão 276
Leia uma frase de até 140 caracteres e verifique se a frase forma um palíndromo.
Exemplo: socorram-me subi no onibus em marrocos.
Obs.: desconsidere a ocorrência de espaços em branco.
*/

int main()
{
    int i = 0, j, palindromo = 1;
    char v[141];

    printf("Digite uma frase de ate 140 caracter: ");
    scanf("%140[^\n]", v);

    while (v[i] != '\0'){
        i++;
    }
    
    j = i - 1;
    i = 0;
    while (i < j){
        if (!((v[i] >= 'A' && v[i] <= 'Z') || (v[i] >= 'a' && v[i] <= 'z'))){
        i++;
        continue;
        }

        if (!((v[j] >= 'A' && v[j] <= 'Z') || (v[j] >= 'a' && v[j] <= 'z'))){
        j--;
        continue;
}
        
        if (v[i] >= 'A' && v[i] <= 'Z'){
            v[i] += 32;
        }
        
        if (v[j] >= 'A' && v[j] <= 'Z'){
            v[j] += 32;
        }

        if (v[i] != v[j]){
            palindromo = 0;
            break;
        }
        i++;
        j--;
    }
    
    if (palindromo){
        printf("\nO texto e um palindromo!\n");
    }
    else{
        printf("\nO texto nao e um palindromo!\n");
    }
    return 0;
}