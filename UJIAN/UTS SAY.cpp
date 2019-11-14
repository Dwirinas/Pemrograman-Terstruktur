#include <stdio.h>
#include <conio.h>
main()
{
	char lagi;
	int kode_beli;
	float satuan, Cabe = 15000, kacang_panjang = 5000, kol = 12000, tahu = 10000, tempe = 11000, bawang_merah = 24000, penyedap = 2000,
	total=0,total1,total2,total3,total4,total5,total6,total7,totalsatu=0,totaldua=0;
	float kilo,bungkus,sachet;
		
		printf("\nBeli Sayur :");
		printf("\n1. Cabe\t");
		printf("\n2. Kacang Panjang\t");
		printf("\n3. kol\t");
		printf("\n4. tahu\t");
		printf("\n5. tempe\t");
		printf("\n6. bawang merah\t");
		printf("\n7. penyedap\t");
		
		do
		{
			printf("\nPilih sayur apa saja yang anda pilih (1-7) : ");
		scanf("%d", &kode_beli);	
		switch(kode_beli)
		{	
			case 1:
				printf("\nHarga %g per kg",Cabe);
				printf("\nsatuan:");
				scanf("%f",&kilo);
				total1=kilo*Cabe;
				break;
			case 2:
				printf("\nHarga %g per kg",kacang_panjang);
				printf("\nsatuan:");
				scanf("%f",&kilo);
				total2=kilo*kacang_panjang;
				break;
			case 3:
				printf("\nHarga %g per kg",kol);
				printf("\nsatuan:");
				scanf("%f",&kilo);
				total3=kilo*kol;
				break;
			case 4:
				printf("\nHarga %g per bungkus",tahu);
				printf("\nsatuan:");
				scanf("%f",&bungkus);
				total4=bungkus*tahu;
				break;
			case 5:
				printf("\nHarga %g per bungkus",tempe);
				printf("\nsatuan:");
				scanf("%f",&bungkus);
				total5=bungkus*tempe;
				break;
			case 6:
				printf("\nHarga %g per kg",bawang_merah);
				printf("\nsatuan:");
				scanf("%f",&kilo);
				total6=kilo*bawang_merah;
				break;
			case 7:
				printf("\nHarga %g per sachet",penyedap);
				printf("\nsatuan:");
				scanf("%f",&sachet);
				total7=sachet*penyedap;
				break;
		}
		printf("\nPesan lagi?(Y/T)");
		lagi=getche();
		if((lagi=='Y' || lagi=='y'))
		continue;
		else
		printf("\nPesanan telah dimasukkan keranjang");
		
		totalsatu=total1+total2+total3+total6;
		totaldua=total4+total5;
		total=totalsatu+totaldua+total7;
		printf("\nTotal harga sebesar Rp %g",total);
		
		return(0);
		}
		
		while ((kode_beli==((1,2,3,4,5,6,7)>1)));
		printf("\nBarang sudah diinputkan,mohon dicoba lagi");
	
	
	
}
