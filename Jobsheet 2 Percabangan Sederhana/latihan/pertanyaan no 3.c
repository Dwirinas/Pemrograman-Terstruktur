#include<stdio.h>
#include<conio.h>
main()


{
	int jumlahkertas;
	char statuslangganan;
	double harga, hargaperlembar;
	
	hargaperlembar = 60;
	
	printf("Apakah anda berlangganan (Y/T) : ");
	statuslangganan = getche();
	
	printf("\nMasukkan jumlah kertas yang ingin difotocopy : ");
	scanf("%d", &jumlahkertas);
	
	if ((statuslangganan == 'Y') || (statuslangganan == 'y'))
	hargaperlembar = 50;
	{
		if (jumlahkertas >= 100)
		hargaperlembar = 50;
	}
	harga = hargaperlembar * jumlahkertas;
	printf("Jadi total harga fotocopy adalah Rp. %.2lf,",harga);
	getche;
}
