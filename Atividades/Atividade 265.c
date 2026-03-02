#include<stdio.h>
/*
                        Lista - Questão 265
Numa votação destinada a selecionar um entre 10 candidatos, optou-se pela coleta e
processamento dos votos por computador. Supondo que os candidatos são designados
por seu número de candidato, faça um programa que obedeça as seguintes especificações:
• Os votos são recebidos a partir do teclado, informando o número do candidato que
deverá ser um inteiro de cinco dígitos.
• O número zero é usado para indicar voto em branco.
• Números inválidos (não associados a nenhum candidato) indicam votos nulos.
• O programa deverá exibir a classificação obtida na votação indicando o nome e
número do candidato e sua votação expressa em valor absoluto de votos e em
porcentagem de votos válidos. Também deverá ser informado o total de votantes,
o total de votos válidos, o total de votos brancos e o total de votos nulos.
• O programa deverá indicar se houve um vencedor ou se deverá haver um segundo
turno. Para ser vitorioso, o candidato precisa obter uma quantia superior a 50%
dos votos válidos. Caso seja necessário um segundo turno, mostre quem são os
candidatos que deverão concorrer.
*/

int main()
{
    int i, j;
    int votantes, op, branco = 0, nulo = 0, ordem_decre, posic_ordem, soma = 0, n = 0, maior = 0;
    int v[10] = {};
    int pos[10];

    printf("Qual a quantidade de votantes: ");
    scanf("%d", &votantes);

    for ( i = 0; i < 10; i++){
        v[i] = 0;
    }
    
    for ( i = 1; i <= votantes; i++){
        printf("Digite:\n13134 - Para votar no Ademir\n97873 - Para votar na Maria\n48828 - Para votar no Jorge\n47872 - Para votar no Leo\n");
        printf("98953 - Para votar na Joana\n58959 - Para votar no Jao\n87342 - Para votar no Marcelo\n89472 - Para votar no Wagner\n");
        printf("78634 - Para votar na Larissa\n84972 - Para votar no Lopes\n0 - Para votar em branco\nQualquer outro numero - Para voto nulo\n");
        printf("Opcao: ");
        scanf("%d", &op);
        switch (op)
        {
        case 13134:
            v[0]++;
            break;
        case 97873:
            v[1]++;
            break;
        case 48828:
            v[2]++;
            break;
        case 47872:
            v[3]++;
            break;
        case 98953:
            v[4]++;
            break;
        case 58959:
            v[5]++;
            break;
        case 87342:
            v[6]++;
            break;
        case 89472:
            v[7]++;
            break;
        case 78634:
            v[8]++;
            break;
        case 84972:
            v[9]++;
            break;
        case 0:
            branco++;
            break;
        default:
            nulo++;
            break;
        }
    }
    
    
    for ( i = 0; i < 10; i++){
        pos[i] = i;
    }
    
    for ( i = 0; i < 10; i++){
        for ( j = 0; j < 9 - i; j++){
            if (v[j] < v[j + 1]){

                ordem_decre = v[j];
                v[j] = v[j + 1];
                v[j + 1] = ordem_decre;

                posic_ordem = pos[j];
                pos[j] = pos[j + 1];
                pos[j + 1] = posic_ordem;
            }
        }
        soma += v[i];
    }
    
    printf("\nTotal de Votantes: %d\n", soma);
    for ( i = 0; i < 10; i++){
        n++;
        switch (pos[i])
        {
        case 0:
            printf("\n---------------------------------------------------------------------------");
            printf("\n%d° Lugar", n);
            printf("\nNome: Ademir\nNumero: 13134\n");
            printf("Votos: %d\n\n", v[i]);
            printf("Porcentagem de votos validos: %d%%\n", v[i] * 100 / (soma + branco + nulo));
            if (v[i] > soma / 2.0){
                printf("Candidato Vencedor!!\n");
            }
            printf("---------------------------------------------------------------------------\n");
            break;
        case 1:
            printf("\n---------------------------------------------------------------------------");
            printf("\n%d° Lugar", n);
            printf("\nNome: Maria\nNumero: 97873\n");
            printf("Votos: %d\n\n", v[i]);
            printf("Porcentagem de votos validos: %d%%\n", v[i] * 100 / (soma + branco + nulo));
            if (v[i] > soma / 2.0){
                printf("Candidato Vencedor!!\n");
            }
            printf("---------------------------------------------------------------------------\n");
            break;
        case 2:
            printf("\n---------------------------------------------------------------------------");
            printf("\n%d° Lugar", n);
            printf("\nNome: Jorge\nNumero: 48828\n");
            printf("Votos: %d\n\n", v[i]);
            printf("Porcentagem de votos validos: %d%%\n", v[i] * 100 / (soma + branco + nulo));
            if (v[i] > soma / 2.0){
                printf("Candidato Vencedor!!\n");
            }
            printf("---------------------------------------------------------------------------\n");
            break;
        case 3:
            printf("\n---------------------------------------------------------------------------");
            printf("\n%d° Lugar", n);
            printf("\nNome: Leo\nNumero: 47872\n");
            printf("Votos: %d\n\n", v[i]);
            printf("Porcentagem de votos validos: %d%%\n", v[i] * 100 / (soma + branco + nulo));
            if (v[i] > soma / 2.0){
                printf("Candidato Vencedor!!\n");
            }
            printf("---------------------------------------------------------------------------\n");
            break;
        case 4:
            printf("\n---------------------------------------------------------------------------");
            printf("\n%d° Lugar", n);
            printf("\nNome: Joana\nNumero: 98953\n");
            printf("Votos: %d\n\n", v[i]);
            printf("Porcentagem de votos validos: %d%%\n", v[i] * 100 / (soma + branco + nulo));
            if (v[i] > soma / 2.0){
                printf("Candidato Vencedor!!\n");
            }
            printf("---------------------------------------------------------------------------\n");
            break;
        case 5:
            printf("\n---------------------------------------------------------------------------");
            printf("\n%d° Lugar", n);
            printf("\nNome: Jao\nNumero: 58959\n");
            printf("Votos: %d\n\n", v[i]);
            printf("Porcentagem de votos validos: %d%%\n", v[i] * 100 / (soma + branco + nulo));
            if (v[i] > soma / 2.0){
                printf("Candidato Vencedor!!\n");
            }
            printf("---------------------------------------------------------------------------\n");
            break;
        case 6:
            printf("\n---------------------------------------------------------------------------");
            printf("\n%d° Lugar", n);
            printf("\nNome: Marcelo\nNumero: 87342\n");
            printf("Votos: %d\n\n", v[i]);
            printf("Porcentagem de votos validos: %d%%\n", v[i] * 100 / (soma + branco + nulo));
            if (v[i] > soma / 2.0){
                printf("Candidato Vencedor!!\n");
            }
            printf("---------------------------------------------------------------------------\n");
            break;
        case 7:
            printf("\n---------------------------------------------------------------------------");
            printf("\n%d° Lugar", n);
            printf("\nNome: Wagner\nNumero: 89472\n");
            printf("Votos: %d\n\n", v[i]);
            printf("Porcentagem de votos validos: %d%%\n", v[i] * 100 / (soma + branco + nulo));
            if (v[i] > soma / 2.0){
                printf("Candidato Vencedor!!\n");
            }
            printf("---------------------------------------------------------------------------\n");
            break;
        case 8:
            printf("\n---------------------------------------------------------------------------");
            printf("\n%d° Lugar", n);
            printf("\nNome: Larissa\nNumero: 78634\n");
            printf("Votos: %d\n\n", v[i]);
            printf("Porcentagem de votos validos: %d%%\n", v[i] * 100 / (soma + branco + nulo));
            if (v[i] > soma / 2.0){
                printf("Candidato Vencedor!!\n");
            }
            printf("---------------------------------------------------------------------------\n");
            break;
        case 9:
            printf("\n---------------------------------------------------------------------------");
            printf("\n%d° Lugar", n);
            printf("\nNome: Lopes\nNumero: 84972\n");
            printf("Votos: %d\n\n", v[i]);
            printf("Porcentagem de votos validos: %d%%\n", v[i] * 100 / (soma + branco + nulo));
            if (v[i] > soma / 2.0){
                printf("Candidato Vencedor!!\n");
            }
            printf("---------------------------------------------------------------------------\n");
            break;
        default:
            break;
        }
    }
    
    //Segundo turno:
    maior = v[0];
    for ( i = 1; i < 10; i++){
        if(maior < v[i])
            maior = v[i];
    }
    
    if (maior > (soma / 2.0)){  
    }
    else{
        printf("\nSegundo Turno:\nEntre os candidatos:\n");
        for (j = 0; j <= 1; j++){
            switch (pos[j]){
                case 0:
                    printf("\nNome: Ademir\nNumero: 13134\n");
                    break;
                case 1:
                    printf("\nNome: Maria\nNumero: 97873\n");
                    break;
                case 2:
                    printf("\nNome: Jorge\nNumero: 48828\n");
                    break;
                case 3:
                    printf("\nNome: Leo\nNumero: 47872\n");
                    break;
                case 4:
                    printf("\nNome: Joana\nNumero: 98953\n");
                    break;
                case 5:
                    printf("\nNome: Jao\nNumero: 58959\n");
                    break;
                case 6:
                    printf("\nNome: Marcelo\nNumero: 87342\n");
                    break;
                case 7:
                    printf("\nNome: Wagner\nNumero: 89472\n");
                    break;
                case 8:
                    printf("\nNome: Larissa\nNumero: 78634\n");
                    break;
                case 9:
                    printf("\nNome: Lopes\nNumero: 84972\n");
                    break;
                default:
                    break;
            }
        }
    }
    
    printf("\nTotal de votantes %d", votantes);
    printf("\nTotal de votos validos: %d", soma);
    printf("\nVotos em branco: %d", branco);
    printf("\nVotos nulos: %d\n", nulo);
    return 0;
}