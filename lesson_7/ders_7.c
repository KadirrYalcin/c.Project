#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int a,b,i,j,buyuk;

	printf("il sayisini giriniz:");
	scanf("%d",&a);
		int x[a][2];
	
	for(b=0;b<a;b++){
	printf("%d-Ilin plakasini ve destek miktarini giriniz:",b+1);
	scanf("%d %d",&x[b][0],&x[b][1]);
	}	
	for(i=0;i<a;i++){
		j=0;
		j=i+1;
	if(x[i][1]<x[j][1])
	buyuk=x[j][1];
	}	
	printf("%d",buyuk);
	
	return 0;
}
