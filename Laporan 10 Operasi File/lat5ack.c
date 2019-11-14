#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 

main()
{
FILE *pf;
char kar, jawab; 
int i, no_record;
long int offset_byte;

if((pf =fopen("latihan.txt", "r")) == NULL) 
{ 
	printf("File tidak dapat dibuka !\n"); 
	exit(1);
}

	do
	{
	printf("\n Nomor record dr data yg mau ditampilkan : "); 
	scanf("%d", &no_record);
	offset_byte = (no_record-1); 
	fseek(pf, offset_byte, SEEK_SET);
	kar=fgetc(pf);	/* baca kar dari file */
	putchar(kar);	/* tampilkan ke layar */ 
	printf("\nMau mencoba lagi (Y/T)? "); 
	jawab=getche();
	} while (jawab == 'y' || jawab == 'Y'); 
	printf("\n");
	fclose(pf); 
	}	/* Tutup file */

