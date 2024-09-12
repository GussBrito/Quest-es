#include<stdio.h>
#include<conio.h>

void main(){
    int anterior=0;
	int atual=0;
	int proximo=1;
	int N,k;
	printf("Informe um numero inteiro:");
	scanf("%d",&N);
	while(proximo <N){
	        printf(" %d",proximo);
			anterior = atual;
			atual = proximo;
			proximo = anterior + atual;
			
			
	}

	getch();
}
