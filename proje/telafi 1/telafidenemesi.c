#include <stdio.h>
#include <stdlib.h>




int main() {
	
	int a,kullaniciadi,sifre,secim,yer;
	char film[20][7][200];
					int i=1,b,c,k,l;
	
	
	for(a=0;a<1;a++){
	
		printf("     GAZI SINEMALARI  \n");
		
		printf("Lutfen kullanici adinizi giriniz:");
		scanf("%d",&kullaniciadi);
		printf("Lutfen sifernizi giriniz:");
		scanf("%d",&sifre);
	
	
	if (kullaniciadi==123 && sifre==123 ){
		
	printf("1->Film ekle\n");
	printf("2->Filmleri listele\n");	 
	printf("3->Film sil\n");	
	printf("4->Film bilgisini duzenle\n");
	printf("5->Cikis\n");
	printf("-----------------------\n");
	printf("Seciminiz:");
	scanf("%d",&secim);	
		
		switch(secim){
			case 1:
			
				
				printf("ekleyeceginiz filmi\n");
				printf("Siranin sonuna eklemek icin: (1)\n");
				printf("Belirlenen siraya eklemek icin: (2)\n");
				printf("Tuslayiniz--->");
				scanf("%d",&yer);
			
				if(yer==1){
						printf("Ekleyeceginiz filmin adi:");
						scanf("%s",&film[i][0][200]);
						printf("Ekleyeceginiz filmin yonetmenin adi:");
						scanf("%s",&film[i][1][200]);
						printf("Ekleyeceginiz filmin birinci oyuncusunun adi:");
						scanf("%s",&film[i][2][200]);
						printf("Ekleyeceginiz filmin ikinci oyuncusunun adi:");
						scanf("%s",&film[i][3][200]);
						printf("Ekleyeceginiz filmin dili:");
						scanf("%s",&film[i][4][200]);
						printf("Ekleyeceginiz filmi izlediniz mi:");
						scanf("%s",&film[i][5][200]);
						i++;
				}
				else if(yer==2){
					for(b=0;b<1;b++){
					int sira=0;
					printf("Hangi siraya eklemek istiyorsunuz\n");
					scanf("%d",&sira);
					
						if(i>=sira && sira>0){	
					for(c=i;c>=sira;c--){
					for(k=0;k<7;k++){
					for(l=0;l<200;l++)
					film[(c+1)][k][l]=film[c][k][l];	
						}
						}
					
						printf("Ekleyeceginiz filmin adi:");
						scanf("%s",&film[sira][0][200]);
						printf("Ekleyeceginiz filmin yonetmenin adi:");
						scanf("%s",&film[sira][1][200]);
						printf("Ekleyeceginiz filmin birinci oyuncusunun adi:");
						scanf("%s",&film[sira][2][200]);
						printf("Ekleyeceginiz filmin ikinci oyuncusunun adi:");
						scanf("%s",&film[sira][3][200]);
						printf("Ekleyeceginiz filmin dili:");
						scanf("%s",&film[sira][4][200]);
						printf("Ekleyeceginiz filmi izlediniz mi:");
						scanf("%s",&film[sira][5][200]);
						i++;	
					}
						else{
					printf("Hatali numara tusladiniz\n");
					b--;
					}
						}		
						}
				else {
					printf("Hatali giris..\n");
					a--;
					}
					a--;
				break;
			
			
			case 2:
				for(k=1;k<i;k++){
				for(l=1;l<=6;l++)
					printf("%d--%s \n",k,film[k][l]);
					printf("\n\n");
				}
				break;
				
					
			case 3:
			for(k=1;k<i;k++){
			for(l=1;l<=6;l++)
				printf("%d--%s \n",k,film[k][l]);
				printf("\n\n");
				}
				printf("Hangi filmi silmek istersiniz")	;
				scanf("%d",&b);
			for(l=0;l<=6;l++){
				film[b][l][200]='\0';
				i--;
				}
				a--;
			break;
			
			
			
			
			
			
			
		}
		
		
		
		
	}
	else{
	printf("Tekrar deneyiniz...\n");
	a--;
	}
	

	
	
	
	

	
	
	
	}
	return 0;
}
