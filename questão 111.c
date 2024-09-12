#include<stdio.h>
#include<conio.h>
void main(){
	int num,termo_inicial,razao,k;
	printf("Informe o termo inicial da razao:");
	scanf("%d",&termo_inicial);
	printf("Informe a razao:");
	scanf("%d",&razao);
	printf("Informe um numero:");
	scanf("%d",&num);
	for(k=termo_inicial;k<=num;k){
		int PA=k+razao;
		printf("%d  ",PA);
	}
	getch();
}

