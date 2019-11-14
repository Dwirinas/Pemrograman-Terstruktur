#include<stdio.h>
#include<string.h>

struct record {
		int loop;
		char word[5];
		float sum;
};


main(){
	struct record sample;
	printf("\nIsi array word sebelum diisi = %s", sample.word);
	strcpy(sample.word, "lala");
	printf("\nIsi array word sesudah diisi = %s", sample.word);
}

