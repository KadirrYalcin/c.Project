#include <stdio.h>
#include <stdlib.h>

		//kullaniciadi ve sifre sayi oldugu surece kod calismaktadir.
		//istenilen yerde string istenilen yerde integer deger girilmelidir.


int main() {
	
	int a,kullaniciadi,sifre,secim,yer;
	char film[20][7][200];
	char gecici[20][7][200];
	char e;
					int i=1,b,c,k,l,z;
	
	
	for(a=0;a<1;a++){																		//Kullaniciadi veya sifreyi yanlis girince basa donmesi icin.
	
		printf("     GAZI SINEMALARI  \n");
		
		printf("Lutfen kullanici adinizi giriniz:");									   //Kullaniciadini kullaniciadn almak icin.
		scanf("%d",&kullaniciadi);
		printf("Lutfen sifernizi giriniz:");											   //sifreyi kullaniciadn almak icin.
		scanf("%d",&sifre);
	
	for(z=0;z<1;z++){																		//Kullaniciadi ve sifreyi dogru girildikten sonra ana menuye donmek icin.
	if (kullaniciadi==123 && sifre==123 ){
	printf("-----------------------\n\n");
	printf("1->Film ekle\n");																				//ana menu.
	printf("2->Filmleri listele\n");	 														
	printf("3->Film sil\n");	
	printf("4->Film bilgisini duzenle\n");
	printf("5->Cikis\n");
	printf("-----------------------\n");
	printf("Seciminiz:");
	scanf("%d",&secim);	
			if(secim<1 || secim>5){																//ana menude olmayan bir secenege tikladiginda hata verip ana menuye dondurmek icin.
			printf("Hatali giris.\nTekrar deneyiniz.\n\n");
			z--;
			}
			else{	
		switch(secim){																		//ana menudeki secimleri kullanabilmek icin.
	case 1:															
				printf("ekleyeceginiz filmi\n");
				printf("Siranin sonuna eklemek icin: (1)\n");								
				printf("Belirlenen siraya eklemek icin: (2)\n");
				printf("Tuslayiniz--->");
				scanf("%d",&yer);
			
			if(yer==1){																	//eklenecek olan filmi dizinin sonuna eklemek ivin.
					printf("Ekleyeceginiz filmin adi:");
					scanf("%s",&film[i][0][200]);
					printf("Ekleyeceginiz filmin yonetmenin adi:");
					scanf("%s",&film[i][1][200]);
					printf("Ekleyeceginiz filmin birinci oyuncusunun adi:");			//film bilgilerini almak icin.
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
					printf("Hangi siraya eklemek istiyorsunuz\n");								//eklenecek olan filmi dizinin neresine eklemek istedigini ogrenmek  icin.
					scanf("%d",&sira);
					
						if(i>=sira && sira>0){													//sectigi konumun dogru oldugunu sinamak.
						for(c=i;c>=sira;c--){													
						for(k=0;k<7;k++){														//Secilen konumun sonrasindaki elemanlari bir sonraki konuma aktarmak icin.
						for(l=0;l<200;l++)
						film[(c+1)][k][l]=film[c][k][l];	
						}
						}
					
					printf("Ekleyeceginiz filmin adi:");									
					scanf("%s",&film[sira][0][200]);
					printf("Ekleyeceginiz filmin yonetmenin adi:");
					scanf("%s",&film[sira][1][200]);
					printf("Ekleyeceginiz filmin birinci oyuncusunun adi:");				//film bilgilerini almak icin.
					scanf("%s",&film[sira][2][200]);
					printf("Ekleyeceginiz filmin ikinci oyuncusunun adi:");
					scanf("%s",&film[sira][3][200]);
					printf("Ekleyeceginiz filmin dili:");
					scanf("%s",&film[sira][4][200]);
					printf("Ekleyeceginiz filmi izlediniz mi:");
					scanf("%s",&film[sira][5][200]);
					i++;	
					}
						else{																	//sectigi konumun dogru olmadigini sinamak.
						printf("Hatali numara tusladiniz\n");
						b--;
						}
				}		
			}
			else {
					printf("Hatali giris..\n");												//konumunu secerken 1 veya 2 den farkli bir sayi tuslarsa ana menuye dondurmek icin.
			}
			z--;																	//islem bitikten sonra ana menuye dondurmek icin.
				break;
			
			
	case 2:
			if(i==1){
					printf("Film listeniz bos....\n");											//Film listesinin bos oldugunu bildirmek icin.
			}
			else if(i>1 || i<=10){
					for(k=1;k<i;k++){														//10 veya 10'dan az film varsa bastan siralamak icin.
					for(l=1;l<=6;l++)
					printf("%d--%s \n",k,film[k][l]);
					printf("\n\n");			
					}
					}		
			else{
					printf("Listelenecek olan filmlerin baslangic ve bitis sirasini giriniz: ");	// 10 dan fazla film varsa hangþ araligi istedigini kullanicidan almak icin.
					scanf("%d%d",&k,&l);
					for(k;k<=l;k++){
					for(b=1;b<=6;b++)
					printf("%d--%s \n",k,film[k][b]);												// istenilen araligi ekrana yazdirmak icin.
					printf("\n\n");			
				}
			}
			z--;																					//islem bitikten sonra ana menuye dondurmek icin.
				break;
				
					
	case 3:
			if(i>1){																				//Listede film oldugunu sorgulamak icin.
					for(k=1;k<i;k++){
					for(l=1;l<=6;l++)
					printf("%d--%s \n",k,film[k][l]);												//listede olan filmleri ekrana yazdirmak icin.
					printf("\n\n");
					}
			printf("Hangi filmi silmek istersiniz:");
			scanf("%d",&b);																			//Silmek istedigi filmi ekrana yazdirmak icin.
			printf("%d. siradaki filmi silmek icin 'e' tuslayiniz.",b);
			scanf("%s",&e);																			//Silmek istedigini sorgulamak icin.
				
					if(e=='e' || e=='E'){															// e tusladigini kontrol etmek icin.
						for(l=0;l<=6;l++){
						film[b][l][200]='\0';														//Secilen filmi silmek icin.
						}
					
					for(c=b;c<=i;c++){																//Secilen siradaki filmden sonraki filmleri bir onceki konuma alarak aradaki boslugu kapatmak icin.
					for(k=0;k<7;k++){
					for(l=0;l<200;l++)
					film[c][k][l]=film[(c+1)][k][l];
					}
					}
			i--;																					//Listedeki film sayisini 1 azaltmak icin.
					}
			}
			else{
					printf("Film listeniz bos...\n");												//listede film olmadigini kullaniciya bildirmek icin.
			}
			z--;																					//islem bitikten sonra ana menuye dondurmek icin.
			break;	
			
			
	case 4:
			if(i>1){																				//Listede film oldugunu sorgulamak icin.
					for(k=1;k<i;k++){
					for(l=1;l<=6;l++)
					printf("%d--%s \n",k,film[k][l]);												//listede olan filmleri ekrana yazdirmak icin.
					printf("\n\n");			
					}
			
				
				printf("Hangi filmi duzenlemek istersiniz");										//Duzenlemek istedigi filmi sormak icin.
				scanf("%d",&b);
				printf("Duzenlemek istediginiz film..");
					for(l=0;l<=6;l++){
					printf("%s",film[b][l]);														//duzenlemek istedigi filmi ekrana yazdirmak icin.
					printf("\n");
					}
			
				printf("Duzenleyeceginiz filmin adi:");
				scanf("%s",&gecici[b][0][200]);
				printf("Duzenleyeceginiz filmin yonetmenin adi:");
				scanf("%s",&gecici[b][1][200]);
				printf("Duzenleyeceginiz filmin birinci oyuncusunun adi:");							//duzenlemek istedigi filmin yeni bilgilerini gecici bir dizide tutmak icin.
				scanf("%s",&gecici[b][2][200]);
				printf("Duzenleyeceginiz filmin ikinci oyuncusunun adi:");
				scanf("%s",&gecici[b][3][200]);
				printf("Duzenleyeceginiz filmin dili:");
				scanf("%s",&gecici[b][4][200]);
				printf("Duzenleyeceginiz filmi izlediniz mi:");
				scanf("%s",&gecici[b][5][200]);
		
						printf("\nDegisikligi kaydetmek icin 'e' tuslayiniz");					//degisikligi onaylayp onaylamadigini ogrenmek icin.
						scanf("%s",&e);
							if(e=='e' || e=='E'){
							for(l=0;l<=6;l++){
							for(k=0;k<200;k++)													//Onaylar ise film listesini guncellemek icin.
							film[b][l][k]=gecici[b][l][k];
							}
							printf("Onaylandi...\n");											//Onaylandigini kullaniciya bildirmek icin.
							}
			}
			
			else{
					printf("Film listeniz bos...\n");											//listede film olmadigini kullaniciya bildirmek icin.
			}
			z--;																				//islem bitikten sonra ana menuye dondurmek icin.
				break;
				
				
	case 5:
			printf("Islemi sonlandirmak icin 'e' tuslayiniz");									// sistemden cikmak icin.	
			scanf("%s",&e);
				if(e=='e' || e=='E'){
				printf("Bizi tercih ettiginiz icin tesekkurler.");								//Sistemden cikmeayi onaylamak icin.
				printf("Islem sonlandiriliyor...");	
				}
				else
				z--;																		//islemi devam ettirmek istiyor ise ana menuye dondurmek icin
			break;
			
}
}
}
	else {
	printf("Tekrar deneyiniz...\n");														//Kullaniciadi veya sifre yanlis ise sistemin basina donmek icin.
	a--;
	}
}
}
	return 0;
}
