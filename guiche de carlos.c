#include<stdio.h>
#include<conio.h>

void main(){
	int posicao;
	printf("Informe uma posicao:");
	scanf("%d",&posicao);
	int guiche=((posicao-1)%5)+1;
	int tempo=((posicao-1)/5)*15;
	printf("O guiche de Carlos eh %d, e o tempo que ele vai ficar esperando eh de %d minutos/horas.",guiche,tempo);
	getch();
	
}
