#include<stdio.h>

//define
float jumlah (float, float);
float tambah (float, float);
float kurang (float, float);
float kali (float,float);
float bagi (float,float);

main ()
{
	float a,b,c,d, hasil;
	printf("Masukkan Bilangan 1 : ");
	scanf("%f", &a);
	printf("Masukkan Bilangan 2 : ");
	scanf("%f", &b);
	
	//used
	hasil = jumlah (a,b);
	printf("Hasil Jumlahnya adalah %g \n", hasil);
	hasil = kurang (a,b);
	printf("Hasil Kurangnya adalah %g \n", hasil);
	hasil = kali (a,b);
	printf("Hasil Kalinya adalah %g \n", hasil);
	hasil = bagi (a,b);
	printf("Hasil Baginya adalah %g \n", hasil);
	
	printf("Masukkan Bilangan 3 : ");
	scanf("%f", &c);
	printf("Masukkan Bilangan 4 : ");
	scanf("%f", &d);
	hasil = jumlah (c,d);
	printf("Hasil Jumlah Keduanya adalah %g \n", hasil);
}
//declare
float jumlah(float x, float y) {
	float hasil;
	hasil = x + y;
	
	return hasil;
}
float kurang (float k,float z){
	return (k-z);
}
float kali (float a,float b){
	return (a*b);
}
float bagi (float q,float p){
	return (q/p);
}
