#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int j,i,k;
	
		for(i=1;i<=20;i++)
		{
			for(j=1;j<=i;j++)
			printf("*");
			
					for(k=21;k>i;k--)
					printf("  ");
						
			for(j=1;j<=i;j++)
			printf("*");
			
		printf("\n");
		}
	
	
		for(i;i>=1;i--)
		{
			for(j=1;j<=i;j++)
			printf("*");
			
					for(k=21;k>i;k--)
					printf("  ");
						
			for(j=1;j<=i;j++)
			printf("*");
			
		printf("\n");
		}
	
	return 0;
}
