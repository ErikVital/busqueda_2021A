//Erik Vital Muñoz

#include <stdio.h>

#define N 10

void buscaValor(int arr[N], int *me, int *ma, int *posUno, int *posDos);

int main()
{
	int arreglo[N];
	int menor=9999;
	int mayor=0;
	int i;
	int posicion;
	int posicionMayor;
	
	for(i=0; i<N; i++)
	{
		printf("arreglo[%d]: ", i);
		scanf("%d", &arreglo[i]);
	}
	
	
	buscaValor(arreglo, &menor, &mayor, &posicion, &posicionMayor);
	printf("El mayor valor se encuentra en la posicion [%d] y es %d y el menor esta en la posicion [%d] y es %d", posicionMayor, mayor, posicion, menor);

	return 0;
}

void buscaValor(int arr[N], int *me, int *ma, int *posUno, int *posDos)
{
	int i;
	
	for(i=0; i<N; i++)
	{
		if(*me>arr[i])
		{
			*me=arr[i];
			*posUno=i;
		}
	}
	
	for(i=0; i<N; i++)
	{
		if(*ma<arr[i])
		{
			*ma=arr[i];
			*posDos=i;
		}
	}
}
