#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int count;
	int i;
	char string[]= "tekrar fatih 33 ";
	
	char s[1000],*p;  
    int words=0;
 
    printf("Enter  the string : ");
    gets(s);
 
    
    p=s;
 
 	while(*p)  
    {
    	if(*p++==32)
           words++;
	} 
  
    if(strlen(s)>0)
    words++;
    printf("no of words in string = %d\n",words);
    
	char * token = strtok(string, " ");
	while( token != NULL ) {
      printf( "%s\n", token ); //printing each token
      token = strtok(NULL, " ");
      
   }
	printf("%d",words);
	return 0;
}
