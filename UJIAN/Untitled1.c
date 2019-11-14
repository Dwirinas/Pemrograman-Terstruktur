#include <stdio.h>
#include <conio.h>

main(){
	int bil,jumlah=0,sudah_benar;
	char konfir;
	float rata,i=0;
	printf("==================================================\n");
	printf("\tMenghitung Jumlah dan Rata-Rata\n");
	printf("==================================================\n");
	
	do{
		printf("\nMasukkan Sebuah Bilangan : ");
		scanf("%d",&bil);
		jumlah+=bil;
		i++;
		printf("Apakah anda ingin memasukkan bilangan lagi ? (Y/T) ");
		do
 		{
		konfir = getch ();
 		sudah_benar = (konfir=='Y') || (konfir=='y') ||
        				(konfir=='T') || (konfir=='t');
		 }
 		while(!sudah_benar);	
	}

	while((konfir == 'Y')||(konfir == 'y'));
	
	rata=jumlah/i;
	printf("\n\n---------------------------------------------------\n");
	printf("\nJumlah perhitungan dari semua bilangan adalah %d",jumlah);
	printf("\nMaka Rata-Ratanya adalah %.2lf",rata);
	printf("\n\n---------------------------------------------------\n");	
}
