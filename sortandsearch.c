#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void bisea (int qntn, float *num, float numb);
void seqsea (int qntn, float *num, float numb);
void merge(float arr[], int left, int mid, int right);
void mergeSort(float arr[], int left, int right);
void bubsort(float *num, int qntn);
void inssort(float *num, int qntn);
void selsort(float *num, int qntn);

int main(void)
{
    int c = 0, chs, qntn;
    printf("\nOlá! Quantos números vamos ordenar?\n");
    scanf("%i", &qntn);
    float num[qntn];
    printf("\nEscreva os números para ordenação\n");
    while (c < qntn)
    {
        scanf("%f", &num[c]);
        c++;
    }
    printf("\nEscolha o modo de ordenação\n1. Bubble Sort\n2. Insertion Sort\n3. Selection Sort\n4. Merge Sort\n");
    scanf("%i", &chs);
    if (chs == 1)
    {
        bubsort(num, qntn);
    }
    else if (chs == 2)
    {
        inssort(num, qntn);
    }
    else if (chs == 3)
    {
        selsort(num, qntn);
    }
    else if (chs == 4)
    {
        mergeSort(num, 0, qntn - 1);
    }
	printf("\nGostaria de checar o vetor?\n1. Sim\n2. Nao\n");
	int chs2;
	scanf("%i", &chs2);
	if(chs2==1)
	{
		for (int i = 0; i < qntn; i++) {
            printf("%0.2f ", num[i]); 
        }
	}
	printf("\nAgora vamos para a pesquisa. Que número gostaria de pesquisar?\n");
	float numb;
	scanf("%f", &numb);
	char chssea;
	printf("\nPerfeito, qual método de pesquisa deseja usar?\n1. Pesquisa Sequencial (recomendada para pequenos grupos de valores)\n2. Pesquisa binária\n");

	scanf("%c", &chssea);
	if (chssea == '1')
	{
		seqsea(qntn, num, numb);
	}
	else
		if(chssea=='2')
		{
			bisea(qntn, num, numb);
		}
    return 0;
}

void bubsort(float *num, int qntn)
{
    float aux;
    int cn;
    bool tourf;
    do
    {
        tourf = false;
        cn = 0;
        while (cn < qntn - 1)
        {
            if (num[cn] > num[cn + 1])
            {
                aux = num[cn];
                num[cn] = num[cn + 1];
                num[cn + 1] = aux;
                tourf = true;
            }
            cn++;
        }
    } while (tourf == true);
}

void inssort(float *num, int qntn)
{
    int cn, pivo;
    float aux;
    pivo = 1;
    while (pivo < qntn)
    {
        aux = num[pivo];
        cn = pivo - 1;
        while (cn >= 0 && num[cn] > aux)
        {
            num[cn + 1] = num[cn];
            cn--;
        }
        num[cn + 1] = aux;
        pivo++;
    }
}

void selsort(float *num, int qntn)
{
    int cn1, cn2, sml;
    float aux;
    cn1 = 0;
    while (cn1 < qntn)
    {
        sml = cn1;
        cn2 = cn1 + 1;
        while (cn2 < qntn)
        {
            if (num[cn2] < num[sml])
            {
                sml = cn2;
            }
            cn2++;
        }
        aux = num[cn1];
        num[cn1] = num[sml];
        num[sml] = aux;
        cn1++;
    }
}

void merge(float arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    float L[n1], R[n2];
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k++] = L[i++];
        }
        else
        {
            arr[k++] = R[j++];
        }
    }
    while (i < n1)
    {
        arr[k++] = L[i++];
    }
    while (j < n2)
    {
        arr[k++] = R[j++];
    }
}

void mergeSort(float arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void seqsea(int qntn, float *num, float numb)
{
	bool fnd=false;
	for ( int i=0; i<qntn; i++)
	{
		if (num[i] == numb)
		{
			printf("\nO número %f foi encontrado!\n", numb);
			fnd=true;
		}
	}
	if (fnd==false)
	{
		printf("\nValor nao encontrado\n");
	}
	return;
}

void bisea(int qntn, float *num, float numb) {
    int lef = 0;
	int rgh = qntn - 1;
	bool fnd = false;
	while (lef <= rgh && fnd == false)
	{
		int m = (lef + rgh)/2;
		if (num[m] == numb)
		{
			printf("\nNúmero %f encontrado!", numb);
			fnd = true;
		}
		else
			if (num[m] < numb)
			{
				lef = m + 1;
			}
			else
				if (num[m] > numb)
				{
					rgh = m - 1;
				}
	}
	if (fnd == false)
	{
		printf("\nO número %f não foi encontrado.\n", numb);
	}
	return;
}