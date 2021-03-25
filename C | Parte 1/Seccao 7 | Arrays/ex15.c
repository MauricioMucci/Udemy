#include <stdio.h>

int main(){

 	int vetor[10] = {1, 2, 3, 4, 5, 1, 2, 9, 8, 2};
    int m = 0, com_repeticao[m], k = 0, cont = 0;
    int acc = 0, sem_repeticao[acc];//vetor final para armazenar números não repetidos e contador de numeros q ja estao no vetor com_repeticao
    
    //imprime o vetor
    for(int i = 0; i < 10; i++)
    {
    	printf("%d ", vetor[i]);
	}
	printf("\n");

    //testa se há repetição no vetor, se houver, incrementa o cont(contador da quantidade de repetição) e armazena o valor no vetor com_repeticao
	for(int i = 0; i < 10; i++)
    {
		for(int j = 0; j < 10; j++)
        {
			if(vetor[i] == vetor[j])
            {
				cont++;
			}
		}
        //Se o count for maior que um quer dizer que há mais de uma incidência no vetor
		if(cont>1)
        {
			for(int l = 0; l < m; l++)
            {
                //Testa se o numero já está no vetor com_repeticao
				if(com_repeticao[l] == vetor[i])
                {
					acc++;
				}
			}
			if(acc == 0){
				com_repeticao[m] = vetor[i];
				m++;
			}
		}
		cont=0;
		acc=0;
	}

	printf("Numeros repetidos: \n");
	for(int i = 0; i<m; i++)
		printf("%d ", com_repeticao[i]);
	printf("\n");

	for(int i = 0; i < 10; i++)
    {
		for(int j = 0; j < m; j++)
        {
            //Testa se o vetor[i] está incluido no vetor com_repeticao, se estiver, eh pq esse número se repete
			if(vetor[i] != com_repeticao[j])
            //Cada numero diferente do vetor inicial incrementa K
			k++;
		}
        //Se k for igual a m quer dizer que o numero do vetor[i] é um número não repetido, logo ele será armazenado no vetor sem_repeticao,
        //(para se ter um numero que nao repita nenhuma vez o k tem q ser do mesmo tamanho do vetor aux)
		if(k == m)
        {
			sem_repeticao[cont] = vetor[i];
			cont++;
		}
		k=0;
	}

	printf("Numero nao-repetido: \n");
	for(int i = 0; i < cont; i++)
		printf("%d ", sem_repeticao[i]);
    printf("\n");

	return 0;	
}