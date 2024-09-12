#include<stdio.h>
#include<conio.h>
void main(){
	int k,m,n,div;
	int cont=0;
	printf("Informe um num:");
	scanf("%d",&m);
	printf("Informe outro num:");
	scanf("%d", &n);
	for(k=m;k<=n;k++){
		for(div=1;div<=k;div++){
			if(k%div==0){
				cont=cont+1;
			}
		}
		if(cont==2){
			printf(" %d",k);
		}
	    cont=0;
	 }
	 getch();
	}
		
