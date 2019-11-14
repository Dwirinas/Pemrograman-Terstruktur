#include <stdio.h>
#include <conio.h>

int alas,tinggi,luas;
main()
{
	printf("Program Hitung Luas Segitiga\n");
	printf("==============================\n");
	printf("\n");
	printf("Masukkan Alas Segitiga: ");
	scanf("%d", &alas);
	printf("Masukkan Tinggi Segitiga : ");
	scanf("%d", &tinggi);
	
	luas = 0.5 * alas * tinggi;
	
	printf("\n");
	printf("Jadi Luas Segitiga Dengan :\n");
	printf("Alas = %d cm\n", alas );
	printf("Tinggi = %d cm\n", tinggi );
	printf("Adalah = %d cm\n", luas );
	return 0;
	getch();
}

