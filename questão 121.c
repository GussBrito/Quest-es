#include<stdio.h>
#include<conio.h>

void main(){
	int term1, r;
	int N;
	printf("Informe o termo inicial:");
	scanf("%d", &term1);
	printf("Informe a razao:");
	scanf("%d", &r);
	printf("Informe um numero:");
	scanf("%d",&N);
	int valor = term1;
	if(r<0){
		while(valor>=N){
			printf(" %d", valor);
			valor = valor +r;
		}
		}
		else{
			while(valor<=N){
				printf(" %d", valor);
				valor=valor+r;
			}
		}
	
	
    getch();
}
