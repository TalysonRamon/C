#include<stdio.h>
/*
                            Lista - Questão 278
Faça um programa que leia um texto de até 140 caracteres e substitua cada letra pela
letra seguinte no alfabeto.
Exemplo:
texto normal: mensagem para voce.
texto modificado: nfotbhfn qbsb wpdf.
Dica: a letra z deve ser substituída pela letra a.
Obs: esta operação é conhecida como cifra de César. Uma das primeiras técnicas de
criptogra a cuja criação é atribuída ao imperador romano Júlio César
*/

int main()
{
    int i;
    char v[141];

    printf("Digite um texto de ate 140 caracteres: ");
    scanf("%140[^\n]", v);

    printf("\nMensagem Criptografada: ");
    for ( i = 0; v[i] != '\0'; i++){
        if ((v[i] >= 'A' && v[i] <= 'Z' ) || (v[i] >= 'a' && v[i] <= 'z')){
            if (v[i] == 'z' || v[i] == 'Z'){
                v[i] -= 25;
            }
            else
                v[i] += 1;
        }
        printf("%c", v[i]);
    }
    
    return 0;
}
