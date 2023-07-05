#include <iostream>
#
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
 int a,b,c,f=1;
 
 printf("\n bir sayi giriniz:");
 scanf("%d",&a);
 
 printf("\n girdiginiz sayini kac kere carpilacagini giriniz:");
 scanf("%d",&b);
 
 for(c=1;c<=b;c+=1)
 {
 	f=f*a ;
 }
 printf("\n carpim sonucu ====  %d ",f);

	return 0;
}
