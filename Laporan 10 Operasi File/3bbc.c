#include<stdio.h> 
#include<stdlib.h> 

main(){
	FILE *f_struktur; 
	int i = 1;
	
	struct
	{
	char judul[20]; 
	char pengarang[20]; 
	int jumlah;
	} buku;	/* variabel buku bertipe struktur */
	
	if((f_struktur = fopen("DAFBUK.DAT","rb")) != NULL)
	{
	printf("%2s. %-30s %-30s %s\n\n", "No", "Judul Buku", "Nama Pengarang", "Jumlah");
	/* diulang selama masih ada record yg terbaca dlm file*/

	while(fread(&buku, sizeof(buku), 1, f_struktur) == 1) 
	printf("%2d. %-30s	%-30s %4d\n",	i++,buku.judul,buku.pengarang, buku.jumlah); 
	printf("\n");
	fclose(f_struktur);	/* Tutup file */
	}
}
