#include<stdio.h>
#include<string.h>
char kar1[200];
char kar2[200];
main()
{
	printf("Masukkan kar 1=");
	gets(kar1);
	printf("\nkarakter %s memiliki panjang %d",kar1,strlen(kar1));
	strcpy(kar2,kar1);
	printf("\nkar 1 = %s\n kar 2= %s",kar1,kar2);
	strrev(kar1);
	printf("\nfungsi built pembalikkan karakter= %s",kar1);
	
}

