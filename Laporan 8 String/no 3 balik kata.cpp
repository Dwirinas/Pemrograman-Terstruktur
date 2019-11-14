#include <stdio.h>
#include <string.h>
char htng_pnjg(char x[]);
void balikkata(char y[], char z[]);
main(){
	char kalimat[256]; 
	char hsl[256];
	int jumlah,i;
	
	printf("Masukan kalimat : ");
	gets(kalimat);
	
	jumlah = htng_pnjg(kalimat);
	printf("\nPanjang stringnya adalah %d karakter", jumlah);
	
	printf("\nBalik Kalimat = %s ---> ", kalimat);
	balikkata(kalimat, hsl);
}
char htng_pnjg(char x[]){
	int jumkar=0;
	for(int i=0; x[i]!='\0'; i++)
	{
	jumkar++;
	}
	return jumkar;
}
void balikkata(char x[], char y[]){
	int pnjg, akhir; 
	int awal;
	pnjg = htng_pnjg(	x);
	akhir = pnjg - 1;
	for(awal = 0 ; awal < pnjg; awal++) {
		y[awal]=x[akhir];
		akhir--;
	}
	y[awal] = '\0';
	printf("%s", y);
}
