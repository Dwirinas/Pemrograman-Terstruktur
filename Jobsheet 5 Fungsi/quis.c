#include<stdio.h>
#include<conio.h>

float bil1,bil2,hasil; 
int i,x;

int pertambahan (int,int);
int pengurangan (int,int);
int perkalian (int,int);
float pembagian (float, float);

main()
{

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
	scanf("%d", &x);
	if(x==5)

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

	{
	switch(x)
	{
		case '1': 
		pertambahan (bil1, bil2);
		printf("\n\n%.2f + %.2f = %2.f", bil1,bil2,hasil);
		printf("\n\n Tekan sembarang tombol\n\n"); 
		break; 
		
		case '2':
		pengurangan (bil1, bil2);
		printf("\n\n%.2f - %.2f = %2.f", bil1,bil2,hasil);
		printf("\n\n Tekan sembarang tombol\n\n"); 
		break; 
		
		case '3': 
		perkalian (bil1, bil2);
		printf("\n\n%.2f * %.2f = %2.f", bil1,bil2,hasil);
		printf("\n\n Tekan sembarang tombol\n\n"); 
		break; 
		
		case '4':
		pembagian (bil1, bil2);
		printf("\n\n%.2f / %.2f = %2.f", bil1,bil2,hasil);
		printf("\n\n Tekan sembarang tombol\n\n"); 
		break; 
	}



int pertambahan (int, int);
{
	hasil= bil1 +bil2;
	return hasil;
}
int perkalian (int, int);
{
	hasil = bil1 -bil2;
	return hasil;
}
int perkalian (int, int);
{
	hasil =bil1*bil2;
	return hasil;
}
float pembagian (float, float);
{
	hasil = bil1/bil2;
	return hasil;
}
}
}
}

