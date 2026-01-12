#include<stdio.h>
#include<math.h>
/*
                            Lista - Questão 148
Faça um programa que mostre para o usuário um menu de opções para as seguintes
operações matemáticas: soma, subtração, divisão (quociente), multiplicação, resto da
divisão inteira, exponenciação e logaritmo (em uma base especi cada pelo usuário),
logaritmo natural, raiz quadrada, raiz nésima, seno, cosseno e tangente. O usuário
deverá escolher uma das opções, e entrar com os operandos necessários. O programa
deve exibir o resultado obtido
*/

int main()
{
    int op, di1, di2;
    float n1, n2;

    printf("Escolha qual operacao deseja fazer:\n");
    printf("Digite:\n1- Soma\n2 - Subtracao\n3 - Divisao\n4 - Multiplicacao\n5 - Resto de divisão inteira\n6 - Exponenciacao\n");
    printf("7 - Logaritmo\n8 - Logaritmo natural\n9 - Raiz Quadrada\n10 - Raiz n-esima\n11 - Seno\n12 - Cosseno\n13 - Tangente\nOperacao: ");
    scanf("%d", &op);

    switch (op){
    case 1:
        printf("\nSoma:\n");
        printf("Digite dois numeros: ");
        scanf("%f%f", &n1, &n2);
        printf("%.2f + %.2f = %.2f", n1, n2, n1 + n2);
        break;
    case 2:
        printf("Subtracao:\n");
        printf("Digite dois numeros: ");
        scanf("%f%f", &n1, &n2);
        printf("%.2f - %.2f = %.2f", n1, n2, n1 - n2);
        break;
    case 3:
        printf("Divisao:\n");
        printf("Digite dois numeros: ");
        scanf("%f%f", &n1, &n2);
        if (n2 == 0){
           printf("Divisao impossivel!");
        }
        else
            printf("%.2f / %.2f = %.2f", n1, n2, n1 / n2);
        break;
    case 4:
        printf("Multiplicacao:\n");
        printf("Digite dois numeros: ");
        scanf("%f%f", &n1, &n2);
        printf("%.2f x %.2f = %.2f", n1, n2, n1 * n2);
        break;
    case 5:
        printf("Resto de divisao inteira:\n");
        printf("Digite dois numeros: ");
        scanf("%d%d", &di1, &di2);
        printf("%d %% %d = %d", di1, di2, di1 % di2);
        break;
    case 6:
        printf("Exponenciacao:\n");
        printf("Digite um numero e o seu expoente: ");
        scanf("%f%f", &n1, &n2);
        if (n2 < 0){
            float d1 = 1.0 / n1;
            float d2 = n2 * (-1);
            printf("%.2f elevado a %.2f = %.2f", n1, n2, pow(d1, d2));
        }
        else
            printf("%.2f elevado a %.2f = %.2f", n1, n2, pow(n1, n2));
        break;
    case 7:
        printf("Logaritmo:\n");
        printf("Digite a base e o logaritmando: ");
        scanf("%f%f", &n1, &n2);
        if (n1 <= 1 && n2 <= 0){
            printf("Impossivel realizar a operacao!");
        }
        else{
            float resul = log(n2) / log(n1);
            printf("Log de %.2f na base %.2f = %.2f", n2, n1, resul);
        }
        break;
    case 8:
        printf("Logaritmo natural:\n");
        printf("Digite um numero: ");
        scanf("%f", &n1);
        if (n1 > 0){
            printf("ln(%.2f) = %.2f", n1, log(n1)); 
        }
        else
            printf("Impossivel realizar a operacao!");
        break;
    case 9:
        printf("Raiz quadrada:\n");
        printf("Digite um numero: ");
        scanf("%f", &n1);
        if (n1 < 0){
            printf("Impossivel realizar a operacao!");
        }
        else
            printf("Raiz quadrada de %.2f = %.2f", n1, sqrt(n1));
    case 10:
        printf("Raiz n-esima:\n");
        printf("Digite um numero e o expoente da raiz: ");
        scanf("%f%f", &n1, &n2);
        int resto = n2;
        if (n2 >= 0){
        
            if (n1 >= 0){
                printf("Raiz %.2f-esima de %.2f = %.2f", n2, n1, pow(n1, 1.0 / n2));
            }
            else if (resto % 2 == 1){
                printf("Raiz %.2f-esima de %.2f = %.2f",n2, n1, -pow(-n1, 1.0 / n2));
            }
            else
                printf("Impossivel realizar a operacao!");
        }
        else
           printf("Impossivel realizar a operacao!"); 
    case 11:
            
        break;
    default:
        break;
    }

    return 0;
}
