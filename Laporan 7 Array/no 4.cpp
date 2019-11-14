#include <stdio.h>
#include <conio.h>
#define Maks[5]
main () 
{
	int data [5];
	int a,b;
	int maks,min;

	printf("jumlah bilangan yang dimasukkan (maks 5): ");
	scanf ("%d",&a);

	for (b=1;b<=a;b++) 
	{
		printf("\nbilangan ke-%d: ",b);
		scanf("%d",&data [b]);
}

	maks=data[1];
	min=data[1];
	for (b=1;b<=a;b++)
	if (data[b]>=maks)
	{
		maks=data[b];
	}
	else 
	if (data[b]<=min)
	{
		min=data[b];
	}
	
printf("\n\nnilai tertinggi:%d", maks);
getch();
}

