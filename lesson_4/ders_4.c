#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	char k;
	int m=1,b=0,c=0,a=0,f=0;
	float not,ort=0;
	
	
	while(m<2){
		
		printf("Harf notunuzu giriniz(cikis icin h tusuna basiniz):");
		scanf("%s",&k);
		
		if(k=='A' || k=='a')
		a++;
		else if(k=='B' || k=='b')
		b++;
		else if(k=='C' || k=='c')
		c++;
		else if(k=='F' || k=='f')
		f++;
		else if(k=='H' || k=='h')
		m++;
		else
		printf("hatali giris\n");
	}
	ort=a*4+b*3+c*2+f*0;
	printf("Donem sonu notu:%f\n",ort);
	not=ort/(a+b+c+f);
	printf("not ort:%f",not);
	
	
	return 0;
}
