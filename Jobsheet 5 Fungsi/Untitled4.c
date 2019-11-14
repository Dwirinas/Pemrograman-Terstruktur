/* ------------------------------------ *
*	Program Pr8_3.c	*
*	Dibuat oleh : Raras	*
*	Tanggal	: 06 November 2011	*
*	Topik	: fungsi rekursi	*
*	pada faktorial	*
* ------------------------------------ */
#include <stdio.h> #include <conio.h> int faktorial (int);

main()
{
int x;

puts("MENCARI FAKTORIAL DARI X!");
printf("Masukkan nilai x (bulat positip) : "); scanf("%d", &x);
printf("Faktorial dari %d = %d\n", x, faktorial (x)); getch();
}

int faktorial (int m)	/*definisi fungsi*/
{
 
if( m == 1 ) return(1);
else
5* (4*)
return(m * faktorial(m-1));

