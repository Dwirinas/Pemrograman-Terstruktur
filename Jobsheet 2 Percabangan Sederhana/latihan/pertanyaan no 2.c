#include <stdio.h>
#include<conio.h>
main()
{
	int totallembar, hargaperlembar, totalharga;
	//clsr();
	printf("Total lembar yang difotocopy : ");
	scanf("%d", &totallembar);
	/* Proses seleksi kondisi*/
	if (totallembar >= 100)
	hargaperlembar = 50;
	else
	hargaperlembar = 60;
	totalharga = totallembar * hargaperlembar;
	printf("\n\nTotal Bayar = %d", totalharga);
	getch();
}
