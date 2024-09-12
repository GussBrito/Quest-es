#include<stdio.h>
#include<conio.h>
void main(){
	int m,n,k,x;
	printf("informe dois numeros:");
	scanf("%d %d",&m,&n);
	printf("informe outro numero:");
	scanf("%d",&x);
	for(k=m;k<=n;k++){
		int div= k%x;
	if(div==0){
		printf("%d  ",k);
	}
}
	getch();
}
