#include<stdio.h> 
#include<stdlib.h> 
#define PJG 65 

main()
{
	int kode;
	char namafilelama[PJG], namafilebaru[PJG];
	
	printf("Nama file yang akan diganti : "); 
	gets(namafilelama);
	printf("Nama file yang baru : "); 
	gets(namafilebaru);
	
	kode = rename(namafilelama, namafilebaru); 
	if(kode == 0)
	printf("Nama file sudah diganti\n"); 
	else
	printf("Gagal dalam mengganti nama\n");
 
}

