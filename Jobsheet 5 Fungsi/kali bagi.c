#include<stdio.h>
#include<conio.h>

int perkalian(int, int);
float pembagian(float, int);
main()

{
int nilai;
	float nilai_pembagian;
	nilai=perkalian(2,3);
	nilai_pembagian=pembagian(2,3);
	
	printf("Hasil dari perkalian = %d\n\n", nilai);
	printf("Hasil dari pembagian=%.2f", nilai_pembagian);
	getche();
}

int perkalian(int nilai1, int nilai2)
{
int hasil;
hasil=nilai1*nilai2;

return hasil;
}

float pembagian(float nilai1,  int nilai2)
{
	return nilai1/nilai2;
}
