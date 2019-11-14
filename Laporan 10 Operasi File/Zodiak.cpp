#include <stdio.h>
#include <string.h>
main()
{
	 struct zodiak {
			char Nama[11];
			int tgl_awal,bln_awal,tgl_akhir,bln_akhir;
	 };
	 struct zodiak bintang;
	 strcpy  (bintang.Nama, "Sagitarius");
	 bintang.tgl_awal = 23;
	 bintang.bln_awal = 11;
	 bintang.tgl_akhir = 20;
	 bintang.bln_akhir = 12;
	 int tg_lhr,bl_lhr,th_lhr;
	 printf("Tanggal lahir anda (TGL-BLN-THN) : ");
	 scanf("%i-%i-%i",&tg_lhr,&bl_lhr,&th_lhr);
	 if((tg_lhr>=bintang.tgl_awal && bl_lhr==bintang.bln_awal) || (tg_lhr<=bintang.tgl_akhir && bl_lhr==bintang.bln_akhir))
	 {
		printf("Bintang anda adalah %s",bintang.Nama);
	 }else{
		printf("Bintang anda bukanlah %s",bintang.Nama);
	 }
}

