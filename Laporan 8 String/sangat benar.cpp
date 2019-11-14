#include<stdio.h>
#include<string.h>
#define MAKS 256

	char kar[MAKS], hasil[MAKS];
	int jumkar=0, i;
	int karakter(int);
	void balikkata(char x[], char y[]);
		int awal, akhir;
	
main(){

	printf("Masukkan Kata : ");
	gets(kar);
	
	printf("Panjang string %s = %d karakter\n", kar,strlen(kar));
	
	printf("Kalimat Setelah dibalik : ");
	balikkata(kar, hasil);
}
 int karakter(int jumkar)
	{
		for(i=0; kar[i]!='\0'; i++)
		{
			jumkar++;
	}
	return(jumkar);
} 

	void balikkata(char x [], char y[])
{
	int awal, akhir;
      for (awal = 0; awal < jumkar; awal++)
      {
            y[awal] = x[akhir];
            printf("%s", x);
      }
      printf("\n\n");

}
