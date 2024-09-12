#include<stdio.h>
#include<conio.h>

void main(){
	float peso,altura,imc;
	int k;
	int pn=0;
	int ap=0;
	int abp=0;
	for(k=1;k<=3;k++){
		printf("Informe o peso e a altura:");
		scanf("%f %f",&peso,&altura);
		imc= peso/(altura*altura);
		printf("IMC: %.2f\n", imc);
		if (imc>25){
			ap = ap+1;
		
		}
		else if (imc>18.5){
			pn = pn+1;
		
		}
		else{
			abp = abp+1;
			
		}
			
	}
	printf("%d acima do peso\n %d peso normal\n %d abaixo do peso",ap,pn,abp);
	getch();
}
