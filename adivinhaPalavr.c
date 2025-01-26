#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
void upper(char *str)
{
	int tam = strlen(str);
	for (int i = 0; i <tam; i++)
	{
		str[i] = toupper(str[i]);
	}
}
char* geraplvr ()
{
	srand(time(NULL));
	int num = rand()%5;
	char *pal[] = {"CANECA", "AMOR", "LIVRO", "OVO", "BRASIL"};
	return pal[num];
}
void caneca ()
{
	int cont = 3;
	char resp[7];
	printf("\nDica 1: Sou usada para beber\n");
	scanf("%7s", resp);
	upper(resp);
	if (strcmp("CANECA", resp) == 0)
	{
		printf("Parabéns! Você acertou e obteve %i pontos!\n", cont);
	}
	else
	{
		printf("\nErrou... dica 2: me usam muito para beber café!\n");
		cont = cont - 1;
		scanf("%7s", resp);
		upper(resp);
		if (strcmp("CANECA", resp) == 0)
		{
			printf("Parabéns! Você acertou e obteve %i pontos!\n", cont);
		}
		else
		{
			printf("\nErrou... dica 3: C__E_A\n");
			cont = cont - 1;
			scanf("%7s", resp);
			upper(resp);
			if (strcmp("CANECA", resp) == 0)
			{
				printf("Parabéns! Você acertou e obteve %i pontos!\n", cont);
			}
			else
				printf("\nQue pena... você não conseguiu acertar!\n");
		}
	}
	
}
void amor ()
{
	int cont = 3;
	char resp[7];
	printf("\nDica 1: Sou um sentimento.\n");
	scanf("%7s", resp);
	upper(resp);
	if (strcmp("AMOR", resp) == 0)
	{
		printf("Parabéns! Você acertou e obteve %i pontos!\n", cont);
	}
	else
	{
		printf("\nErrou... dica 2: Sou o mais nobre dos sentimentos.\n");
		cont = cont - 1;
		scanf("%7s", resp);
		upper(resp);
		if (strcmp("AMOR", resp) == 0)
		{
			printf("Parabéns! Você acertou e obteve %i pontos!\n", cont);
		}
		else
		{
			printf("\nErrou... dica 3: do inglês Love!\n");
			cont = cont - 1;
			scanf("%7s", resp);
			upper(resp);
			if (strcmp("AMOR", resp) == 0)
			{
				printf("Parabéns! Você acertou e obteve %i pontos!\n", cont);
			}
			else
				printf("\nQue pena... você não conseguiu acertar!\n");
		}
	}
	
}
void livro ()
{
	int cont = 3;
	char resp[7];
	printf("\nDica 1: Sou um entretenimento e usado para obter conhecimento!\n");
	scanf("%7s", resp);
	upper(resp);
	if (strcmp("LIVRO", resp) == 0)
	{
		printf("Parabéns! Você acertou e obteve %i pontos!\n", cont);
	}
	else
	{
		printf("\nErrou... dica 2: Quando novo, tenho um cheiro muito bom!\n");
		cont = cont - 1;
		scanf("%7s", resp);
		upper(resp);
		if (strcmp("LIVRO", resp) == 0)
		{
			printf("Parabéns! Você acertou e obteve %i pontos!\n", cont);
		}
		else
		{
			printf("\nErrou... dica 3: sou repleto de folhas e palavras\n");
			cont = cont - 1;
			scanf("%7s", resp);
			upper(resp);
			if (strcmp("LIVRO", resp) == 0)
			{
				printf("Parabéns! Você acertou e obteve %i pontos!\n", cont);
			}
			else
				printf("\nQue pena... você não conseguiu acertar!\n");
		}
	}
	
}
void ovo ()
{
	int cont = 3;
	char resp[7];
	printf("\nDica 1: Sou considerado o melhor alimento do mundo!\n");
	scanf("%7s", resp);
	upper(resp);
	if (strcmp("OVO", resp) == 0)
	{
		printf("Parabéns! Você acertou e obteve %i pontos!\n", cont);
	}
	else
	{
		printf("\nErrou... dica 2: Sou um tipo de embrião.\n");
		cont = cont - 1;
		scanf("%7s", resp);
		upper(resp);
		if (strcmp("OVO", resp) == 0)
		{
			printf("Parabéns! Você acertou e obteve %i pontos!\n", cont);
		}
		else
		{
			printf("\nErrou... dica 3: quem me gera é a galinha!\n");
			cont = cont - 1;
			scanf("%7s", resp);
			upper(resp);
			if (strcmp("OVO", resp) == 0)
			{
				printf("Parabéns! Você acertou e obteve %i pontos!\n", cont);
			}
			else
				printf("\nQue pena... você não conseguiu acertar!\n");
		}
	}
	
}
void brasil ()
{
	int cont = 3;
	char resp[7];
	printf("\nDica 1: Sou um país!\n");
	scanf("%7s", resp);
	upper(resp);
	if (strcmp("BRASIL", resp) == 0)
	{
		printf("Parabéns! Você acertou e obteve %i pontos!\n", cont);
	}
	else
	{
		printf("\nErrou... dica 2: Meu povo é muito receptivo e sou um país tropical!\n");
		cont = cont - 1;
		scanf("%7s", resp);
		upper(resp);
		if (strcmp("BRASIL", resp) == 0)
		{
			printf("Parabéns! Você acertou e obteve %i pontos!\n", cont);
		}
		else
		{
			printf("\nErrou... dica 3: Sou o país do futebol.\n");
			cont = cont - 1;
			scanf("%7s", resp);
			upper(resp);
			if (strcmp("BRASIL", resp) == 0)
			{
				printf("Parabéns! Você acertou e obteve %i pontos!\n", cont);
			}
			else
				printf("\nQue pena... você não conseguiu acertar!\n");
		}
	}
	
}
int main (void)
{
	char nome[100];
	printf("\nOlá! Seja bem vindo ao jogo de adivinhar palavras!\nQual é seu nome?\n");
	scanf("%s", nome);
	printf("\nOi %s! Eu sou o Jasper. A brincadeira é: vou pensar em uma palavra e vc deve adivinha-la!\n", nome);
	printf("\nAo longo do processo, te darei 3 dicas. Caso você acerte na primeira, te darei 3 pontos, na segunda 2 e assim por diante\n");
	printf("\nSe não acertar, você perde o jogo, ok? Vamos comerçar? Pressione Enter.\n");
	getchar();
	getchar();
	char* palsec = geraplvr();
	if (strcmp("CANECA", palsec) == 0)
	{
		caneca();
	}
	else
		if (strcmp("AMOR", palsec) == 0)
		{
			amor();
		}
		else
			if (strcmp("LIVRO", palsec) == 0)
			{
				livro();
			}
			else
				if (strcmp("OVO", palsec) == 0)
				{
					ovo();
				}
				else
					if(strcmp("BRASIL", palsec)==0)
					{
						brasil();
					}
}
