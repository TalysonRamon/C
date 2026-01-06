#include<stdio.h>
/*
Lista - Questão 112
Considere um código que, em uma de suas estruturas condicionais, utilize o seguinte
teste: if(x=0). Qual é o comportamento do comando if neste programa? E como seria
o comportamento desse programa se o teste fosse if(x=1) ou if(x=-10) ?
*/

int main()
{
    int x = -10;

    if (x){
       printf("p1\n");
    }
    x = 1;
    if (x){
        printf("p2\n");
    }
    x = 0;
    if (x){
        printf("p3\n");
    }
    
    //Quando x = 0, nao executa o if. Quando x é diferente de 0, executa o if;
    
    return 0;
}
