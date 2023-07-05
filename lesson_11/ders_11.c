#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void toplacikar(int a,int b,int *c,int *d){

	*c=a+b;
	if(a<=b){
	*d=b-a;	
	}
	else{
	*d=a-b;	
	}
}


int main() {
	int k,l,c,d;
	printf("1.sayiyi giriniz:");
	scanf("%d",&k);
	printf("2.sayiyi giriniz:");
	scanf("%d",&l);
toplacikar(k,l,&c,&d);
	printf("1.sayi %d\t 2.sayi %d\nsayilar toplami----> %d\nsayilar farki----> %d",k,l,c,d);
	
	
	
	return 0;
	
}
