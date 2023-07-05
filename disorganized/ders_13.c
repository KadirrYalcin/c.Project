#include <stdio.h>
#include <stdlib.h>

	siralama(int *a[],int n){
		int enb,i;
		
		enb=*a[0];
		for(i=0;i<n;i++){
			if(enb<a[i]){
				*a[i]=*a[i+1];
				*a[i+1]=enb;
			}
			
		}
	}

int main() {
	int n,i;
	printf("kac sayi gireceksiniz:");
	scanf("%d",n);
	int a[n];
	for(i=0;i<n;i++){
		printf("%d. sayiyi giriniz:",i+1);
		scanf("%d",&a[i]);
	}
	siralama(&a[n],n);
		for(i=0;i<n;i++)
	printf("%d",a[i]);
	
	

	return 0;
}
