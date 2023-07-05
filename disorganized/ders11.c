#include <stdio.h>
#include <stdlib.h>

	void genislik(int a[1][0],int b[1][0]){
		int x;
		x=a[1][0]-b[1][0];
		return x;
	}
	void uzunluk(int a[0][1],int b[0][1]){
		int y;
		y=a[0][1]-b[0][1];
		return y;
	}

int main() {
	
	printf("birinci alani giriniz:");
	scanf("%d",&a[1][0],"%d",a[0][1]);
	
	
	printf("ikinci noktayi giriniz:");
	scanf("%d",&b[1][0],"%d",b[0][1])
	
	return 0;
}
