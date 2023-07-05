#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int k,l;
char film[10][5][200];

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
						
						for(k=1;k<=i;k++){
					for(l=1;l!='\0';l++)
					printf("%c",film[k][l][200]);
					printf("\n");

	return 0;
}
