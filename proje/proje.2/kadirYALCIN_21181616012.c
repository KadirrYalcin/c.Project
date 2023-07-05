#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int secim,tel,cihaz,a,b,c,d;
	
	printf("**************** ABC ELEKTRONIK ****************\n\n");
	printf("**************** Hosgeldiniz ****************\n");

		for(a=1;a<2;a++)
		{
		
	
	printf("1-Urun ve fiyat sorgula \n");
	printf("2-Sepete urun ekle \n");
	printf("3-Siparis tamamla \n");
	printf("4-sonlandir \n");
	
	printf("Seciminiz: ");
	scanf("%d",&secim);
	printf("\n\n");
	

		
	 switch (secim)
{

		case 1:{
				for(b=1;b<2;b++){
		printf("1-Akilli telefon \n");
		printf("2-Akilli saat \n");
		printf("3-Yazici \n");
		printf("4-Bilgisayar \n");
		
		printf("Hangi kategoriden urunu sorgulamak istiyorsunuz:");
		scanf("%d",&cihaz);
		printf("\n");
		
		if(cihaz==1){
				printf("1.Akilli telefon: 1500 \n");
				printf("2.Akilli telefon: 2750 \n");
				printf("3.Akilli telefon: 8832 \n");
			
		}
	
		
		
		else if(cihaz==2){
			printf("1.Akilli saat: 543.99 TL \n");
			printf("2.Akilli saat: 1324.50 TL \n");
			printf("3.Akilli saat: 850 TL \n");
		}
	

		else if(cihaz==3){
			printf("1.Yazici: 533.50 TL \n");
			printf("2.Yazici: 848.20 TL \n");
			printf("2.Yazici: 1433.33 TL \n");
		}
		
		
		else if(cihaz==4){
			printf("1.Bilgisayar: 14.600 TL \n");
			printf("2.Bilgisayar: 12.964 TL \n");
			printf("3.Bilgisayar: 22.920 TL \n");
			printf("4.Bilgisayar: 36.923 TL \n");
		}
		
		else {
			printf("***Gecerli bir urun numarasi giriniz: \n");
			b-=1;
		}
		
			for(d=1;d<2;d++){	
			
			printf("\nBaska kategoriden urun sorgulamak icin (1):  \n");
			printf("Ana menuye donmek icin (2):\n");
			printf("----Tuslayiniz: \n");
			scanf("%d",&c);
			if(c==1){
				b--;
			}
			else if(c==2){
				a--;
			}
			else{
				printf("\n******Tekrar deneyiniz*** \n");
				d--;
			}
			}
		}
		break;
		}
		case 2:{
			
			break;
		}
	}
	}

	return 0;
}
