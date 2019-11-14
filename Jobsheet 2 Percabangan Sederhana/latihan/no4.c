/* program akar persamaan kuadrat */ 
#include <stdio.h> 
#include <math.h> 
main() 

{

float a,b,c,x,x1,x2,x3;

printf("Persamaan Kuadrat \n");
printf("Nilai a: ");
scanf("%f", & a);

if(a==0)

printf("Bukan persamaan kuadrat\n");


printf("Nilai b: ");

scanf("%f", &b);

printf("Nilai c: ");

scanf("%f", &c);

d= (b*b)-(4*a*c);

if (d<0) printf("Akar-akarnya imajiner \n");

else if (d==0)

{

x=-b/2*a;

printf("Memiliki satu penyeleseaian %.2f \n", x);

}

else

{
