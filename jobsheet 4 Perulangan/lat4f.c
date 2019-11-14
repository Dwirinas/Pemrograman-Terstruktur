/* ---------------------------------------------*
*	Program Lat4f.c	*
*	contoh pemakaian break dan continue *
*	Program menu sederhana	*
*	Operasi dua bilangan	*
*----------------------------------------------*/
#include <stdio.h> 
#include<conio.h>

main()
{
 
char x ='1',ket;
float bil1,bil2,hasil; int i;

while(1)
{
/*Cetak menu*/ 
for(i=1;i<20;++i) 
printf("\xDB");
printf("\n\n");

printf("\rOPERASI DUA BILANGAN");
printf("\n1.Penjumlahan"); 
printf("\n2.Selisih"); 
printf("\n3.Perkalian"); 
printf("\n4.Pembagian"); 
printf("\n5.Selesai");

printf("\n\n"); 
for(i=1;i<20;++i) 
printf("\xDB");

printf("\n\nPilihan Anda :"); 
x=getche();

if(x=='5') //selesai
break; 

/*Pilihan yang salah*/ 
if (x<'1' || x>'5')
{
printf("Anda salah memilih"); 
printf("\nTekan sembarang tombol"); 
getch();
continue; 
/*Kembali ke Menu*/
}

/*Pilihan yang  benar*/ 
printf("\nInputkan Bilangan pertama : "); 
scanf("%f",&bil1);
printf("\nInputkan Bilangan kedua : "); 
scanf("%f",&bil2);

switch(x)
{
	case '1': 
	hasil=bil1+bil2; 
	ket='+';
	break; 
	
	case '2':
	hasil=bil1-bil2;
 	ket='-'; 
	break;
	
	case '3': 
	hasil=bil1*bil2; 
	ket='*';
	break; 
	
	case '4':
	hasil=bil1/bil2; 
	ket='/';
	break;
}
/*Cetak hasil*/
printf("\n\n%f %c %f = %f",bil1,ket,bil2,hasil); 
printf("\n\nTekan sembarang tombol\n\n");

getch();

}
}
