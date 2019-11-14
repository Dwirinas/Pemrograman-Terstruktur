/* ---------------------------------------------*
*	Program Lat4c.c	*
*	contoh pemakaian do-while	*
*	menghitung jumlah kata dan karakter	*
*	dalam suatu kalimat	*
*----------------------------------------------*/
#include <stdio.h> 
#include <conio.h>

#define ENTER '\r' /*karakter CR*/ 
#define SPASI ' ' /*karakter spasi*/

main()
{
	char karakter; 
	int jumkar = 0;
	int jumspasi= 1; 
	
	puts("Ketikkan sebuah kalimat dan akhiri dengan ENTER"); 
	puts("Saya akan menghitung jumlah karakter dan kata pada kalimat tersebut\n");
	while( (karakter = getche () ) !=ENTER)
	{
	jumkar++;
	if(karakter == SPASI) jumspasi++;
	}

	printf("\nJumlah karakter : %d",jumkar); 
	printf("\nJumlah kata	  : %d",jumspasi); 
	printf("\nJumlah spasi	  : %d",jumspasi-1); 
	getch();
}

