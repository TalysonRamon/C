#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float a = 3.1415;
    printf ("O valor da variável é: %f", a);
    return 0;
}
