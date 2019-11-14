#include<stdio.h> 
#include<stdlib.h> 

main(){
	FILE *pf; /*pointer-ke-FILE*/ 
	int data,i=1;
	char nama[40]; 
	system("cls");
	 
	if((pf=fopen("latihan.txt","r"))==NULL)
	{
	printf("File gagal dibuka...!\n"); 
	exit(1);
	}
	/* baca file per string sampai ditemui EOF */ 
	while(fgets(nama,11,pf))
		printf("%s\n",nama); 
	
	fclose(pf);
	getch();
	}

