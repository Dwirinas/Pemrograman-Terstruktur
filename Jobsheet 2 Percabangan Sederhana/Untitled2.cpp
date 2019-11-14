/*------------------------------------------*  
* Program Lat4a.c     *  
* Untuk menentukan besaran korting yang *  
* diterima seorang pembeli   *  
*------------------------------------------*/  
#include <stdio.h>  
#include <conio.h>  
main() 
 { 
double total_pembelian, korting, jml_byr; /* deklarasi variable bertipe bilangan double */ 
  //clrscr(); 
 
  printf("Total pembelian anda : Rp "); 
  scanf("%lf", &total_pembelian); 
  korting = 0; 
   
  /* proses seleksi kondisi */ 
  if (total_pembelian >= 50000) 
  korting = 0.05 * total_pembelian; 
  
  jml_byr = total_pembelian - korting;  
/* menghitung jumlah bayar */ 
 
  //clrscr(); 
  printf("Total Pembelian   = Rp %.2lf\n",total_pembelian); 
printf("Besarnya Korting   = Rp %.2lf\n",korting); 
printf("Jumlah yang dibayarkan  = Rp %.2lf\n",jml_byr); 
  getch(); 
  }
