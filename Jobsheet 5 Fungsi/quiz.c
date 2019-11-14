#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int jumlah(int, int);
int kurang(int, int);
int kali(int, int);
float bagi(float, float);

main()
{
	int bil1, bil2, hasil;
	float bil_a, bil_b, hasil_2;
	int i, kode;
	
	while(1)
	{
		for(i=1;i<20;++i) 
		printf("\xDB");
		printf("\n\nOPERASI DUA BILANGAN");
		printf("\n1.Penjumlahan");
		printf("\n2.Pengurangan");
		printf("\n3.Perkalian");
		printf("\n4.Pembagian");
		printf("\n5.Selesai");
		printf("\n\n");
		printf("Masukkan pilihan anda : ");
		scanf("%d", &kode);
		printf("\n");
		if(kode==5)
		exit(0);
		if(kode < 1 || kode > 5)
		{
			printf("Anda salah memilih");
			printf("\nTekan sembarang tombol");
			getch();
			continue;
		}
		if(kode==1)
			printf("Hasil penjumlahan = %d \n", jumlah(bil1, bil2));
		if(kode==2)
			printf("Hasil pengurangan = %d \n", kurang(bil1, bil2));
		if(kode==3)
			printf("Hasil perkalian = %d \n", kali(bil1, bil2));
		if(kode==4)
			printf("Hasil pembagian = %g \n", bagi(bil_a, bil_b));
	}
}

int jumlah(int bil1, int bil2)
{
	//int hasil;
	printf("Masukkan bilangan pertama : ");
	scanf("%d", &bil1);
	printf("Masukkan bilangan kedua : ");
	scanf("%d", &bil2);
	return bil1+bil2;
	//printf("Hasil penjumlahan = %d", hasil);
}


int kurang(int bil1, int bil2)
{

	printf("Masukkan bilangan pertama : ");
	scanf("%d", &bil1);
	printf("Masukkan bilangan kedua : ");
	scanf("%d", &bil2);
	return bil1-bil2;
	//printf("Hasil pengurangan = %d", hasil);
}

int kali(int bil1, int bil2)
{

	printf("Masukkan bilangan pertama : ");
	scanf("%d", &bil1);
	printf("Masukkan bilangan kedua : ");
	scanf("%d", &bil2);
	return bil1*bil2;
	//printf("Hasil perkalian = %d", hasil);
}

float bagi(float bil_a, float bil_b)
{
	
	printf("Masukkan bilangan pertama : ");
	scanf("%f", &bil_a);
	printf("Masukkan bilangan kedua : ");
	scanf("%f", &bil_b);
	return bil_a/bil_b;
	//printf("Hasil pembagian = %g", hasil_2);
}
