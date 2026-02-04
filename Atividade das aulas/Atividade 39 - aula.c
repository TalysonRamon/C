#include<stdio.h>
/*
			Aula - Questão 39
Escreva um programa que gere a saída abaixo.
Restrições:
? A instrução “printf” pode ser utilizada no máximo 2 vezes;
? O \n para saltar linha pode ser utilizado no máximo 2 vezes.
*
**
***
****
*****
******
*******
********	
*/

int main ()
{
	int i, cont, n = 2;
	
	for(i = 1; i <= 8; i++){
		for(cont = 1; cont < n; cont++){
			printf("*");
		}
		printf("\n");
		n += 1;
	}
	
	return 0;
}
