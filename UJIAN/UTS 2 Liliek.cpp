#include<stdio.h>
#include<conio.h>
int i,cabe=15,kp=5,n,kol=12,tahu=10,tempe=11,bm=24,sasa=2,menu,total;
main()
{
	int c,x;
	printf (" ======Selamat Datang======");
	for(i=1;i<=100;i++)
{
	char nambah;
	printf("\n\n\xDB\xDB\xDB\t\t\t\xDB\xDB\xDB\xDB");
	printf("\n\n");
	puts("Menu tersedia:");
	printf("1. Cabe \t\t@15rb\n2. Kacang Panjang \t@5rb\n3. Kol \t\t\t@12rb\n");
	printf("4. Tahu \t\t@10rb\n5. Tempe \t\t@11rb\n6. Bawang merah \t@24rb\n7. Penyedap \t\t@2rb\n");
	puts("Pilih belanjaan yang ingin dibeli (1-7)");
	scanf("%d",&menu);
	
	switch (menu)
	{
	case 1:	//cabe//
	printf("Masukkan jumlah @");
	scanf("%d",&c);
	cabe=15*c;
	total+=cabe;
	printf("total harga %drb\n", total);
	break;
	
	case 2://kacang panjang//
	puts("Masukkan jumlah @");
	scanf("%d",&c);
	kp=5*c;
	total+=kp;
	printf("total harga %d\n", total);
	break;
	
	case 3: //KOL//
	printf("Masukkan jumlah @");
	scanf("%d",&c);
	kol=12*c;
	total+=kol;
	printf("total harga %drb\n", total);
	break;
	
	case 4://tahu//
	printf("Masukkan jumlah @");
	scanf("%d",&c);
	tahu=10*c;
	total+=tahu;
	printf("total harga %drb\n", total);
	break;
	
	case 5://tempe
	printf("Masukkan jumlah @");
	scanf("%d",&c);
	tempe=11*c;
	total+=tempe;
	printf("total harga %drb\n", total);
	break;
	
	case 6://bawang
	printf("Masukkan jumlah @");
	scanf("%d",&c);
	bm=24*c;
	total+=bm;
	printf("total harga %drb\n", total);
	break;
	
	case 7://sasa
	printf("Masukkan jumlah @");
	scanf("%d",&c);
	sasa=2*c;
	total+=sasa;
	printf("total harga %drb\n", total);
	break;
	
	default:
	printf("Anda salah memasukan barang belanjaan\n");
	break;
	};
	printf("Apakah anda ingin menambahkan barang belanjaan?(Y/T)\n");
	nambah=getche();
	if (nambah=='T'||nambah=='t')
	{printf("\n\nTotal harga belanjaan keseluruhan anda adalah %d rb",total);
	 printf("\n\n\xDB Terima Kasih \xDB");
	 return 0;
	}
	
}
}
