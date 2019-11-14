#include<stdio.h> 
#include<conio.h>
void tukar (int, int); 
main()
{
int a, b;

a = 88;
b = 77;

printf("nilai sebelum pemanggilan fungsi\n"); 
printf("a = %d b = %d\n\n", a, b);

tukar(a, b);

printf("nilai sesudah pemanggilan fungsi\n"); 
printf("a = %d b = %d\n\n", a, b);
getch();
 
}

void tukar (int x, int y)
{
int z; 
/* variabel sementara */ 
z = x;
x = y; y = z;
printf("Nilai di akhir fungsi tukar ()\n"); 
printf("x = %d y = %d\n\n", x, y);
}
