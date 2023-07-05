#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int b,a,top=0;
	
	printf("Pozitif bir sayi giriniz:");
	scanf("%d",&a);
	
	while(a>0){
		
		b=a%10;
		top=top+b;
		a=a/10;
		
		
		printf("Basamaktaki sayi: %d \n",b);
		
	}
	
	printf("%d",top);
	
	
	return 0;
}
