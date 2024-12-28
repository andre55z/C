#include <stdio.h>

void ontl (float x, float y);
int main(void)
{
	float x, y;
	printf("\nOla! Vamos verificar a localização\n de um ponto no plano\n cartesiano\n");
	printf("\nDigite o X do ponto\n");
	scanf("%f", &x);
	printf("\nAgora o Y\n");
	scanf("%f", &y);
	if (x>0 && y>0)
	{	
		printf("\nO ponto esta no primeiro quadrante\n");
	}
	else
	    if(x>0 && y<0)
	    {
       		     printf("\nO ponto esta no quarto quadrante\n");
            }
	    else
		if(x<0 && y<0)
		{
			printf("\nO ponto esta no quarto terceiro quadrante\n");
		}
		else
		    if(x<0 && y>0)
		    {
			     printf("\nO ponto esta no segundo quadrante\n");
		    }
	ontl(x, y);
}

void ontl (float x, float y)
{
	if (x == 0)
	{
		printf("\nO ponto esta sobre o eixo das abscissas\n");
	}
	if (y==0)
	{
		printf("\nO ponto esta sobre o eixo das ordenadas\n");
	}
}