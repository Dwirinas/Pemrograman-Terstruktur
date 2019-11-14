#include<stdio.h> 
#include<stdlib.h> 

main(){
	FILE *pf; /*pointer-ke-FILE*/ 
	int data,i=1;
	char nama[40];
	char bagian;
	int hitung1, hitung2, hitung3;
	
	 
	system("cls");
	 
	if((pf=fopen("quiz.txt","r"))==NULL)
	{
	printf("File gagal dibuka...!\n"); 
	exit(1);
	}
	
	
	/* baca file per string sampai ditemui EOF */ 
	while(fgets(nama,11,pf))
		printf("%s\n",nama); 
		bagian = nama[0];
		printf("%c\n", bagian);
		if(bagian=='1'){
			hitung1++;
		if(bagian=='2'){
			hitung2++;
		}
		if(bagian=='3'){
			hitung3++;
		}
	}
	printf("Jumlah kat A : %d\n", hitung1);
	printf("Jumlah kat B : %d\n", hitung2);
	printf("Jumlah kat C : %d\n", hitung3);
}

