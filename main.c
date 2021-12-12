#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int count=0, count1=0;
	int i,j,k;
	char string[1000],string1[1000],string2[1000]*p;  
    int wordsNumber=0;
	int commands=0;
    printf("Enter  the string : ");
    fgets(string, sizeof(string), stdin);
    strcpy(string1, string);
    strcpy(string2, string);
    char cizgi= '|';
    
//    p=string;
// 	while(*p){
//    	if(*p++==32)
//           wordsNumber++;
//	} 
//  
//    if(strlen(string)>0){
//		wordsNumber++;
//	}
//    char array[wordsNumber][20];
    
//	char * token = strtok(string, " ");
//	while( token != NULL ) {
//      printf( "%s\n", token ); //printing each token
//      strcpy(array[count], token);
//      token = strtok(NULL, " ");
//	  count++;
//      
//   }
//   for( j =0 ; j < wordsNumber; j++){
//   	printf("%s\n",array[j]);
//   }
//	printf("%s\n",s1tring);
	for (k = 0; string1[k] != '\0'; k++) {	// Komut Sayýsýný bulma = commands
        if (cizgi == string1[k])
            commands++;
    }
   	commands++;
   	char cArray[commands][50];             //Komut Sayýsý kadar Array oluþturma
  	printf("Komut Sayisi=%d\n", commands);
 	
	if(commands > 1){	
		char * token1 = strtok(string1, "|");
		while( token1 != NULL ) {

      		strcpy(cArray[count1], token1);
      		token1 = strtok(NULL, "|");
	  		count1++;
		}
	 
	}
	printf("%s\n",string1);
//	char cArray2[commands][50];
//	for( j =0 ; j < commands; j++){
//   		printf("cArray[%d]=%s\n",j,cArray[j]);
//   }
//   	for( i =0 ; i < commands; i++){
//   		strcpy(cArray2[i], cArray[i]);
//   }
//   	for( j =0 ; j < commands; j++){
//   		printf("cArray2[%d]=%s\n",j,cArray2[j]);
//   }
//	char tempWords1[3][10];
//	char tempWords2[4][10];
//	for( j =0 ; j < commands; j++){
//   		printf("cArray2[%d]=%s\n",j,cArray2[j]);
//   		}
//	for (i = 0; i<commands; i++){
//		int kSayi=0;
//		int count2=0;
//		char * token2 = strtok(cArray[i]," ");
//		
//		while( token2 != NULL ) {
//			token2 = strtok(NULL, " ");
//	  		kSayi++;
//		}
//
//		printf( "cArray1[%d] kelime sayisi = %d\n", i,kSayi );
//		
//		char * token3 = strtok(cArray2[i]," ");
//		if(kSayi==3){
//			while( token3 != NULL ) {
//			token2 = strtok(NULL, " ");	
//			strcpy(tempWords1[count2], token3);
//			count2++;	
//		}
//		count2=0;
//		}
//	}
//	if(char[0]==tekrar){
//		printf("tekrar konmutu geldi")
//	}
	printf("----------SON-----------");
	return 0;
}
