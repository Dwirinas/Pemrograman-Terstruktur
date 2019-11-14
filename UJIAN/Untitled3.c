#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
double total1=0 , total2=0 , total3=0 ,total=0;
double f_cabe(double  , double );
double f_kacang(double  , double );
double f_kol(double  , double );
double f_tahu(double  , double );
double f_tempe(double  , double );
double f_bawang(double  , double );
double f_penyedap(double  , double );
main(){
	extern double total1,total2,total3,total;
	double cabe=15000 , kacang=5000 , kol=12000 , tahu=10000 , tempe=11000 , bawang=24000 , penyedap=2000 ;
	int kode,banyak,sudah_benar;
	int cek1=0,cek2=0,cek3=0,cek4=0,cek5=0,cek6=0,cek7=0;
	char pesan;
	
	do{
	system("cls");
	printf("\nDAFTAR MENU :\n");
	printf("1.CABE\n");
	printf("2.KACANG PANJANG\n");
	printf("3.KOL\n");
	printf("4.TAHU\n");
	printf("5.TEMPE\n");
	printf("6.BAWANG MERAH\n");
	printf("7.PENYEDAP\n");	
	printf("----------------------------------\n");
	printf("Masukkan Pilihan : ");
	scanf("%d",&kode);
	
	switch(kode){
		case 1:
			if(cek1==1)
			continue;
			printf("Harga Cabe Rp.15000 / Kg");
			printf("\nBerapa banyak yang anda pesan : ");
			scanf("%d",&banyak);
			f_cabe(cabe,banyak);
			cek1++;
			break;
		case 2:

			if(cek2==1)
			continue;
			printf("Harga Kacang Panjang Rp.5000 / Kg");
			printf("\nBerapa banyak yang anda pesan : ");
			scanf("%d",&banyak);
			f_kacang(kacang,banyak);
			cek2++;
			break;
		case 3:
			if(cek3==1)
			continue;
			printf("Harga Kol Rp.12000 / Kg");
			printf("\nBerapa banyak yang anda pesan : ");
			scanf("%d",&banyak);
			f_kol(kol,banyak);
			cek3++;
			break;
		case 4:
			if(cek4==1)
			continue;
			printf("Harga Tahu Rp.10000 / Kg");
			printf("\nBerapa banyak yang anda pesan : ");
			scanf("%d",&banyak);
			f_tahu(tahu,banyak);
			cek4++;
			break;
		case 5:
			if(cek5==1)
			continue;
			printf("Harga Tempe Rp.11000 / Kg");
			printf("\nBerapa banyak yang anda pesan : ");
			scanf("%d",&banyak);
			f_tempe(tempe,banyak);
			cek5++;
			break;		
		case 6:
			if(cek6==1)
			continue;
			printf("Harga Bawang Merah Rp.24000 / Kg");
			printf("\nBerapa banyak yang anda pesan : ");
			scanf("%d",&banyak);
			f_bawang(bawang,banyak);
			cek6++;
			break;
		case 7:
			if(cek7==1)
			continue;
			printf("Harga Penyedap Rp.2000 / Kg");
			printf("\nBerapa banyak yang anda pesan : ");
			scanf("%d",&banyak);
			f_penyedap(penyedap,banyak);
			cek7++;
			break;	
	}
	
	printf("----------------------------------\n");
	printf("Apakah anda ingin pesan lagi (Y/T): ");
	do
 		{
		pesan = getch ();
 		sudah_benar = (pesan=='Y') || (pesan=='y') ||
        				(pesan=='T') || (pesan=='t');
		 }
 	while(!sudah_benar);
	printf("\n----------------------------------\n");


}
while((pesan == 'Y')||(pesan == 'y'));

	total=total1+total2+total3;
	
	printf("\nTotal Belanja Anda pada Kategori 1 Rp.%.2lf",total1);
	printf("\nTotal Belanja Anda pada Kategori 2 Rp.%.2lf",total2);
	printf("\nTotal Belanja Anda pada Kategori 3 Rp.%.2lf",total3);
	printf("\nMaka Total Belanja Anda Rp.%.2lf",total);
	printf("\n----------------------------------\n");
}

double f_cabe(double x , double y)
{
	extern double total1,total2,total3,total;
	total1+=x*y;
	return(total1);
}
double f_kacang(double x , double y)
{
	extern double total1,total2,total3,total;
	total1+=x*y;
	return(total1);
}
double f_kol(double x , double y)
{
	extern double total1,total2,total3,total;
	total1+=x*y;
	return(total1);
}
double f_tahu(double x , double y)
{
	extern double total1,total2,total3,total;
	total2+=x*y;
	return(total2);
}
double f_tempe(double x , double y)
{
	extern double total1,total2,total3,total;
	total2+=x*y;
	return(total2);
}
double f_bawang(double x , double y)
{
	extern double total1,total2,total3,total;
	total2+=x*y;
	return(total2);
}
double f_penyedap(double x , double y)
{
	extern double total1,total2,total3,total;
	total3+=x*y;
	return(total3);
}





