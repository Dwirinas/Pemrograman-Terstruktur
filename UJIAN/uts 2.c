#include<stdio.h>
#include<conio.h>

int total1=0 , total2=0 , total3=0 ,total=0;
int tot_Cabe(int  ,int );
int tot_Kacang(int  ,int );
int tot_Kol(int  ,int );
int tot_Bawang(int  ,int );
int tot_Tahu(int  ,int );
int tot_Tempe(int  ,int );
int tot_Penyedap(int  ,int );
main()
{
	int kode_sayur, Cabe = 15000, Kacang = 5000, Kol = 12000, Tahu = 10000, Tempe = 11000, Bawang = 24000, Penyedap = 2000;
	int satuan, sudah_benar; 
	char pesan;
	extern int total1,total2,total3,total;
	int cek1=0,cek2=0,cek3=0,cek4=0,cek5=0,cek6=0,cek7=0;
	
	do
	{
	printf("\n======================\n");
	printf("Menu Jualan Sayur\n");
	printf("======================\n");
	
	printf("\n==Kategori 1==");
	printf("\n1. Cabe 15rb/kg");
	printf("\n2. Kacang Panjang 5rb/kg");
	printf("\n3. Kol 12rb/kg");
	printf("\n4. Bawang Merah 24rb/kg");
	printf("\n==Kategori 2==");
	printf("\n5. Tahu 10rb/bungkus");
	printf("\n6. Tempe 11rb/bungkus");
	printf("\n==Kategori 3==");
	printf("\n7. Penyedap 2rb/sachet");
	
	printf("\nPilih Sayur Apa saja yang akan dibeli (1-7) = ");
	scanf("%d", &kode_sayur);
	
	switch(kode_sayur)
	{
		case 1:
		if(cek1==1)
		continue;
		printf("Berapa Kg Cabe yang akan anda beli = ");
		scanf("%d", &satuan);
		tot_Cabe(Cabe, satuan);
		cek1++;
		break;
		case 2:
		if(cek2==2)
		continue;
		printf("Berapa Kg Kacang Panjang yang akan anda beli = ");
		scanf("%d", &satuan);
		tot_Kacang(Kacang,satuan);
		cek2++;
		break;
		case 3:
		if(cek3==3)
		continue;
		printf("Berapa Kg Kol yang akan anda beli = ");
		scanf("%d", &satuan);
		tot_Kol(Kol,satuan);
		cek3++;
		break;
		case 4:
		if(cek4==4)
		continue;
		printf("Berapa Kg Bawang Merah yang akan anda beli = ");
		scanf("%d", &satuan);
		tot_Bawang(Bawang,satuan);
		cek4++;
		break;
		case 5:
		if(cek5==5)
		continue;
		printf("Berapa Bungkus Tahu yang akan anda beli = ");
		scanf("%d", &satuan);
		tot_Tahu(Tahu,satuan);
		cek5++;
		break;
		case 6:
		if(cek6==6)
		continue;
		printf("Berapa Bungkus Tempe yang akan anda beli = ");
		scanf("%d", &satuan);
		tot_Tempe (Tempe,satuan);
		cek6++;
		break;
		case 7:
		if(cek7==7)
		continue;
		printf("Berapa Sachet Penyedap yang akan anda beli = ");
		scanf("%d", &satuan);
		tot_Penyedap (Penyedap,satuan);
		cek7++;
		break;
		default : 
		("Pilihan yang anda masukkan tidak tersedia\n");
		break;
	}
		printf("Apakah Anda Ingin Membeli yang Lain (Y/T) = ");
		pesan=getche();
		if((pesan=='Y' || pesan=='y'))
		printf("\nPesanan telah dimasukkan keranjang");
		continue;
	}
	while((pesan == 'Y')||(pesan == 'y'));

	total=total1+total2+total3;
	
	printf("\nTotal Belanja Anda pada Kategori 1 Rp.%d",total1);
	printf("\nTotal Belanja Anda pada Kategori 2 Rp.%d",total2);
	printf("\nTotal Belanja Anda pada Kategori 3 Rp.%d",total3);
	printf("\nMaka Total Belanja Anda Rp.%d",total);
	printf("\n----------------------------------\n");
}

int tot_Cabe(int x  ,int y)
{
	extern int total1,total2,total3,total;
	total1+=x*y;
	return(total1);
}
int tot_Kacang(int x ,int y)
{
	extern int total1,total2,total3,total;
	total1+=x*y;
	return(total1);
}
int tot_Kol(int x,int y)
{
	extern int total1,total2,total3,total;
	total1+=x*y;
	return(total1);
}
int tot_Bawang(int x,int y)
{
	extern int total1,total2,total3,total;
	total1+=x*y;
	return(total1);
}
int tot_Tahu(int x,int y)
{
	extern int total1,total2,total3,total;
	total2+=x*y;
	return(total2);
}
int tot_Tempe(int x,int y)
{
	extern int total1,total2,total3,total;
	total2+=x*y;
	return(total2);
}
int tot_Penyedap(int x,int y)
{
	extern int total1,total2,total3,total;
	total3+=x*y;
	return(total3);
}
