#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int a,b=1,c;
	float para;
	
	
	while(b<2){
	
	printf("Kalemin urun kodunu giriniz:");
	scanf("%d",a);
	
	if(a==11){
	para+=1.5;
	c++;
	}
	else if(a==12){
	para+=2.5;
	c++;
	}
	else if(a==13){
	para+=3.5;
	c++;
	}
	else if(a==14){
	para+=4.5;
	c++;
	}	
	else if(a==15){
	para+=5;
	c++;
	}
	else if(a==101)
	b++;
	
	else
	printf("Tekrar deneyiniz\n");
	
	}
	printf("Odemeniz gereken ucret:%.2f TL...",para);
	printf("Girdiginiz kalem sayisi:%d",c);
	return 0;
}
