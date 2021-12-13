#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

char *newargv[4];
   	newargv[0]=argv[0];
   	newargv[1]=argv[1];
   	newargv[2]=argv[2];
   	newargv[3]=NULL;
 	int pid;
   	if(strcmp(argv[0],"cikar")==0){
   		pid=fork();
   		if(pid==0){
   			
   			execve("cikar",newargv,NULL);
   			perror("Hata:");
 		}else{
   		wait();
  		}  
   	
   	}else if(strcmp(argv[0],"topla")==0){
 		pid=fork();
   		if(pid==0){
   	
   			execve("topla",newargv,NULL);
   			perror("Hata:");
   		}else{
   			wait();
   		}    	
   	}else{
   	printf("Hatali komut");
   	}

	return 0;
}
