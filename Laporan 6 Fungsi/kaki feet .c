#include<stdio.h>

float feet (float x)
{
float kaki;
kaki = 12 * x;
return kaki;
}
float centi (float x)
{
float cm;
cm = 2.54 * x;
return cm;
}
float meter (float x)
{
float m;
m = x / 100;
return m;
}

main () 
{
float f, kaki, cen, met;
printf("Masukan ukuran dalam feet= ");
scanf("%f", &f);
kaki = feet(f);
cen = centi(kaki);
met = meter (cen);

printf("Hasil = %f cm \n", cen);
printf("Hasil = %f m \n", met);
}
