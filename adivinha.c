#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

void play (int qntj, int maxnum);
int main (void)
{
	char nome[20];
	int chs;
	printf("\nOlá, seja bem vindo ao jogo de adivinhação!\n");
	printf("\nQual é seu nome?\n");
	scanf("%s", nome);
	printf("\nOk %s, agora escolha o nível de dificuldade do seu jogo\n1. Fácil (10 tentativas com números entre 0 e 20\n2. Médio (7 tentativas com números entre 0 e 50)\n3. Difícil (5 tentativas com números entre 0 e 100)\n", nome);
	scanf("\n%i", &chs);
	while (chs == 0 || chs > 3)
	{
		printf("\nEscolha inválda, escolha novamente.\n");
		scanf("%i", &chs);
	}
	if (chs == 1)
	{
		int qntj = 9, maxnum = 20;
		play(qntj, maxnum);
	}
	else
		if (chs == 2)
		{
			int qntj = 6, maxnum = 50;
			play(qntj, maxnum);
			
		}
		else
			if(chs==3)
			{
				int qntj = 4, maxnum = 70;
				play(qntj, maxnum);
			}
	
	return 0;
}

void play(int qntj, int maxnum)
{
	int numsc, tent, tents = 0, qntres;
	srand(time(NULL));
	numsc = rand() % maxnum;
	
	
	while (tents < qntj)
	{
		qntres = qntj - tents;
		printf("\nEscolha um número até %d\n", maxnum);
		scanf("%d", &tent);
		while (tent > maxnum)
		{
			printf("\n%d é maior que o limite! Escolha um número até %d\n", tent, maxnum);
			scanf("%d", &tent);
		}
		if (tent == numsc)
		{
			printf("\nParabéns! Vc acertou o número!\n");
			break;
		}
		else
			if (tent > numsc)
			{
				printf("\nErrou, o número é menor.\n");
				printf("\nRestam %d tentativas\n", qntres);
			}
			else
				if (tent < numsc)
				{
					printf("\nErrou, o número é maior.\n");
					printf("\nRestam %d tentativas\n", qntres);
				}
		tents++;		
	}
	if (tents > maxnum){
		printf("\nSinto muito, mas você perdeu! O número era %d\n", numsc);	
	}		
}