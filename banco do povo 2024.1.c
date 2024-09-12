#include<stdio.h>
#include<conio.h>
void main(){
	int k,parcelas,total=0;
	float valorf,proximap;
	printf("informe o valor do financeamento e o numero de parcelas:");
	scanf("%d %f",&valorf,&parcelas);
	float p1=valorf/parcelas;
	printf("primeira parcela %d",p1);
	for(k=1;k<=(parcelas=parcelas-1);k++){
		proximap=((7/100)*p1)+p1;
		total=total+proximap;
		printf("proxima parcela %f \n",proximap);
	}
	float diferenca=(total+p1)-valorf;
	printf("total a ser pago %f \n diferenca %f",total,diferenca);
	getch();
}
