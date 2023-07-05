#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int a,b,c,i,top;
	for(i=0;i<1;i++){

	printf("Baslangic yilini giriniz:");
	scanf("%d",&a);
	printf("Bitis yilini giriniz:");
	scanf("%d",&b);
	printf("------------------------\n");
	if(a<=b)
	{
		for(a=a;a<b;a++){
			if(a%4==0){
			printf("%d \t",a);
			top+=1;
			}	
		}
	printf("\nToplam %d adet artik yil vardir",top);
	}

	else
	{
	printf("Baslangic yili bitis yilindan daha buyuk olamaz. \n    Lutfen tekrar deneyiniz\n\n\n");
	i--;	
	}

}	
	return 0;
}

