/*----------------------------------------------*  
* Program Lat3a.c    *  
* contoh pemakaian if-else bertingkat   *  
* Untuk menentukan hari dalam seminggu  * 
 *----------------------------------------------*/  
 #include <stdio.h> 
 #include <conio.h> 
 
 main()
   
 {  
 int kode_hari;  
 puts("=================================================");  
 puts("Menentukan hari     ");  
 puts("1=SENIN 2=SELASA 3=RABU  4=KAMIS ");  
 puts("5=JUM'AT 6=SABTU  7=MINGGU  ");  
 puts("=================================================");  
 
 printf("yang diinputkan user : %d \n" , kode_hari );
 
 printf("Masukkan kode hari (1..7)     :    ");  
 scanf("%d", &kode_hari);  
 
 switch(kode_hari)
 {
 	case 1 :
 	{
 		puts("Hari Senin");
 		puts("Hari yang menyenangkan untuk kuliah");
 		break;
 	}
 	case 2 :
 	{
 		puts("Hari  Selasa");
 		puts("Hari yang menyenangkan untuk belajar program");
 		break;
 	}
 	case 3 :
 	{
 		puts("Hari Rabu");
 		puts("Hari yang menyenangkan untuk mengerjakan tugas");
 		break;
 	}
 	case 4 :
 	{
 		puts("Hari Kamis");
 		puts("Hari yang menyenangkan untuk bersantai di rumah");
 		break;
	}
 	case 5 :
 	{
 		puts("Hari Jum'at'");
 		puts("Hari yang menyenangkan untuk senantiasa berbagi");
 		break;
 	}
 	case 6 :
 	{
 		puts("Hari Sabtu");
 		puts("Hari yang menyenangkan untuk berlibur");
 		break;
 	}
 	case 7 :
 	{
 		puts("Hari Minggu");
 		puts("Hari yang menyenangkan untuk bersih-bersih rumah");
 		break;
 	}
 	default :
 		puts("Kode Hari yang Dimasukkan Salah");
 }
 getch();
}

