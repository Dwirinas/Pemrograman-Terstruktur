/* ------------------------------------ *
*	Program lat5c.c	*
*	Dibuat oleh : Raras	*
*	Tanggal	: 06 November 2011	*
*	Topik	: fungsi rekursi	*
*	pada faktorial	*
* ------------------------------------ */
#include <stdio.h> 
#include <conio.h> 

int faktorial (int);

main()
{
int x;

puts("MENCARI FAKTORIAL DARI X!");
printf("Masukkan nilai x (bulat positif) : "); 
scanf("%d", &x);
printf("Faktorial dari %d = %d\n", x, faktorial (x)); 
getch();
}

int faktorial (int m)	/*definisi fungsi*/
{
 
if( m == 1 ) return(1);
else
return(m * faktorial(m-1));
}
