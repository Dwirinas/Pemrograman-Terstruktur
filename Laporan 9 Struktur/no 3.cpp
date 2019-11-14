#include<stdio.h>

struct record {
		int loop;
		char word[5];
		float sum;
};


main(){
	struct record sample;

	printf("\nIsi loop sebelum diisi = %d ", sample.loop);
		//mengisi nilai loop
		sample.loop=10;
		//menampilkan isi
		printf("\nIsi loop sesudah diisi = %d", sample.loop);
}

