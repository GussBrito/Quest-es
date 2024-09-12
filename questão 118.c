#include<stdio.h>
#include<conio.h>
void main(){
	int N,k;
	int num=1;
	int contagem=0;
	int quantidade=0;
	printf("informe um numero:");
	scanf("%d",&N);
	while(contagem<N){
		for(k=1;k<=num;k++){
			if(num%k==0){
				quantidade++;
			}
			
		}
				if(quantidade==2){	
			    printf(" %d ",num);
				contagem++;
		}
		quantidade=0;
		num++;
	}
	getch();
}
