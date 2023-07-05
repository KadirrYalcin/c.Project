#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int a,b,c;
	
	printf("Kac tane sayinin hesaplanmasini istiyorsunuz:");
	scanf("%d",&a);
	
	for(b=1;b<=a;b+=1)
{
		printf("sayi giriniz:");
		scanf("%d",&c);
	
	if(c<0)
	{
		printf("%d negatif sayidir \n",c);
	}
		else if(c>0)
		{
			printf("%d pazitif sayidir  \n",c);
		}
		else
			{
				printf("girdiginiz sayi sifirdir \n");
			}
	}
	return 0;
}
