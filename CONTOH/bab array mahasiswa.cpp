#include <stdio.h>
#include <string.h>

float rata(float, float, float);
main()
{	

	int i;
	int bahasa[] = {81, 50, 89, 77};
	int mtk[] = {90, 83, 55, 70};
	int dgt[] = {62, 87, 65, 92};
	
	puts("No\t\tRata-rata");
	puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	for(i=0;i<4;i++){
	printf("\n%d\t\t%.2f", i+1, rata(bahasa[i], mtk[i], dgt[i]));
	}
	puts("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~"); 
}

float rata(float a,float b, float c)
{
	float d;
	d = (a + b + c)*1/3;
	return d;
}
