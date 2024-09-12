#include<stdio.h>
#include<conio.h>
const float JP=0.12;
const int P=5;
const float P2=0.20;
//P2= porcentagem da primeira parcela//
void main(){
	float valorEMP;
	printf("informe o valor do emprestimo:");
	scanf("%f", &valorEMP);
	float PC1=(valorEMP*P2);
	float PC2=(PC1*JP)+PC1;
	float PC3=(PC2*JP)+PC2;
	float PC4=(PC3*JP)+PC3;
	float PC5=(PC4*JP)+PC4;
	//PC= parcelas//
	float valorT=(PC1+PC2+PC3+PC4+PC5);
	float diferenca=valorT-valorEMP;
	printf("Valor das parcelas:\n1 %.2f\n2 %.2f\n3 %.2f\n4 %.2f\n5 %.2f\n Valor total: %.2f\n Diferenca:%.2f",PC1,PC2,PC3,PC4,PC5,valorT,diferenca);
	getch();
	
	
}
