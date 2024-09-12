#include<stdio.h>
#include<conio.h>
float nota1,nota2,nota3;
void main(){
	printf("Informe as tres notas:");
	scanf("%f %f %f" ,&nota1,&nota2,&nota3);
	float peso1,peso2,peso3;
	printf("Informe o valor dos pesos:");
	scanf("%f %f %f" ,&peso1,&peso2,&peso3);
	float soma = (nota1*peso1)+(nota2*peso2)+(nota3*peso3);
	float media = soma/(peso1+peso2+peso3);
	printf("A media ponderada eh %.2f\n" ,media);
	getch();
}
