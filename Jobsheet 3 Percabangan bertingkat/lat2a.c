/*----------------------------------------*
* Program Lat4a.c*
* Untuk menentukan besaran korting yang*
* diterima seorang pembeli*
*-----------------------------------------*/
#include<stdio.h>
#include<conio.h>
main()
{

double total_pembelian, korting, jml_byr;
/*deklarasi variabel bertipe bilangan double*/
//clsr()

printf("Total Pembelian : Rp");
Scanf("lf", &total_pembelian);

/*Proses Seleksi Kondisi*/
if (total_pembelian >= 50000)
korting = 0.05*total_pembelian;

jml_byr = total_pembelian - korting;
/* menghitung jumlah bayar */

//clsr()
printf("Total Pembelian = Rp %2lf\n",total_pembelian);
printf("Total korting = Rp %2lf\n",korting);
printf("Jumlah yang dibayarkan = Rp %2lf,", jml_byr);
getch();
}

