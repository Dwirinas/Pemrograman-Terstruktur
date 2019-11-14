#include<stdio.h> 
#include<conio.h> 

main(){
	FILE *pf;	 /* Pointer-ke-FILE */ 
	char kar;
	
	/* Ciptakan file */ 
	if((pf=fopen("COBA.TXT","w")) == NULL)
	
	{
	printf("file tak dapat diciptakan!\r\n"); 
	exit(1);
	}
	
	/*Masukkan karakter per karakter sampai ditekan ENTER*/ 
	while((kar=getchar())!='\n')
		fputc(kar, pf);
		fclose(pf); /* tutup file */
}

