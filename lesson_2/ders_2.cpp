#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int a,c=1,b;
	printf("Bir sayi giriniz:");
	scanf("%d",&a);
	
	for(b=1;b<=a;b++)
	{
		c=b*c;
	}
		printf("sayi %d",c);
		
	return 0;
}

