#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int phytagoras (int, int, int);
float abc (float, float, float);

main()
{
	while(1)
	{
		int a, b, c;
		int kode;
		puts("Silahkan pilih menu dibawah :");
		puts("1. Rumus Phytagoras");
		puts("2. Rumus abc");
		puts("3. Selesai");
		printf("Masukkan pilihan anda (1-3) : ");
		scanf("%d", &kode);
		if(kode < 1 || kode > 3)
		{
			puts("Pilihan anda salah, silakan coba lagi\n\n");
			continue;
		}
		switch(kode)
		{
			case 1 :
				phytagoras (a, b, c);
				break;
			case 2 :
				abc (a, b, c);
				break;
			case 3 :
				{
					exit(0);
					getch();	
				}
		}
	}
	getch();
}

int phytagoras (int a, int b, int c)
{
	printf("Masukkan Nilai a : ");
	scanf("%d", &a);
	printf("Masukkan Nilai b : ");
	scanf("%d", &b);
	c = sqrt((a*a) + (b*b));
	printf("Nilai c = %d\n\n", c);
}

float abc (float a, float b, float c)
{
	float x, x1, x2, D;
	printf ("Masukkan nilai a : ");
	scanf("%f", &a);
	printf ("Masukkan nilai b : ");
	scanf("%f", &b);
	printf ("Masukkan nilai c : ");
	scanf("%f", &c);
	D = ((b*b) - 4*a*c);
	if (D < 0)
	printf("Akar imajiner\n\n");
	if (D == 0)
	{
		x = (-b/2*a);
		printf("Akar :\tX1 = X2 = %.0f\n\n", x);
	}
	if(D > 0)
	{
		x1 = ((-b)+(sqrt(D)))/2*a;
		x2 =((-b)-(sqrt(D)))/2*a;
		printf("Akar:\tX1 = %.2f\n", x1);
		printf("\tX2 = %.2f\n\n", x2);
	}
}
