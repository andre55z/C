#include <stdio.h>
#include <stdbool.h>

void bubsort (float *num, int qntn);
void inssort (float *num, int qntn);
void selsort (float *num, int qntn);
int main (void)
{
	int c=0, chs, qntn;
	printf("\nOla! Quantos números vamos ordenar?\n");
	scanf("%i", &qntn);
	float num[qntn];
	printf("\nEscreva os números para ordenação\n");
	while (c<qntn)
	{
		
		scanf("%f", &num[c]);
		c++;
	}
	printf("\nEscolha o modo de ordenação\n1. Bubble Sort\n2. Insertion Sort\n3. Selection Sort\n");
	scanf("%i", &chs);
	if (chs == 1)
	{
		bubsort(num, qntn);
	}
	else
		if(chs == 2)
		{
			inssort(num, qntn);
		}
		else
			if(chs == 3)
			{
				selsort(num, qntn);
			}
			
}



void bubsort (float *num, int qntn)
{
	float aux;
	int cn;
	bool tourf;
	do 
	{
		tourf = false;
		cn = 0;
		while (cn < qntn-1)
		{
			if (num[cn] > num[cn+1])
			{
				aux = num[cn];
				num[cn] = num[cn+1];
				num[cn+1] = aux;
				
				tourf = true;
			}
			cn = cn+1;
		}
	} while (tourf == true);
	for (int i =0; i<qntn; i++)
	{
		printf("%2.f", num[i]);
	}
	return;
}

void inssort (float *num, int qntn)
{
	int cn, pivo, aux;
	pivo = 1;
	while (pivo<qntn)
	{
		aux = num[pivo];
		cn = pivo -1;
		while (num[cn] > aux)
		{
			num[cn + 1] = num [cn];
			cn--;
			if (cn < 0)
			{
				break;
			}
		}
		num[cn + 1] = aux;
		pivo = pivo +1;
	}
	for (int i= 0; i<qntn; i++){
		printf("%2.f", num[i]);
	}
	return;
}

void selsort (float *num, int qntn)
{
	int cn1, cn2, sml;
	float aux;
	cn1 = 0;
	while(cn1 <qntn)
	{
		sml = cn1;
		cn2 = cn1 + 1;
		while(cn2<qntn)
		{
			if (num[cn2] < num[sml])
			{
				sml = cn2;
			}
			cn2 = cn2 + 1;
		}
		aux = num[cn1];
		num[cn1] = num[sml];
		num[sml] = aux;
		cn1 = cn1 +1;
	}
	for (int i =0;i<qntn;i++)
	{
		printf("%f ", num[i]);
	}
	return;
}