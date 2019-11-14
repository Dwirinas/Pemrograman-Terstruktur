#include<stdio.h>
#include<conio.h>

main()
{
	int kode;
	float a, b, c;
	
	printf("============================\n");
	printf("KODE PERHITUNGAN\n");
	printf("1 = Penjumlahan\n");
	printf("2 = Pengurangan\n");
	printf("3 = Perkalian\n");
	printf("4 = Pengurangan\n");
	printf("============================\n");
	printf("MASUKKAN KODE PERHITUNGAN = ");
	scanf("%d", &kode);
	printf("Masukkan nilai a : ");
	scanf("%f", &a);
	printf("Masukkan nilai b : ");
	scanf("%f", &b);
	
	switch(kode)
	{
		case 1 :
			{
			c = a + b;
			printf("%.2lf + %.2lf = %.2lf", a, b, c);
			break;
			}
		case 2 :
			{
			c = a - b;
			printf("%.2lf - %.2lf = %.2lf", a, b, c);
			break;
			}
		case 3 :
			{
			c =a * b;
			printf("%.2lf x %.2lf = %.2lf", a,b,c);
			break;
			}
		case 4 :
			{
			c =a / b;
			printf("%.2lf : %.2lf = %.2lf", a, b, c);
			break;
			}
	}
	getch();
}
