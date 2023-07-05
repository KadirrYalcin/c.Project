#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int s1,s2,s3,p1;
	float ort;
	
	printf("\n ********* Ogrencinin donem sonundaki basari hesaplamasi ********* \n\n");
	printf("Ogrencinin birinci sinavini giriniz:");
	scanf("%d",&s1);
	
	printf("Ogrencinin ikinci sinav notunu giriniz:");
	scanf("%d",&s2);
	
	printf("Ogrencinin proje notunu giriniz:");
	scanf("%d",&p1);	
	
	ort=(s1+s2+p1)/3;
	
	if(ort<=50)
	{
		printf("donem sonundaki basarisi: ff (%.2f)",ort);
	
	}
	else if(ort>=50 && ort<60)
	{
		printf("Donem sonundaki basari siralamasi: dd (%.2f)",ort);
		
	}
	else if(ort>=60 && ort<70)
	{
		printf("Donem sonundaki basari siralamasi: cc (%.2f)",ort);
	}
	else if(ort>70 && ort<85)
	{
		printf("Donem sonu basari siralamasi: bb (%.2f)",ort);
	}
	else 
	{
		printf("Donem sonundaki basari siralamaniz: aa (%.2f)",ort);
	
	}
	
	
	
	
	return 0;
}

