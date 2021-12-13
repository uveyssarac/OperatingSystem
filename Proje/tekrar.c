#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
char *newargv[3];
   	newargv[0]=argv[0];
   	newargv[1]=argv[1];
   	newargv[2]=NULL;


int sayi;
sayi=atoi(newargv[1]);
int i;
for(i=0; i<sayi;i++){

printf("%s\n",newargv[0]);

}


return 0;

}
