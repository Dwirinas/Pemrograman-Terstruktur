/*---------------------------------*
* Program lat4d.c *
* Program seleksi calon mantu *
*----------------------------------*/
#include <stdio.h>
#include <conio.h>
main()
{
	float gaji;
	int tinggi, usia;
	char kerja, agama, nama[20];
	
	//clsr();
	puts("\t\tData Pribadi Saya");
	puts("============================");
	printf("Masukkan nama anda : ");
	scanf("%s", &nama);
	
	printf("Apakah Anda Taat Beragama (T/B) : ");
	/*T bila taat dan B bila biasa saja*/
	agama =getche();
	printf("\nApakah Anda Sudah Bekerja (S/B): ");
	/*S bila sudah kerja dan B bila belum kerja */
	kerja=getche();
	printf("\nMasukkan usia dan tinggi anda : ");
	scanf("%d %d",&usia, &tinggi);
	//clsr();
	gaji = 0;
	/* Proses seleksi kondisi */
	if (((agama =='T') || (agama == 't')) && ((kerja == 'S') || (kerja == 's')))
	if ((usia >= 25) & (tinggi >= 160))
	{
		puts("Syarat menantu pertama sudah terpenuhi");
		puts("Eeee tapi jangan bangga dulu, masih ada syarat lain lhoooo");
		printf("\n\nSebutin berapa gaji mas %s dulu : ",nama);
		scanf("%f" , &gaji);
		//clsr();
	}
	if(gaji >= 1000000)
	{
		//clsr();
		printf("\nSelamat yaaa mas, Semua syarat sudah terpenuhi");
		printf("\nMas %s bisa jadi mantu guee sekarang",nama);
		printf("\a"); 
		printf("\a");
	}
	else
	printf("Mas %s maaf ya, tolong cari calon yang lain ajaaa deh,\n", nama);
	printf("\n\npress any key......");
	getche();
}
