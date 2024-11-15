#include<stdio.h>
#include<locale.h>
int main()
{
   setlocale(LC_ALL,"Portuguese");
   int a = 20;
   printf("O valor da variável é: %d", a);
   return 0;
}
