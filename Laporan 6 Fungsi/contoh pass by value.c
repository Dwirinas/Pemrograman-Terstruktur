#include <stdio.h> 
void tukar(int, int); 
main()
{ 
	int a=5, b=3;
	printf("Sebelum pemanggilan fungsi\n"); 
	printf("a=%d, b=%d\n", a, b); 
	tukar(a, b); 
	printf("Sesudah pemanggilan fungsi\n"); 
	printf("a=%d, b=%d\n", a, b);
}

