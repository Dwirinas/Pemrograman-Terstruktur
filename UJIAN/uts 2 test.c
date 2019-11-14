#include<stdio.h>
#include<conio.h>

main()
{
	int kode_sayur,satuan, total; 

	{
	printf("======================\n");
	printf("Macam Jualan Sayur\n");
	printf("======================\n");
	
	printf("\n1. Cabe 15rb/kg - Kategori 1");
	printf("\n2. Kacang Panjang 5rb/kg - Kategori 1");
	printf("\n3. Kol 12rb/kg - Kategori 1");
	printf("\n4. Tahu 10rb/bungkus - Kategori 2");
	printf("\n5. Tempe 11rb/bungkus - Kategori 2");
	printf("\n6. Bawang Merah 24rb/kg - Kategori 1");
	printf("\n7. Penyedap 2rb/sachet - Kategori 3");
	printf("\nPilih Sayur Apa saja yang akan dibeli (1-7) = \n");
	scanf("%d", kode_sayur);
	
	switch(kode_sayur)
	{
		case 1:
		printf("Berapa Kg Cabe yang akan anda beli = ", satuan);
		total= 15000 * satuan;
		break;
		case 2:
		printf("Berapa Kg Kacang Panjang yang akan anda beli = ", satuan);
		total= 5000 * satuan;
		break;
		case 3:
		printf("Berapa Kg Kol yang akan anda beli = ", satuan);
		total= 12000 * satuan;
		break;
		case 4:
		printf("Berapa Bungkus Tahu yang akan anda beli = ", satuan);
		total= 10000 * satuan;
		break;
		case 5:
		printf("Berapa Bungkus Tempe yang akan anda beli = ", satuan);
		total= 11000 * satuan;
		break;
		case 6:
		printf("Berapa Kg Bawang Merah yang akan anda beli = ", satuan);
		total= 24000 * satuan;
		break;
		case 7:
		printf("Berapa Sachet Penyedap yang akan anda beli = ", satuan);
		total= 5000 * satuan;
		break;
		default : 
		("Pilihan yang anda masukkan tidak tersedia\n");
		break;
	}
	
}
}
