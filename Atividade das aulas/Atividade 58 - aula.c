#include<stdio.h>
/*
                            Aula - Questão 16 | Lista IV
Faça um programa para jogar o jogo da velha. Ao final imprima o resultado do jogo e pergunte
se deseja jogar novamente.
*/

int main()
{
    int opX, opO, j = 0, p = 0, teste = 0, i;
    char m[3][3] = {};
    printf("   #1  #2  #3\n#1 [ ] [ ] [ ]\n#2 [ ] [ ] [ ]\n#3 [ ] [ ] [ ]");

    do{
        for ( i = 1; i <= 1; i++){
            
            do{
                printf("Jogada do jogador X:\n");
                printf("Digite\n1 - Para a posicao [1][1]\n2 - Para a posicao [1][2]\n3 - Para a posicao [1][3]\n");
                printf("4 - Para a posicao [2][1]\n5 - Para a posicao [2][2]\n6 - Para a posicao [2][3]\n");
                printf("7 - Para a posicao [3][1]\n8 - Para a posicao [3][2]\n9 - Para a posicao [3][3]\nOpcao: ");
                scanf("%d", &opX);
                switch (opX)
                {
                case 1:
                    teste = 0;
                    if (m[0][0] == {}){
                        m[0][0] = 'X';
                    }
                    else{
                        teste++;
                        printf("Escolha uma posicao que nao foi ocupada ainda!\n");
                    }
                    break;
                case 2:
                    teste = 0;
                    if (m[0][1] == {}){
                        m[0][1] = 'X';
                    }
                    else{
                        teste++;
                        printf("Escolha uma posicao que nao foi ocupada ainda!\n");
                    }    
                    break;
                case 3: 
                    teste = 0;
                    if (m[0][2]){
                        m[0][2] = 'X';
                    }
                    else{
                        teste++;
                        printf("Escolha uma posicao que nao foi ocupada ainda!\n");
                    }
                    break;
                case 4: 
                    teste = 0;
                    if (m[1][0]){
                        m[1][0] = 'X';
                    }
                    else{
                        teste++;
                        printf("Escolha uma posicao que nao foi ocupada ainda!\n");
                    }
                    break;
                case 5: 
                    teste = 0;
                    if (m[1][1]){
                        m[1][1] = 'X';
                    }
                    else{
                        teste++;
                        printf("Escolha uma posicao que nao foi ocupada ainda!\n");
                    }
                    break;    
                case 6: 
                    teste = 0;
                    if (m[1][2]){
                        m[1][2] = 'X';
                    }
                    else{
                        teste++;
                        printf("Escolha uma posicao que nao foi ocupada ainda!\n");
                    }
                    break;
                case 7: 
                    teste = 0;
                    if (m[2][0]){
                        m[2][0] = 'X';
                    }
                    else{
                        teste++;
                        printf("Escolha uma posicao que nao foi ocupada ainda!\n");
                    }
                    break;
                case 8: 
                    teste = 0;
                    if (m[2][1]){
                        m[2][1] = 'X';
                    }
                    else{
                        teste++;
                        printf("Escolha uma posicao que nao foi ocupada ainda!\n");
                    }
                    break;
                case 9: 
                    teste = 0;
                    if (m[2][2]){
                        m[2][2] = 'X';
                    }
                    else{
                        teste++;
                        printf("Escolha uma posicao que nao foi ocupada ainda!\n");
                    }
                    break;
                default:
                    printf("Opcao incorreta! Digite novamente!\n");
                    break;
                }
            }while(teste > 0);

            printf("   #1  #2  #3\n#1 [%d] [%d] [%d]\n#2 [%d] ", m[0][0], m[0][1], m[0][2], m[1][0]);
            printf("[%d] [%d]\n#3 [%d] [%d] [%d]"m[1][1], m[1][2], m[2][0], m[2][1], m[2][2]);
        }
        for ( i = 1; i <= 1; i++){
             
            do{
                printf("\nJogada do jogador O:\n");
                printf("Digite\n1 - Para a posicao [1][1]\n2 - Para a posicao [1][2]\n3 - Para a posicao [1][3]\n");
                printf("4 - Para a posicao [2][1]\n5 - Para a posicao [2][2]\n6 - Para a posicao [2][3]\n");
                printf("7 - Para a posicao [3][1]\n8 - Para a posicao [3][2]\n9 - Para a posicao [3][3]\nOpcao: ");
                scanf("%d", &opX);
                switch (opX)
                {
                case 1:
                    teste = 0;
                    if (m[0][0] == {}){
                        m[0][0] = 'O';
                    }
                    else{
                        teste++;
                        printf("Escolha uma posicao que nao foi ocupada ainda!\n");
                    }
                    break;
                case 2:
                    teste = 0;
                    if (m[0][1] == {}){
                        m[0][1] = 'O';
                    }
                    else{
                        teste++;
                        printf("Escolha uma posicao que nao foi ocupada ainda!\n");
                    }    
                    break;
                case 3: 
                    teste = 0;
                    if (m[0][2]){
                        m[0][2] = 'O';
                    }
                    else{
                        teste++;
                        printf("Escolha uma posicao que nao foi ocupada ainda!\n");
                    }
                    break;
                case 4: 
                    teste = 0;
                    if (m[1][0]){
                        m[1][0] = 'O';
                    }
                    else{
                        teste++;
                        printf("Escolha uma posicao que nao foi ocupada ainda!\n");
                    }
                    break;
                case 5: 
                    teste = 0;
                    if (m[1][1]){
                        m[1][1] = 'O';
                    }
                    else{
                        teste++;
                        printf("Escolha uma posicao que nao foi ocupada ainda!\n");
                    }
                    break;    
                case 6: 
                    teste = 0;
                    if (m[1][2]){
                        m[1][2] = 'O';
                    }
                    else{
                        teste++;
                        printf("Escolha uma posicao que nao foi ocupada ainda!\n");
                    }
                    break;
                case 7: 
                    teste = 0;
                    if (m[2][0]){
                        m[2][0] = 'O';
                    }
                    else{
                        teste++;
                        printf("Escolha uma posicao que nao foi ocupada ainda!\n");
                    }
                    break;
                case 8: 
                    teste = 0;
                    if (m[2][1]){
                        m[2][1] = 'O';
                    }
                    else{
                        teste++;
                        printf("Escolha uma posicao que nao foi ocupada ainda!\n");
                    }
                    break;
                case 9: 
                    teste = 0;
                    if (m[2][2]){
                        m[2][2] = 'O';
                    }
                    else{
                        teste++;
                        printf("Escolha uma posicao que nao foi ocupada ainda!\n");
                    }
                    break;
                default:
                    printf("Opcao incorreta! Digite novamente!\n");
                    break;
                }
            }while(teste > 0);
            printf("   #1  #2  #3\n#1 [%d] [%d] [%d]\n#2 [%d] ", m[0][0], m[0][1], m[0][2], m[1][0]);
            printf("[%d] [%d]\n#3 [%d] [%d] [%d]"m[1][1], m[1][2], m[2][0], m[2][1], m[2][2]);
            if ()
            {
                /* code */
            }
            
        }
    }while();

    return 0;
}
