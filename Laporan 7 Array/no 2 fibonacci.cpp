#include<stdio.h>
#include<conio.h>
void fibonacci(int);
int main(){
int n;
	printf("====================================\n");
	printf("Fibonacci Of Array\n");
	printf("====================================\n");
	printf("\nMasukkan jumlah data : ");
	scanf("%d", &n);
	fibonacci (n);
	printf("\n");
	getch();
}
void fibonacci (int n)
{
	int i,a[100];
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			a[i]=0;
			printf("0");
		}
		else 
		if(i==1)
		{
			a[i]=1;
			printf("1");
		}
		else
		{
			a[i]=a[i-1]+a[i-2];
			printf("%d",a[i]);
}
}
}

