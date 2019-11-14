#include <stdio.h>
#include <string.h>
char htng_pnjg(char x[]);

main(){
	char kalimat[256]; 
	char hsl[256];
	int jumlah,i;
	puts("======================================");
	puts("PROGRAM MENGHITUNG PANJANG DARI STRING");
	puts("======================================");
	puts("");
	puts("Masukan kalimat (maksimal 255 karakter): ");
	gets(kalimat);
	
	jumlah = htng_pnjg(kalimat);
	printf("\nPanjang stringnya adalah %d karakter", jumlah);

}
char htng_pnjg(char x[]){
	int jumkar=0;
	for(int i=0; x[i]!='\0'; i++)
	{
	jumkar++;
	}
	return jumkar;
}
