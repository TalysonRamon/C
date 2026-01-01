#include<stdio.h>
/*
                        Lista - Questão 079
Calcular a corrente em um circuito elétrico resistivo simples:
• Leia os dados de uma fonte de tensão real composta por força eletromotriz (E) e
resistência interna (ri).
• Leia os dados de uma fonte de um receptor composto por resistência interna (ri)
e consumo (E').
• Calcular e exibir a corrente que passa no circuito composto pela fonte e receptor,
sabendo que E=E'+R*i, onde R é a soma das resistências internas
*/

int main()
{
    float E, ri, ri1, E1, R;
    printf("Digite a força eletromotriz e a resistencia interna: ");
    scanf("%f%f", &E, &ri);

    printf("Digite a resistencia interna e consumo: ");
    scanf("%f%f", &ri1, &E1);

    R = ri + ri1;

    printf("A corrente que passa pelo circuito composto e: %.2f", (E - E1) / R);

    return 0;
}
