#include<stdio.h>
#include<conio.h>

main()
{
	int kode_sayur, satuan, total;
	
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
	printf("\nPilih Sayur Apa saja yang akan dibeli (1-7) = ");
	scanf("%d", &kode_sayur);
	
	switch(kode_sayur)
	{
		case 1 :
			{
				printf("Berapa Kg Cabe yang akan anda beli = %d ", satuan);
			}
	}
}
