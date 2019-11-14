#include <stdio.h>
#define MAKS 5

main(){
	char kar = 'A';
	char nama[MAKS];

	printf("Karakternya = %c\n", kar); 	
	printf("Masukkan nama Anda : ");
	gets(nama);
	printf("\nNama Anda = %s\n", nama);
	printf("Karakternya = %c\n", kar);
}

