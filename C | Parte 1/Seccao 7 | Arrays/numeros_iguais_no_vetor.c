#include <stdio.h>

int main(){

 	int vetor[10];
    int m = 0, com_repeticao[m], cont = 0;
    int acc = 0; //contador de numeros q ja estao no vetor com_repeticao

    for (int i = 0; i < 10; i++)
    {
        printf("v[%d]: ", i);
            scanf("%d", &vetor[i]);
    }
    
    //imprime o vetor
    for(int i = 0; i < 10; i++)
    {
    	printf("%d ", vetor[i]);
	}
	printf("\n");

    //testa se há repetição no vetor, se houver, incrementa o cont(contador da quantidade de incidencia do numero) e armazena o valor no vetor com_repeticao
	for(int i = 0; i < 10; i++)
    {
		for(int j = 0; j < 10; j++)
        {
			if(vetor[i] == vetor[j])
            {
				cont++;
			}
		}
        //Se o count for maior que um, há mais de uma incidência do numero no vetor
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
			if(acc == 0)
			{
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

    return 0;
}