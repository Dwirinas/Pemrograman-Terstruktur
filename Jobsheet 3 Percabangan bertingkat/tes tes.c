#include <stdio.h> 
 #include <conio.h> 
 
 main()
   
 {  
 int bulan,hari, NamaBulan;  
 puts("=================================================");  
 puts("Menentukan Nama Bulan");  
 printf("Masukkan Urutan Bulan (1-12) :  ");
 scanf("%d", &bulan);
 puts("=================================================");  

switch(bulan)
 {
 	case 1 :
 	NamaBulan = "JANUARI";
 	hari = 31;
 
 	Printf("Jadi untuk urutan bulan ke %d adalah %s dengan jumlah hari %d",bulan, NamaBulan, hari);
 }
 getch();
}
