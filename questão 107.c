#include<stdio.h>
#include<conio.h>
void main(){
	int m,n,k,div;
	int cont=0;
	// quantidade de numeros//
	int soma=0;
	// soma dos primos//
	int primos=0;
	// quantidade de numeros primos//
	printf("informe dois numeros: ");
	scanf("%d %d", &m,&n);
	for(k=m;k<=n;k++){
		for(div=1;div<=k;div++){
			if(k%div==0){
				cont=cont+1;
			}
		}
	}
			if (cont==2){
				soma=soma+k;
				primos=primos+1;
			}
			cont=0;
		}
		float media= (float)soma/primos;
		printf(" %d",media);
		getch();
}
	
