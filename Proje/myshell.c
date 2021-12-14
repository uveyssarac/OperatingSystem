#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

while(1){
	int count=0, count1=0;					// Gerekli tanimlamalar ve kullanilacak int ve char'lar
	int i,j,k;
	char string[1000],string1[1000],string2[1000],*p;  
    	int wordsNumber=0;
	int commands=0;
    	printf("myshell>>");
    	fgets(string, sizeof(string), stdin);
    	strcpy(string1, string);
    	strcpy(string2, string);
    	char cizgi= '|';
    

	for (k = 0; string1[k] != '\0'; k++) {	// Komut Sayisini bulma = commands
        if (cizgi == string1[k])
            commands++;
    }
   	commands++;
   	char cArray[commands][50];             		//Komut Sayisi kadar Array olusturma = cArray
 
 	
								//Komutlarin her birini cArray'in birer indisine alma
	char * token1 = strtok(string1, "|");  		//cArray[0]=aaa aaa aaa	
	while( token1 != NULL ) {				//cArray[1]=bbb bbb bbb bbb
      		strcpy(cArray[count1], token1);		//cArray[2]=ccc ccc ccc
      		token1 = strtok(NULL, "|");
	  	count1++;
		}
	 
	char cArray1[commands][50];					//strok komutu ile bozulan arraylarý kopyalamak için


   	for( i =0 ; i < commands; i++){				//cArray kopyalama
   		strcpy(cArray1[i], cArray[i]);
   }



	
	char tempWords[4][20];				// komutlarin kelimeleri için array
	int pid;
	char * token2 = strtok(cArray1[i]," ");
	for (i = 0; i<commands; i++){				//1-Komut sayisi kadar döner
		
		token2 = strtok(cArray1[i]," ");		//cArray1[] patates !!!!!!!!
		while( token2 != NULL ) {			//2-komutlarýn kelimelerini baþka bir array'e ekler
			strcpy(tempWords[wordsNumber], token2);
			token2 = strtok(NULL, " ");
	  		wordsNumber++;
		}

   	
   		if(wordsNumber==3 && strcmp(tempWords[0],"tekrar")==0){//Kelime sayisi 3 ve ilk kelimesi tekrar olan komut
   			char *newargv[3];				//Tekrar dosyasina parametre olarak gondermek icin array
   			newargv[0]=tempWords[1];
   			newargv[1]=tempWords[2];
   			newargv[2]=NULL;

   			pid=fork();					
   			
   			if(pid==0){					//child process'in bu isleri gerceklestirmesi icin 
   			
   			execve("tekrar",newargv,NULL);
   			perror("Hata:");
   			}else{
   			
   			}	
		}
		else if(wordsNumber==4 && strcmp(tempWords[0],"islem")==0){//Kelime sayisi 4 ve ilk kelimesi islem olan komut
			char *newargv[4];
   			newargv[0]=tempWords[1];			//Tekrar dosyasina parametre olarak gondermek icin array
   			newargv[1]=tempWords[2];
   			newargv[2]=tempWords[3];
   			newargv[3]=NULL;
   			
   			pid=fork();
   			if(pid==0){					//child process'in bu isleri gerceklestirmesi icin 
   			
   			execve("islem",newargv,NULL);
   			perror("Hata:");
   			}else{
   			wait();					//parent process child process' i beklemesi icin
   			}   			
   		
		}else if(wordsNumber==1 && strcmp(tempWords[0],"exit\n")==0){	//exit icin benzer kodlar
			
			exit(0);
			
		}else if(wordsNumber==1 && strcmp(tempWords[0],"clear\n")==0){	//clear icin
			printf("\e[1;1H\e[2J");
		}else if(wordsNumber==1 && strcmp(tempWords[0],"ls\n")==0){		//ls icin
			char *newargv[2];
   			newargv[0]=tempWords[1];
   			newargv[1]=NULL;
   			pid=fork();
   			
   			if(pid==0){
   			execve("/bin/ls",newargv,NULL);
   			perror("Hata:");
   			}else{
   			wait();
   			} 
		}
		else if(wordsNumber==2 && strcmp(tempWords[0],"cat")==0){	//cat icin
			char *newargv[3];
   			newargv[0]="cat";
   			newargv[1]=tempWords[1];
   			newargv[2]=NULL;
   			pid=fork();
   			
   			if(pid==0){
   			execve("/bin/cat",newargv,NULL);
   			perror("Hata:");
   			}else{
   			wait();
   			} 
		}else if(wordsNumber==1 && strcmp(tempWords[0],"bash\n")==0){// bash icin
			
   			pid=fork();
   			
   			if(pid==0){
   			execve("/bin/bash",NULL,NULL);
   			perror("Hata:");
   			}else{
   			wait();
   			} 
		}
		else{						// gelen komutlarin disinda hatali bir komut gelirse buraya girer
			printf("Hatali komut\n");
		}
		wordsNumber=0;

	}
	}
	
	return 0;
}
