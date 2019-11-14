/*----------------------------------------------*  
* Program Lat3b.c    *  
* contoh pemakaian if-else bertingkat   *  
* Untuk menentukan hari dalam seminggu  * 
 *----------------------------------------------*/  
 #include <stdio.h> 
 #include <conio.h> 
 
 main()
   
 {  
 int bulan, tahun;  
 puts("=================================================");  
 puts("Kode bulan menentukan jumlah hari dalam satu bulan");  
 printf("Masukkan kode bulan (1-12) : ");   
 scanf ("%d", &bulan);
 printf ("Tahun = ");
 scanf("%d", &tahun);
 puts("================================================="); 
 
 switch(bulan)
 {
 	case 1 :
 	{
 		printf("Jumlah hari pada tahun %d bulan Januari berjumlah 31\n", tahun );
 		break;
 	}
 	case 2 :
 	{
 			printf("Jumlah hari pada tahun %d bulan Februari\n", tahun );
 		//jika (tahun % 4 ==0) hari =29 else hari 28
 			if(tahun %4 == 0)
			puts("29");
			else
			puts("28");
	
 		break;
 	}
 	case 3 :
 	{
 		printf("Jumlah hari pada tahun %d bulan Maret berjumlah 31\n", tahun );
 		break;
 	}
 	case 4 :
 	{
 		printf("Jumlah hari pada tahun %d bulan April berjumlah 30\n ", tahun );
 		break;
	}
 	case 5 :
 	{
 		printf("Jumlah hari pada tahun %d bulan Mei berjumlah 31\n ", tahun );
 		break;
 	}
 	case 6 :
 	{
 		printf("Jumlah hari pada tahun %d bulan Juni berjumlah 30\n", tahun );
 		break;
 	}
 	case 7 :
 	{
 		printf("Jumlah hari pada tahun %d bulan Juli berjumlah 31\n", tahun );
 		break;
 	}
 	case 8 :
 	{
 		printf("Jumlah hari pada tahun %d bulan Agustus berjumlah 31\n", tahun );
 		break;
 	}
 	case 9 :
 	{
 		printf("Jumlah hari pada tahun %d bulan September berjumlah 30\n", tahun );
 		break;
 	}
 	case 10 :
 	{
 		printf("Jumlah hari pada tahun %d bulan Oktober berjumlah 31\n", tahun );
 		break;
 	}
 	case 11 :
 	{
 		printf("Jumlah hari pada tahun %d bulan November berjumlah 30\n", tahun );
 		break;
 	}
 	case 12 :
 	{
 		printf("Jumlah hari pada tahun %d bulan Desember berjumlah 31\n", tahun );
 		break;
 	}
 	default :
 		puts("Kode Bulan yang Dimasukkan Salah");
 }
 getch();
}
