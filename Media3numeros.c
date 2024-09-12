#include <stdio.h>
#include <conio.h>
float nota1,nota2,nota3;
void main(){
	printf("Informe o valor da nota1:");
	scanf("%f" ,&nota1);
	printf("Informe o valor da nota2:");
	scanf("%f" ,&nota2);
	printf("Informe o valor da nota3:");
	scanf("%f" ,&nota3);
	float media = (nota1+nota2+nota3)/3;
	printf("A media eh %.1f" ,media);
	getch();	
}
