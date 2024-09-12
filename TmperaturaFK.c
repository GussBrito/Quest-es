#include<stdio.h>
#include<conio.h>

void main(){
	float tempeC;
	printf("Informe a temperatura em celsius:");
	scanf("%f" ,&tempeC);
	float tempeF1 = (tempeC*9)+(32*5);
	float tempeF = tempeF1/5;
	float tempeK = tempeC + 273;
	printf("A temperatura em fahrenhint eh %.2f, e a temperatura em kelvin eh %.2f\n" ,tempeF,tempeK);
	getch();
}
