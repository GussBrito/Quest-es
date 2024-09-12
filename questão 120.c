#include<stdio.h>
#include<conio.h>

void main(){
	int N;
	int soma=0;
	int proximo=1;
	printf("informe um numero:");
	scanf("%d",&N);
	while(soma<N){	
	    printf(" %d", proximo);
		proximo= proximo+1;
		soma= soma + proximo;
	
    	}
	getch();
}
