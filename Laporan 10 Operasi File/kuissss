#include<stdio.h>
#include<stdlib.h>

int main()
{
	int kategori1=0, kategori2=0, kategori3=0;
	char angka[25], data;
	FILE *pf;
	if((pf =fopen("KUIS.txt","r")) == NULL) 
	{
		printf(" file tidak dapat dibuka ");
		exit(0);
	}
	while(fgets(angka, 10,pf ))
	{
		printf("%s\n", &angka);
		data = angka[0];
		if (data == '1')
			kategori1++;
		else
		if(data == '2')
			kategori2++;
		else
		if(data == '3')
			kategori3++;
	}
	printf("kategori 1 jumlahnya %d\n", kategori1);
	printf("kategori 2 jumlahnya %d\n", kategori2);
	printf("kategori 3 jumlahnya %d\n", kategori3);
	fclose(pf);
}
