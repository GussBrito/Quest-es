#include<stdio.h>
#include<conio.h>
void main(){
	int saque, ced100, ced50, ced20, valort, resto;
	printf("Informe o valor do saque: ");
	scanf("%d",&saque);
	valort = saque;
	while(saque!=0){
		if(saque%10 == 0){
			ced100 = saque / 100;
			resto = saque % 100; 
			ced50 = resto / 50; 
			resto = resto % 50; 
			ced20 = resto / 20; 
			if(ced100>0){
				printf("%d ced 100\n",ced100);
			}
			if(ced50>0){
				printf("%d ced 50\n",ced50);
			}
			if(ced20>0){
				printf("%d ced 20\n",ced20);
			}
		}
		else{
			printf("Impossiel sacar este valor!\n");
		}
		printf("Informe o valor do saque: ");
		scanf("%d",&saque);
		valort = valort + saque;
	}
	printf("Valor total sacado: R$%d",valort);
	getch();
}
