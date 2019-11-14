/* -------------------------------------*
*	Program lat5b.c	*
*	Dibuat oleh : Raras	*
*	Tanggal	: 06 November 2011	*
*	Topik	: pemanggilan	*
*	dg referensi	*
* -------------------------------------*/
#include <stdio.h> 
#include <conio.h>
void tukar (int *px, int *py); 
main()
{
int a, b; 

a = 88;
b = 77;

printf("nilai sebelum pemanggilan fungsi\n"); 
printf("a = %d b = %d\n\n", a, b);

tukar(&a, &b); 
/*parameter : alamat a dan alamat b*/

printf("nilai sesudah pemanggilan fungsi\n"); 
printf("a = %d b = %d\n\n", a, b);
getch();
 
}

void tukar (int *px, int *py)
{
int z; 
/*variabel sementara*/ 
z = *px;
*px = *py;
*py = z;
printf("Nilai di akhir fungsi tukar () \n"); 
printf("*px = %d *py = %d\n\n", *px, *py);
}

