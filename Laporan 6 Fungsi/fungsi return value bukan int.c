#include <stdio.h> 

float jumlah(float, float); 
main()
{ 
	float a, b,c;
	printf("Masukkan nilai a : "); 
	scanf("%f", &a); 
	printf("Masukkan nilai b : "); 
	scanf("%f", &b); c = jumlah(a, b); 
	printf("\nHasil penjumlahan a + b = %g\n", c);
}
float jumlah(float x, float y) 
{ 
return(x + y); 
}

