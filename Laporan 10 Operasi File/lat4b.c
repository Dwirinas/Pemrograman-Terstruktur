#include<stdio.h> 
#include<conio.h> 

main(){
	FILE *pf; /*pointer-ke-FILE*/ 
	int data,i=1;
	char nama[40]; 

	system("cls");
	
	if((pf=fopen("latihan.txt","w"))==NULL)
	{
		printf("File gagal diciptakan.	!\n");
		exit(1);
	}
		printf("\nNama ke-%d : ",i); 
		fflush(stdin);
		gets(nama); 
		fputs(nama,pf);
		printf("\nOke. Data sudah disimpan dalam file.	\n");
		fclose(pf); 
		getch();
	}

