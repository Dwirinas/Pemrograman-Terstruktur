/*-------------------------------------------*
* Program Lat 4b.c *
* Untuk menguji suatu nilai yang diinputkan *
* dari keyboard *
*--------------------------------------------*/
#include<stdio.h>
#include<conio.h>

main()
{
	int nilaiujian;
	//clsr();
	printf("Masukkan nilai ujian anda : ");
	scanf("%d", &nilaiujian);
	/* Proses seleksi nilai ujian*/
	if (nilaiujian>60)
	puts("Kamu Berhasil Lulus Ujian");
	else
	puts("Kamu Gagal, Tetap Semangat");
	getch();
}
