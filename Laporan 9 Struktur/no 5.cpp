#include <stdio.h>

struct date {
	int day, month, year;
};

main(){
	struct date isi[5];
	int a,b;

	for(a=0; a<5; a++){
	printf("Masukan tanggal ke-%d (dd, mm, yyyy) : ", a+1);
	scanf("%d,%d,%d", &isi[a].day, &isi[a].month, &isi[a].year);
	}
	printf("\nMenampilkan");
	
	for(b=0; b<a; b++){
	printf("\nIsi ke-%d = %d, %d, %d", b+1, isi[b].day, isi[b].month, isi[b].year);
	}
}

