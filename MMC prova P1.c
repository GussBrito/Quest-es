#include<stdio.h>
#include<conio.h>
void main(){
	int n1,n2,n3,divisor=2,cont=0, mmc=1;
    printf("Informe tres numeros:");
    scanf("%d %d %d", &n1,&n2,&n3);
    do{
     if(n1%divisor==0){
     	n1=n1/divisor;
     	cont=cont+1;
	 }	
	 if(n2%divisor==0){
	 	n2=n2/divisor;
	 	cont=cont=1;
	 }
	 if(n3%divisor==0){
	 	n3=n3/divisor;
	 	cont=cont+1;
	 }
	 if(cont>0){
	 	mmc=mmc*divisor;
	 }
	 else{
	 	divisor=divisor+1;
	 }
	 cont=0;
	}
	while(n1!=1 || n2!=1 || n3!=1);
	printf("MMC = %d",mmc);
	getch();
	}
