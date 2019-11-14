/* ---------------------------------------*
*	Program Lat4b.c	*
*	contoh pemakaian do-while	*
*	Untuk membaca tombol Y atau T	*
*----------------------------------------*/
#include <stdio.h> 
#include <conio.h> 

main()
{
	int sudah_benar; 	
	char pilihan;
	printf("Pilihlah Y atau T : ");
	/*program hanya mau dilanjutkan kalau tombol Y, y, T atau t yang ditekan*/

	do
	{	
		pilihan = getch (); /*baca tombol*/
		sudah_benar = (pilihan=='Y') || (pilihan=='y') || (pilihan=='T') || (pilihan=='t');
	}
	while(!sudah_benar);

/*memberi keterangan tentang pilihan*/ 
switch (pilihan)
	{
	case 'Y' :
	case 'y' :
		puts("\nPilihan anda adalah Y"); 
		break;
	case 'T' :
	case 't' :
		puts("\nPilihan anda adalah T"); 
		break;
	}
	getch();
}

