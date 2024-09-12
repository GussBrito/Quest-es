#include<stdio.h>
#include<conio.h>

void main(){
	int num;
	printf("informe um numero inteiro:");
	scanf("%d" ,&num);
	int resto = num%2;
	if (resto==0){
	printf("O numero %d eh par\n" ,num);
	}
	else{
		printf("O numero %d eh inpar\n" ,num);
	}
	getch();
}


