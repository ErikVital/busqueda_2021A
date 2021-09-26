//Erik Vital Muñoz
#include <stdio.h>

#define N 10

void buscaValor(int arr[N], int *n, int *pos);

int main()
{
	int arreglo[N];
	int numero=9999;
	int i;
	int posicion=-1;
	
	for(i=0; i<N; i++)
	{
		printf("arreglo[%d]: ", i);
		scanf("%d", &arreglo[i]);
	}
	
	
	buscaValor(arreglo, &numero, &posicion);


//lo pide en las instrucciones pero creo sobra el "numero no existe igual que ponerle -1 a esta en especial"	
	if(posicion != -1)
		printf("El menor valor se encuentra en la posicion [%d] y es %d", posicion, numero);
	else
		printf("El numero no existe dentro del arreglo");
	
	return 0;
}

void buscaValor(int arr[N], int *n, int *pos)
{
	int i;
	
	for(i=0; i<N; i++)
	{
		if(*n>arr[i])
		{
			*n=arr[i];
			*pos=i;
		}
	}
}
