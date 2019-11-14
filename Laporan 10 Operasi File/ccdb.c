#include<stdio.h> 
#include<stdlib.h>
 
main(){
	FILE *pf; 	/* Pointer-ke-FILE */ 
	char kar;
	/* Ciptakan file */
	if((pf = fopen("COBA.TXT","r+")) == NULL )
	{
		printf("file tak dapat diciptakan !\r\n"); 
		exit(0);
	}
	while((kar=fgetc(pf)) !=EOF) 	/* baca kar dari file */ 
	putchar(kar);
	
	while((kar=getchar()) !='\n') /* baca kar dr keyboard */ 
		fputc(kar,pf);
	fclose(pf);
	}

