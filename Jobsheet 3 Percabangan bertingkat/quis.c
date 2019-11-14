 #include <stdio.h> 
 #include <conio.h> 
 
 main()
   
 {  
 int bulan, NamaBulan;  
 puts("=================================================");  
 puts("Menentukan Nama Bulan");  
 printf("Masukkan Urutan Bulan (1-12) :  ");
 scanf("%d", &bulan);
 puts("=================================================");  
 
switch(bulan)
 {
 	case 1 :
 	NamaBulan = "JANUARI";
 	printf("Jadi untuk nama bulan dengan urutan ke %d adalah ", bulan);
 		break;
 	
 	case 2 :
 	NamaBulan ="FEBRUARI";
 	puts("Jadi untuk nama bulan dengan urutan ke %d adalah ", bulan);
 	break;
 	
 	case 3 :
 	NamaBulan ="Maret";
 		puts("Jadi untuk nama bulan dengan urutan ke %d adalah ", bulan);
 		break;
 	
 	case 4 :
 	NamaBulan ="APRIL";
 		puts("Jadi untuk nama bulan dengan urutan ke %d adalah ", bulan);
 		break;

 	case 5 :
 	NamaBulan ="MEI";
 		puts("Jadi untuk nama bulan dengan urutan ke %d adalah ", bulan);
 		break;

 	case 6 :
	NamaBulan ="JUNI";
 		puts("Jadi untuk nama bulan dengan urutan ke %d adalah ", bulan);
 		break;

 	case 7 :
	NamaBulan ="JULI";
 		puts("Jadi untuk nama bulan dengan urutan ke %d adalah ", bulan);
 		break;
 	
 	case 8 :
 	NamaBulan ="Agustus";
 		puts("Jadi untuk nama bulan dengan urutan ke %d adalah ", bulan);
 		break;
 	
 	case 9 :
 	NamaBulan ="SEPTEMBER";
 		puts("Jadi untuk nama bulan dengan urutan ke %d adalah ", bulan);
 		break;
 	
 	case 10 :
 	NamaBulan ="OKTOBER";
 		puts("Jadi untuk nama bulan dengan urutan ke %d adalah ", bulan);
 		break;
 	
 	case 11 :
 	NamaBulan ="NOVEMBER";
 		puts("Jadi untuk nama bulan dengan urutan ke %d adalah ", bulan);
 		break;
 	
 	case 12 :
 	NamaBulan ="DESEMBER";
 		puts("Jadi untuk nama bulan dengan urutan ke %d adalah ", bulan);
 		break;
 	
 	default :
 		puts("Kode Hari yang Dimasukkan Salah");
 }
 getch();
}
