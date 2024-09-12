#include<stdio.h>
#include<conio.h>
#include<string.h>
int const pessoas=4;
void main(){
	int k, idade;
	int quantidadef=0;
	char sexo; 
	char nome[30];
	
	for(k=1;k<=pessoas;k++){
		fflush(stdin);
		printf("\nInforme seu nome:");
		gets(nome);
		printf("\nInforme sua idade:");
		scanf("%d", &idade);
		fflush(stdin);
		printf("\nInforme seu sexo usando M ou F: ");
		scanf("%c",&sexo);
		
		if(sexo=='F' && idade>18 && idade<21){
			quantidadef++;
		}
		
		}		
		
		printf("Existem %d mulheres entre 18 e 21 anos.",quantidadef);
		getch();
	}
	
	

