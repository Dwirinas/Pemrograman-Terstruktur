#include<stdio.h>
#include<conio.h>
#define maks 100
void input(int);
main()
{
	int n;
	printf("====================================\n");
	printf("Menampilkan Isi Variabel Array Of Int\n");
	printf("====================================\n");
	printf("\nMasukkan jumlah data : ");
	scanf("%d", &n);
	input(n);
	getch();
}
void input(int n)
{
	int a[maks],i;
	for(i=0;i<n;i++) 
	{
		printf("Masukkan data ke-%d= ", i+1);
		scanf("%d", &a[i]);
	}
}

