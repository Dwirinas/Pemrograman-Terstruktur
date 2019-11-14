#include <stdio.h> 
 #include <conio.h> 
 
 main()
   
 {  
 int bulan, NamaBulan;  
 puts("=================================================");  
 puts("Menentukan Nama Bulan");  
 printf("Masukkan Urutan Bulan (1-12) :  ");
 scanf("%d", bulan);
 puts("=================================================");  

switch(bulan)
 {
 	case 1 :
 	NamaBulan = "JANUARI";
 	printf("JAdi bulan ke adalah %s", NamaBulan);
 	break;
 
 	
 }
 getch();
}
