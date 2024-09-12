#include<stdio.h>
#include<conio.h>
int const quantidade=3;
void main(){
	int k,num;
	int fatorial=1;
	int atz;
	
	for(k=1;k<=quantidade;k++){
		printf("Informe um numero inteiro:");
		scanf("%d", &num);
		for(atz=num;atz>=1;atz--){
			fatorial=fatorial*atz;
			
		}
		printf("%d\n",fatorial);
		fatorial=1;
	    	}
	getch();
}


