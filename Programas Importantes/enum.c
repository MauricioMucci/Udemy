#include <stdio.h>

//Enum -> Enumeração

enum dias_da_semana{
	segunda,
	terca,
	quarta,
	quinta,
	sexta,
	sabado,
	domingo
};


int main(){
	enum dias_da_semana d1, d2;

	d1 = quinta; //3

	d2 = 3; //quinta

	if(d1 == d2){
		printf("Os dias são iguais...\n");
	}else{
		printf("Os dias não são iguais\n");
	}

	return 0;
}