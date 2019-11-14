/* ---------------------------------------------*
*	Program Lat4d.c	*
*	contoh pemakaian for	*
*	Mencari rata-rata dari sejumlah bilangan	*
*----------------------------------------------*/

#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;	/*n adalah jumlah bilangan*/
	float bil,rata,total=0;	/*bil adalah bilangan yang akan anda masukkan*/
	
	printf("\nJumlah bilangan : "); 
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
	printf("Bilangan ke %d : ",i); 
	scanf("%f",&bil);
	total+=bil;
	printf("total = %.lf\n",bil +total );
	//total = total + bil
	}

	rata = total/n;
	printf("Rata-rata bilangan tersebut : %f",rata);

}
