#include<stdio.h> 
#include<stdlib.h> 

main()
	{
	FILE *f_struktur; 
	char jawaban;
	int sudah_benar;
	
	struct
	{
	char judul[20]; 
	char pengarang[20]; 
	int jumlah;
	} buku;	/* variabel buku bertipe struktur */
	
	if((f_struktur = fopen("DAFBUK.DAT","wb")) == NULL)
	{
	 
	printf("File tidak dapat diciptakan!\n"); 
	exit(1);
	}
	
	do
	{
		fflush(stdin); /* Hapus isi penampung keyboard */ 
		printf("Judul buku :");
		gets(buku.judul); 
		printf("Nama pengarang :"); 
		gets(buku.pengarang); 
		printf("Jumlah buku	:"); 
		scanf("%d", &buku.jumlah);
		fflush(stdin); /* Hapus isi penampung keyboard */
		/* Rekam sebuah data betipe struktur */ 
		fwrite(&buku,sizeof(buku), 1, f_struktur); 
		printf("\nMau merekam data lagi[Y/T]?"); 
		jawaban = getchar();
		printf("\n");
	}while(jawaban == 'Y'|| jawaban == 'y'); 
	fclose(f_struktur);	/* Tutup file */
	}

