#include<stdio.h>
#include<conio.h>
 
main()
{
	int pencacah; 
	pencacah=0; 
	
	do
	{
		printf("%d", pencacah);
		puts(" - Belajar Pemrograman ");
		pencacah++;
		//pencacah=pencacah + 1
	}
	while(pencacah < 10); 
	
	printf("\nSelesai......	");
	getch();
}
