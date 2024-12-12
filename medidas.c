#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <Windows.h>

void loading (void);
char valid (char *resp);
float kmtom (float medkm);                  
float mtokm (float medm);
float mtomil (float medm);
float miltokm (float medmil);
float miltom (float medmil);
float kmtomil (float medkm);
float petokm (float medpe);                  
float petom (float medpe);
float petomil (float medpe);
float mtope (float medm);                  
float kmtope (float medkm);
float miltope (float medmil);
void maiuscula (char *resp);

int main (void)
{
	char  resp[4];
	float medkm, medfim, medida, medm, medmil, medikm, medimil, medim, medpe, medipe;
	printf("\nOla!, vamos calcular? (Responda com sim ou nao)\n");
	scanf("%s", resp);
	maiuscula(resp);
	while (strcmp(resp, "Nao") != 0 && strcmp(resp, "Não") != 0 && strcmp(resp, "Sim") != 0 && strcmp(resp, "Ss") != 0 && strcmp(resp, "S") != 0 && strcmp(resp, "Nn") != 0 && strcmp(resp, "N") != 0)
	{
		printf("Resposta invalida. Por favor insira a resposta novamente.\n");
		scanf("%s", resp);
		maiuscula(resp);
	}
	while (strcmp(resp, "Nao") != 0 && strcmp(resp, "Não") != 0  && strcmp(resp, "Nn") != 0 && strcmp(resp, "N") != 0){
		printf("Escolha a medida que voce que transformar. Pressione o número da respectiva unidade de medida\n 1. Quilometros\n 2. Metros\n 3. Milhas\n 4. Pés\n\n");
		scanf("%f", &medida);
		
		while (medida != 1 && medida != 2 && medida != 3 && medida != 4)
		{
			printf("Resposta invalida. Por favor insira a resposta novamente.\n");
			scanf("%f", &medida);
		}
		
		printf("Escolha para qual medida quer converter. Pressione o número da respectiva unidade de medida\n 1. Quilometros\n 2. Metros\n 3. Milhas\n 4. Pés\n\n");
		scanf("%f", &medfim);
		
		while (medfim != 1 && medfim != 2 && medfim != 3 && medfim != 4)
		{
			printf("Resposta invalida. Por favor insira a resposta novamente.\n");
			scanf("%f", &medfim);
		}

		while (medida == medfim )
		{
			printf("Ops! Acho que você escolheu duas medidas ig Escolha a medida para qual deseja converter novamente.\n");
			scanf("%f", &medfim);
		}
		
		if (medida == 1)
		{
			printf("Quantos Km?\n");
			scanf("%f", &medkm);
			if (medfim == 2)
			{
				medikm = kmtom(medkm); 
				loading();
				printf("\nA coversão de %2.f kms ficou em %2.f metros\n", medkm, medikm);
			}
			else
				if (medfim == 3)
				{
					medikm = kmtomil(medkm);   
					loading();
					printf("\nA coversão de %2.f kms em milhas ficou %2.f\n", medkm, medikm);
				}
				else
					if (medfim == 4)
					{
						medikm = kmtope(medkm);   
						loading();
						printf("\nA coversão de %f kms em pés ficou %f\n", medkm, medikm);
					}
		
		}
		else
			if (medida == 2)
			{
				printf("Quantos metros?\n");
				scanf("%f", &medm);
				if (medfim == 1)
				{
					medim = mtokm(medm);
					loading();
					printf("\nA conversão de %2.f metros em quilometros ficou %2.f\n", medm, medim);
				}
				else
					if (medfim == 3)
					{
						medim = mtomil(medm);
						loading();
						printf("\nA medida de %f metros em milhas ficou %f\n", medm ,medim);
					}
					else
						if (medfim == 4)
						{
							medim = mtope(medm);
							loading();
							printf("\nA medida de %f metros em pés ficou %f\n", medm ,medim);
						}
			}
			else
				if (medida == 3)
				{
					printf("Quantas milhas?\n");
					scanf("%f", &medmil);
					if (medfim == 1)
					{
						medimil = miltokm(medmil);
						loading();
						printf("\nA conversão de %2.f milhas em quilometros ficou %f\n", medmil, medimil);
					}
					else
						if (medfim == 2)
						{
							medimil = miltom(medmil);
							loading();
							printf("\nA medida de %2.f milhas em metros ficou %f\n", medmil,medimil);
						}
						else
							if (medfim == 4)
							{
								medimil = miltope(medmil);
								loading();
								printf("\nA medida de %2.f milhas em pés ficou %f\n", medmil,medimil);
							}
			}
			else
				if (medida == 4)
				{
					printf("Quantos pés?\n");
					scanf("%f", &medpe);
					if (medfim == 1)
					{
						medipe = petokm(medpe); 
						loading();
						printf("\nA coversão de %f pés ficou em %f kms\n", medpe, medipe);
					}
					else
						if (medfim == 2)
						{
							medipe = petom(medpe);   
							loading();
							printf("\nA coversão de %f pés em metros ficou %f\n", medpe, medipe);
						}
						else 
							if (medfim == 3)
							{
								medipe = petomil(medpe);
								loading();
								printf("\nA conversão de %f pés em ilhas ficou %f\n", medpe, medipe); 
							}
		
				}
		printf("\n\nCalcular novamente?\n");
		scanf("%s", resp);
		maiuscula(resp);
		while (strcmp(resp, "Nao") != 0 && strcmp(resp, "Não") != 0 && strcmp(resp, "Sim") != 0 && strcmp(resp, "Ss") != 0 && strcmp(resp, "S") != 0 && strcmp(resp, "Nn") != 0 && strcmp(resp, "N") != 0)
		{
			printf("Resposta invalida. Por favor insira a resposta novamente.\n");
			scanf("%s", resp);
			maiuscula(resp);
		}
		if (strcmp(resp, "Nao") == 1 && strcmp(resp, "Sim")==1)
		{
			printf("\nResposta invalida. Por favor, responda com sim ou não.\n");
			scanf("%s", resp);
		}
	}
	
}


void loading (void)
{
	printf("=======================================================================");
}

void maiuscula (char *resp)  {
	resp[0] = toupper(resp[0]);
	return;
}

float kmtom (float medkm)                    
{
	medkm = medkm * 1000;
	return medkm;
}

float kmtomil (float medkm)                
{
	medkm = medkm * 0.6214;
	return medkm;
}

float mtokm (float medm)
{
	medm = medm / 1000;
	return medm;
}

float mtomil (float medm)
{
	medm = medm * 0.0006214;
	return medm;
}

float miltokm (float medmil)
{
	medmil = medmil / 0.6214;
	return medmil;
}

float miltom (float medmil)
{
	medmil = medmil / 0.0006214;
	return medmil;
}

float petokm (float medpe)
{
	medpe = medpe*0.0003048;
	return medpe;
}

float petom (float medpe)
{
	medpe = medpe*0.0003048;
	return medpe;
}

float petomil (float medpe)
{
	medpe = medpe*0.000189394;
	return medpe;
}

float kmtope (float medkm)
{
	medkm = medkm/0.0003048;
	return medkm;
}

float mtope (float medm)
{
	medm = medm/0.3048;
	return medm;
}

float miltope (float medmil)
{
	medmil = medmil/0.000189394;
	return medmil;
}