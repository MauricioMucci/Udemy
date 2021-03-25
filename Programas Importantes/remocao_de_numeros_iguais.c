#include <stdio.h>
#define TAM 10

int main(){

 	int vetor[10] = {1, 2, 3, 4, 5, 1, 2, 9, 8, 2};

    //imprime o vetor
    for(int i = 0; i < 10; i++)
    {
    	printf("%d ", vetor[i]);
	}
	printf("\n");

	int m = 0, com_repeticao[TAM], cont = 0, cont2 = 0;

    //testa se há repetição no vetor inicial, se houver, incrementa o cont e armazena o valor no vetor com_repeticao
	for(int i = 0; i < 10; i++)
    {
		for(int j = 0; j < 10; j++)
        {
			if(vetor[i] == vetor[j])
            {
				cont++;//contador da quantidade de incidencia do numero
			}
		}
        //Se o cont for maior que um, há mais de uma incidência do numero no vetor
		if(cont>1)
        {
			for(int l = 0; l < m; l++)
            {
                //Testa se o numero já está no vetor com_repeticao
				if(com_repeticao[l] == vetor[i])
                {
					cont2++; //contador de numeros q indica se o numero ja estao no vetor com_repeticao
				}
			}
			if(cont2 == 0)
			{
				com_repeticao[m] = vetor[i];
				m++; // tamanho do vetor com repeticao
			}
		}
		cont=0;
		cont2=0;
	}

	printf("Numeros repetidos: \n");
	for(int i = 0; i < m; i++)
		printf("%d ", com_repeticao[i]);
	printf("\n");

	int sem_repeticao[TAM];

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < m; j++)
		{
			//Testa se o vetor[i] está incluido no vetor com_repeticao
			if (vetor[i] == com_repeticao[j])
			{
				cont2++;
			}
		}
		if (cont2 == 0)
		{
			sem_repeticao[cont] = vetor[i];
			cont++;
		}
		cont2 = 0;
	}
	
	printf("Numeros nao repetidos: \n");
	for (int i = 0; i < cont; i++)
	{
		printf("%d ", sem_repeticao[i]);
	}
	printf("\n");

	return 0;	
}