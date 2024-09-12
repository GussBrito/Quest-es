#include<stdio.h>
#include<conio.h>
void main(){
	int k,parcelas,total=0;
	float valorf,proximap;
	printf("informe o valor do financeamento e o numero de parcelas:");
	scanf("%f %d",&valorf,&parcelas);
	float p1=valorf/parcelas;
	printf("primeira parcela %f",p1);
	for(k=2;k<=parcelas;k++){
		proximap=(0.07*p1)+p1;
		p1=proximap;
		printf("\n proxima parcela %f \n",proximap);
		total=(total+p1)+proximap;
	}
	float diferenca=total-valorf;
	printf("total a ser pago %d \n diferenca %f",total,diferenca);
	getch();
}
