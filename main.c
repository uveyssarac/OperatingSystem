#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int count=0, count1=0;
	int i,j,k;
	char string[1000],string1[1000],string2[1000],*p;  
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
	for (k = 0; string1[k] != '\0'; k++) {	// Komut Say�s�n� bulma = commands
        if (cizgi == string1[k])
            commands++;
    }
   	commands++;
   	char cArray[commands][50];             		//Komut Say�s� kadar Array olu�turma = cArray
  	printf("Komut Sayisi=%d\n", commands);
 	
	if(commands > 1){							//Komutlar�n her birini cArray'in birer indisine alma
		char * token1 = strtok(string1, "|");  	//cArray[0]=aaa aaa aaa	
		while( token1 != NULL ) {				//cArray[1]=bbb bbb bbb bbb
      		strcpy(cArray[count1], token1);		//cArray[2]=ccc ccc ccc
      		token1 = strtok(NULL, "|");
	  		count1++;
		}
	 
	}
	printf("%s\n",string);
	printf("%s\n",string1);
	printf("%s\n",string2);
	
	char cArray1[commands][50];					//strok komutu ile bozulan arraylar� kopyalamak i�in
	char cArray2[commands][50];
	for( j =0 ; j < commands; j++){				//cArray yazd�rma
   		printf("cArray[%d]=%s\n",j,cArray[j]);	
   }
   	for( i =0 ; i < commands; i++){				//cArray kopyalama
   		strcpy(cArray1[i], cArray[i]);
   }
   	for( j =0 ; j < commands; j++){				//cArray1 yazd�rma
   		printf("cArray1[%d]=%s\n",j,cArray1[j]);
   }
    for( i =0 ; i < commands; i++){				//cArray kopyalama
   		strcpy(cArray2[i], cArray[i]);
   }
   	for( j =0 ; j < commands; j++){				//cArray2 yazd�rma
   		printf("cArray2[%d]=%s\n",j,cArray2[j]);
   }

	char tempWords[4][10];						// komutlar�n kelimeleri i�in array
	
	char * token2 = strtok(cArray1[i]," ");
	for (i = 0; i<commands; i++){				//1-Komut say�s� kadar d�ner
		wordsNumber=0;
		token2 = strtok(cArray1[i]," ");		//cArray1[] patates !!!!!!!!
		while( token2 != NULL ) {					//2-komutlar�n kelimelerini ba�ka bir array'e ekler
			strcpy(tempWords[wordsNumber], token2);
			token2 = strtok(NULL, " ");
	  		wordsNumber++;
		}
		printf( "cArray1[%d] kelime sayisi = %d\n", i,wordsNumber );	//kelime say�s� yazd�rma
	   	for( j =0 ; j < 4; j++){										//tempWords yazd�rma
   		printf("tempWords[%d]=%s\n",j,tempWords[j]);
   		}
   		if(wordsNumber==3 && strcmp(tempWords[0],"tekrar")==0){
   			printf("tekrar komutu geldi\n");	
		}else if(wordsNumber==4 && strcmp(tempWords[0],"islem")==0){
			printf("islem komutu geldi\n");
		}else{
			printf("Hatali komut\n");
		}
//		char * token3 = strtok(cArray2[i]," ");
//		if(kSayi==3){
//			while( token3 != NULL ) {
//			token2 = strtok(NULL, " ");	
//			strcpy(tempWords1[count2], token3);
//			count2++;	
//		}
//		count2=0;
//		}
	}
	printf("----------SON-----------");
	return 0;
}
