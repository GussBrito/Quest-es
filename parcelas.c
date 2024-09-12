#include<stdio.h>
#include<conio.h>
void main(){
	float avista,tresv,dezv, compra;
	printf("Informe o valor da compra:");
	scanf("%f", &compra);
	float desconto = compra* 0.10;
	avista = compra - desconto;
	tresv = compra/3;
	float acrescimo = compra*0.20;
	dezv = (acrescimo + compra)/10;
	printf("O valor da compra a vista eh %.2f, o valor de cada parcela em tres vezes sera de %.2f e o valor de cada parcela em dez vezes sera de %.2f\2", avista, tresv, dezv);
	getch();
	
}
