#include<stdio.h>
#include<conio.h>

main()
{
	int kode_bulan, tahun, kabisat, nama_bulan, jumlah_hari;
	
	printf("============================================\n");
	printf("KODE BULAN\n");
	printf("1. JANUARI\n");
	printf("2. FEBRUARI\n");
	printf("3. MARET\n");
	printf("4. APRIL\n");
	printf("5. MEI\n");
	printf("6. JUNI\n");
	printf("7. JULI\n");
	printf("8. AGUSTUS\n");
	printf("9. SEPTEMBER\n");
	printf("10. OKTOBER\n");
	printf("11. NOVEMBER\n");
	printf("12. DESEMBER\n");
	printf("============================================\n");
	
	printf("Masukkan Kode Bulan (1-12) : ");
	scanf("%d", &kode_bulan);
	printf("Masukkan Tahun : ");
	scanf("%d", &tahun);
	
switch(kode_bulan)
{
	case 1 :
		nama_bulan ="Januari";
		jumlah_hari =31;
		break;
	case 2 :
		nama_bulan ="Februari";
		kabisat = tahun %4;
		if(kabisat == 0)
		jumlah_hari =29;
		else 
		jumlah_hari = 28;
		break;
	case 3 :
		nama_bulan ="Maret";
		jumlah_hari = 31;
		break;
	case 4 :
		nama_bulan="April";
		jumlah_hari = 30;
		break;
	case 5 :
		nama_bulan="Mei";
		jumlah_hari = 31;
		break;
	case 6 :
		nama_bulan = "Juni";
		jumlah_hari = 30;
		break;
	case 7 :
		nama_bulan ="Juli";
		jumlah_hari = 31;
		break;
	case 8 :
		nama_bulan ="Agustus";
		jumlah_hari = 31;
		break;
	case 9 :
		nama_bulan ="September";
		jumlah_hari = 30;
		break;
	case 10 :
		nama_bulan ="Oktober";
		jumlah_hari = 31;
		break;
	case 11 :
		nama_bulan ="November";
		jumlah_hari = 30;
		break;
	case 12 :
		nama_bulan ="Desember";
		jumlah_hari = 31;
		break;
		
}
{
		printf("Jumlah Hari Bulan %s Tahun %d adalah %d Hari", nama_bulan, tahun, jumlah_hari);	
}
getch();
}
