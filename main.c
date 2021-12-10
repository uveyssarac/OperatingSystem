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
  printf("Komut Sayisi=%d\n", commands);
 	char cArray[commands][50];
	if(commands >= 1){	
		char * token1 = strtok(s1, "|");
		while( token1 != NULL ) {

      		strcpy(cArray[count1], token1);
      		token1 = strtok(NULL, "|");
	  		count1++;
		}
	 
	}
	char cArray2[commands][50];
	for( j =0 ; j < commands; j++){
   		printf("cArray[%d]=%s\n",j,cArray[j]);
   }
   	for( i =0 ; i < commands; i++){
   		strcpy(cArray2[i], cArray[i]);
   }
   	for( j =0 ; j < commands; j++){
   		printf("cArray2[%d]=%s\n",j,cArray2[j]);
   }
	char tempWords1[3][10];
	char tempWords2[4][10];
	
	for (i = 0; i<commands; i++){
		int kSayi=0;
		int count2=0;
		char * token2 = strtok(cArray[i]," ");
		
		while( token2 != NULL ) {
			token2 = strtok(NULL, " ");
	  		kSayi++;
		}
		for( j =0 ; j < commands; j++){
   		printf("cArray[%d]=%s\n",j,cArray2[j]);
   	}
		printf( "cArray1[%d] kelime sayisi = %d\n", i,kSayi );
		
		char * token3 = strtok(cArray2[i]," ");
		if(kSayi==3){
			while( token3 != NULL ) {
			token2 = strtok(NULL, " ");	
			strcpy(tempWords1[count2], token3);
			count2++;	
		}
		count2=0;
		}
	}
//	if(char[0]==tekrar){
//		printf("tekrar konmutu geldi")
//	}
	printf("----------SON-----------");
	return 0;
}
