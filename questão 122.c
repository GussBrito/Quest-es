#include <stdio.h>
#include <conio.h>
void main(){
	int N;
	int anterior=0;
	int proximo=1;
	int atual=0;
    printf("Informe um num:");
    scanf("%d",&N);
    while(proximo<N){
    	anterior= atual;
    	atual= proximo;
    	proximo= atual + anterior;
    
	}
	if(proximo==N){
		printf("O numero pertence a sequencia de fibonacci.");
	}
	else{
		printf("O numero nao pertence a sequencia de fibonacci.");
	}
	getch();
}
