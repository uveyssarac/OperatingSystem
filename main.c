#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int count;
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
	printf("%s\n",s1);
	for (k = 0; s1[k] != '\0'; k++) {
        if (cizgi == s1[k])
            commands++;
    }
   
//  printf("%d", commands);

	return 0;
}
