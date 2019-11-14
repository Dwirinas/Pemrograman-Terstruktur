#include <stdio.h> 
#include <stdlib.h> 

main(){
	FILE *pf; /* ptr-ke-FILE */ 
	int nilai, data, i;
	char jawab;
	
	if((pf=fopen("BILANGAN.DAT", "wb")) == NULL)
	{
		printf("file gagal diciptakan!\n"); 
		exit(1);
	}
		printf("Masukkan banyaknya data : "); 
		scanf("%d",&data); 
		
	for(i=0;i<data;i++)
	{
		printf("\nBilangan yang disimpan : "); 
		scanf("%d",&nilai);	
		/*	baca	nilai	dr	keyboard*/
	 
	putw(nilai, pf);	/* baca bilangan ke file */
	}
	printf("\nOke.Data sudah disimpan dalam file.\n"); 
	fclose(pf);	/* menutup file */
	}

