#include<stdio.h>
#include<string.h>
#define MAKS 256

	char kar[MAKS];
	int jumkar=0, i;
	int karakter(int);
	
main(){

	printf("Masukkan Kata : \n");
	gets(kar);
	
	printf("Panjang string %s = %d 	karakter\n", kar,strlen(kar));
}
 int karakter(int jumkar)
	{
		for(i=0; kar[i]!='\0'; i++)
		{
			jumkar++;
	}
	return(jumkar);
} 
