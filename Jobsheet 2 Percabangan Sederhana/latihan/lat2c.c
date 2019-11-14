/*----------------------------------------------*
* Program menguji suatu nilai yang diinginkan*
*dari keyboard*
*----------------------------------------------*/
#include<stdio.h>
#include<conio.h>
main()
{
	int bilangan;
	//clsr();
	printf("Masukkan Sebuah Bilangan Bulat : ");
	scanf("%d", &bilangan);
	
	/* Proses Seleksi Kondisi*/
	if (bilangan %2)
	{
		printf("Bilangan %d tidak habis dibagi 2 \n", bilangan);
		puts("Karena itu termasuk sebagai bilangan Ganjil");
	}
	else
	{
		printf("Bilangan %d habis dibagi 2 \n", bilangan);
		puts("Karena itu termasuk sebagai bilangan Genap");
	}
}
