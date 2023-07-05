#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int elbagaj,bagaj,islem;
	islem=((elbagaj-8)*5+(bagaj-15)*5);
	
	printf("Valizdeki toplam agirlik:");
	scanf("%d",&bagaj);
	
	printf("Eldeki toplam agirligi giriniz:");
	scanf("%d",&elbagaj);


	islem=((elbagaj-8)*5+(bagaj-15)*5);
	printf("ödemeniz gereken toplam bagaj ucreti=%d",islem);
	
	
	
	return 0;
}
