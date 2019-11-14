/* -------------------------------------*
*	Program Lat4e.c	*
*	contoh pemakaian nested loop *
*	membuat tabel perkalian *
*--------------------------------------*/
#include <stdio.h> 
#include <conio.h> 

main()
{
	int baris, kolom, hasil_kali, maks = 0; //clrscr();
	printf("masukkan jumlah maksimal baris / kolomnya : "); 
	scanf("%d",&maks);
	/*kalang nested loop*/
	for(baris = 1;baris <=maks ; baris++)
	{
	for(kolom = 1;kolom <=maks ; kolom++)
	{
	hasil_kali = baris * kolom; printf("%2d \t", hasil_kali);
	}
	printf("\n"); /*pindah baris*/
	}
	getch();
}
