#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
	int a, b, c;
	float Diskriminan, x1, x2;
	
	ptintf("======================================\n");
	printf("Menghitung Akar-Akar Persamaan Kuadrat\n");
	printf("======================================\n\n");
	printf("Masukkan nilai a : ");
	scanf("%d", &a);
	printf("\nMasukkan nilai b : ");
	scanf("%d", &b);
	printf("\nMasukkan nilai c : ");
	scanf("%d", &c);
	
	Diskriminan = (b*b)-(4*a*c);
	
	printf("\nMaka Diskriminan dari %dx^2 + %dx + %d = 0 adalah %.2lf",a,b,c,Diskriminan);
	printf("\n\n=================================\n");
	printf("Akar-Akar Persamaan Kuadrat\n");
	printf("=====================================\n");
	
	if (Diskriminan == 0)
	{
		printf("\nAkar-Akarnya Kembar\n Dengan nilai\n");
		x1 = (-b)/(2*a);
		x2 = x1;
		printf("X1 = %.2lf\n",x1);
		printf("X2 = %.2lf",x2);
	}
	if (Diskriminan < 0)
	{
		printf("\nAkar-Akar Imajiner\n");
	}
}
