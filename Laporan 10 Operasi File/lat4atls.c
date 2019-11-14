#include<stdio.h> 
#include<stdlib.h> 

main(){
	FILE *pf; /* pointer-ke-FILE*/ 
	int data,i;
	char nama[40];
	
	system("cls");
	
	if((pf=fopen("latihan.txt","w"))==NULL)
	{
		printf("File gagal diciptakan...!\n"); 
		exit(1);
	}
		printf("Masukkan banyaknya data :"); 
		scanf("%d", &data);
		for(i=1; i<=data;i++)
	{
		printf("\nNama ke-%d : ", i); 
		fflush(stdin);
		gets(nama); 
		strcat(nama, "\n"); 
		fputs(nama,pf);
	}
	printf("\nOke.Data sudah disimpan dalam file,,,,,\n"); 
	fclose(pf);
	getch();
	}
