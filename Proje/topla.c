#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *newargv[3];
   	newargv[0]=argv[1];
   	newargv[1]=argv[2];
   	newargv[2]=NULL;

	int sayi1,sayi2;
	sayi1=atoi(newargv[0]);
	sayi2=atoi(newargv[1]);
	int sonuc=sayi1+sayi2;
	printf("%d\n",sonuc);
	
	return 0;
}
