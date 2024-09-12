#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
	char palavra[30];
	printf("Informe uma palavra:\n");
	gets(palavra);
	int posicao;
	printf("Informe uma posicao:\n");
	scanf("%d",&posicao);
	int tamanho = strlen(palavra);
	char letra= palavra[tamanho-posicao];
	printf("O caractere da posicao %d, eh %c\n",posicao,letra);
	getch();

}
