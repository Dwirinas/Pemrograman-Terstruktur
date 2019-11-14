#include<stdio.h> 
#include<stdlib.h> 

main(){
	FILE *pf; 
	char kar;
	
	if((pf=fopen("COBA.TXT","r")) == NULL) /* buka file */
	{
		printf("file tak dapat dibuka !\r\n"); 
		exit(1);
	}
	/*Baca karakter per karakter sampai ditemui EOF*/ 
	while((kar=fgetc(pf)) !=EOF)
	putchar(kar); 
	printf("\n");
	fclose(pf);	/* tutup file*/
	}

