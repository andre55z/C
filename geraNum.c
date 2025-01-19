#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void gerN (int ddd)
{
	int numb[9], num;
	srand(time(NULL));
	for (int n=0; n<9; n++)
	{
		num=rand()%10;
		numb[n] = num;
		num=0;
	}
	printf("\nSeu novo número é +55 (%d)", ddd);
	numb[0] = 9;
	numb[1] = 9;
	for(int j=0; j<2; j++)
	{
		printf("%d", numb[j]);
	}
	for(int i=2; i<5;i++)
	{
		printf("%d", numb[i]);
	}
	printf("-");
	for (int h=5; h<9; h++)
	{
		printf("%d", numb[h]);
	}
	printf("\n");
}
int main (void)
{
	int ddd;
	printf("\nOlá! Insira o ddd da sua regiao\n");
	scanf("%i", &ddd);
	printf("\nOk! pressione Enter para gerar seu número de telefone\n");
	getchar();
	getchar();
	gerN(ddd);
}
