#include <stdio.h> 
#define MAKS 5 
main() 
{ 
	int i; 
	float total=0, rata, nilai[MAKS];

	for(i=0; i<MAKS; i++) 
	{ 
		printf("Nilai ke-%d : ", i+1); 
		scanf("%f", &nilai[i]); 
		total = total + nilai[i]; 
	}
		rata = total / MAKS; 
		printf("\nNilai rata-rata = %g\n", rata);
}
