#include<stdio.h>
#include <conio.h>
main()
{
	char ket;
	int nasi_sayur = 5000, teh = 1500, tempe = 500, pisang = 2000, kerupuk = 1000, kode_makan, total=0, uang;
	printf("Selamat Datang");
	do
	{
		printf("\nMenu Warung Tegal");
		printf("\n1. Nasi Sayur\t= Rp. 5000");
		printf("\n2. Teh Manis\t= Rp. 1500");
		printf("\n3. Tempe\t= Rp. 500");
		printf("\n4. Pisang\t= Rp. 2000");
		printf("\n5. Kerupuk\t= Rp. 1000");
		printf("\nPilih menu apa saja yang anda pilih (1-5): ");
		scanf("%d", &kode_makan);
		switch(kode_makan)
		{
			case 1:
				total+=nasi_sayur;
				printf("\nAnda memilih Nasi Sayur");
				break;
			case 2:
				total+=teh;
				printf("\nAnda memilih Teh");
				break;
			case 3:
				total+=tempe;
				printf("\nAnda memilih Tempe");
				break;
			case 4 :
				total+=pisang;
				printf("\nAnda memilih Pisang");
				break;
			case 5:
				total+=kerupuk;
				printf("\nAnda memilih Kerupuk");
				break;
		}
		uang = 8500-total;
		printf("Sisa uang anda sekarang = %d", uang);
		if(uang>0)
		continue;
		else printf("\nUang anda sudah habis\n");
		break;
		getch();
	}
	while(total<=8500);
	if(uang<0)
	printf("Anda hutang %d\n", uang);
	getch();
}
