 /*----------------------------------------------*  
* Program Lat5a.c    *  
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
 if (kode_hari == 1)     
 	puts("Hari SENIN"); 
 	else       
	if (kode_hari == 2)    
	puts("Hari SELASA");       
	else      
	if (kode_hari == 3)         
	puts("Hari RABU");      
	else           
	if (kode_hari == 4)   
	puts("Hari KAMIS");           
	else     
	if (kode_hari == 5)        
	puts("Hari JUM'AT");     
	else          
	if (kode_hari == 6)      
	puts("Hari SABTU");         
	else     
	if (kode_hari == 7)        
	puts("Hari MINGGU");     
	else        
	puts("Kode yang anda masukkan salah!");
	
	getch();  
	}
