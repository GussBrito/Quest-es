#include<stdio.h>
#include<conio.h>
const float T=0.11;
void main(){
	float salario;
	printf("Informe seu salario bruto:");
	scanf("%f",&salario);
	float salarioT= salario-(salario*T);
	// SalarioT= salario + taxa//
	if(salario<=1903.98){
		printf("%.2f",salarioT);
	}
	else if(salario>=1903.99 || salario<=2826.65){
		float salario1= salarioT-(salarioT*0.075);
		printf("%.2f",salario1);
	}
	else if(salario>=2826.66 || salario<=3751.05){
		float salario2= salarioT-(salarioT*0.15);
		printf("%.2f",salario2);
	}
	else if(salario>=3751.06 || salario<=4664.68){
		float salario3= salarioT-(salarioT*0.225);
		printf("%.2f",salario3);
	}
	else{
		
		float salario4 = salarioT-(salarioT*0.275);
		printf("%.2f",salario4);
	}
	getch();
}
