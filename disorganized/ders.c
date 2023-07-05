#include <stdio.h>
#include <stdlib.h>

int main(){
int k,l,i=1;
char film[1][7][200]={{"aa","bb","cc"""}};

						printf("Ekleyeceginiz filmin adi:");
						scanf("%s",&film[i][0][200]);
						printf("Ekleyeceginiz filmin yonetmenin adi:");
						scanf("%s",&film[i][1][200]);
						printf("Ekleyeceginiz filmin birinci oyuncusunun adi:");
						scanf("%s",&film[i][2][200]);
						printf("Ekleyeceginiz filmin ikinc oyuncusunun adi:");
						scanf("%s",&film[i][3][200]);
						printf("Ekleyeceginiz filmin dili:");
						scanf("%s",&film[i][4][200]);
						printf("Ekleyeceginiz filmi izlediniz mi:");
						scanf("%s",&film[i][5][200]);
						i++;
						
						for(k=0;k<=i;k++){
					for(l=0;l<=6;l++)
					printf("%s   ",film[k][l]);
					printf("\n");
				}
				getch();
	return 0;
}
