#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int count=0, count1=0;
	int i,j,k;
	char s[1000],s1[1000],*p;  
    int words=0;
	int commands=0;
    printf("Enter  the string : ");
    fgets(s, sizeof(s), stdin);
    strcpy(s1, s);
    char cizgi= '|';
    
    p=s;
 	while(*p){
    	if(*p++==32)
           words++;
	} 
  
    if(strlen(s)>0){
		words++;
	}
    char array[words][20];
    
	char * token = strtok(s, " ");
	while( token != NULL ) {
      printf( "%s\n", token ); //printing each token
      strcpy(array[count], token);
      token = strtok(NULL, " ");
	  count++;
      
   }
//   for( j =0 ; j < words; j++){
//   	printf("%s\n",array[j]);
//   }
//	printf("%s\n",s1);
	for (k = 0; s1[k] != '\0'; k++) {
        if (cizgi == s1[k])
            commands++;
    }
   commands++;
 // printf("%d", commands);
 	char cArray[commands][50];
	if(commands >= 1){	
		char * token1 = strtok(s1, "|");
		while( token1 != NULL ) {
      		printf("%s\n", token1 ); //printing each token
      		strcpy(cArray[count1], token1);
      		token1 = strtok(NULL, "|");
	  		count1++;
		}
	 
	}
//	for( j =0 ; j < commands; j++){
//   		printf("%s\n",cArray[j]);
//   }
	char word1[20]="";
	char word2[20]="";
	char word3[20]="";
	char word4[20]="";
	for (i = 0; i<commands; i++){
	int kSayi=0;
	char * token2 = strtok(cArray[i]," ");
		while( token2 != NULL ) {
      		printf( "%s\n", token2 ); //printing each token

      		token2 = strtok(NULL, " ");
	  		kSayi++;
		}
		printf( "%d\n", kSayi );
		if(kSayi==3){
			
		}
	}
//	if(char[0]==tekrar){
//		printf("tekrar konmutu geldi")
//	}
	return 0;
}
