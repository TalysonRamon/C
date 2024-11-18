//A recompensa de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
//Sendo que da quantia total:
//• O primeiro ganhador receberá 46%;
//• O segundo receberá 32%;
//• O terceiro receberá o restante.
//Calcule e imprima a quantia ganha por cada um dos ganhadores.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float g1 = 0, g2 = 0, g3 = 0;
    g1 = 780000 * 0.46;
    g2 = 780000 * 0.32;
    g3 = 780000 - (g1 + g2);
    printf("O primeiro ganhardor receberá %.2f R$\n", g1);
    printf("O segundo ganhardor receberá %.2f R$\n", g2);
    printf("O terceiro ganhardor receberá %.2f R$", g3);
    return 0;
}
