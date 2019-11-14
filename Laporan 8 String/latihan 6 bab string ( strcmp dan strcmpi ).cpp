#include <stdio.h>
#include <string.h>
main()
{
	char teks1[250],teks2[250];
	int hasilC,hasilCi;
	
	printf("perbedaan strcmp() dan strcmpi()\n");
	printf("masukkan kalimat 1\t =");
	gets(teks1);
	printf("masukkan kalimat 2\t =");
	gets(teks2);
	
	hasilC = strcmp(teks1,teks2);
	hasilCi = strcmpi(teks1,teks2);
	
	if (hasilC = 0)
	printf("\n menggunakan strcmp() menyatakan cocok");
	else
	printf("\n menggunakan strcmp() menyatakan tidak cocok");
	
	if (hasilCi = 0)
	printf("\n menggunakan strcmpi() menyatakan cocok");
	else
	printf("\n menggunakan strcmpi() menyatakan tidak cocok");
}
	
