/* Program untuk menghitung perkalian dua bilangan. 
*/ #include <stdio.h>
int a,b,c;
int kali(int x, int y); 
main()
{
/* masukan bilangan pertama */
printf("Masukan bilangan antara 1 sampai 100: "); 
scanf("%d", &a);
/* masukan bilangan kedua */
printf("Masukan bilangan lain antara 1 sampai 100: "); 
scanf("%d", &b);
/* hitung dan tampilkan hasil */ c = kali(a, b);
printf ("%d kali %d = %d\n", a, b, c); return 0;
}
/* fungsi untuk menghitung perkalian dua argumen*/ int kali(int x, int y)
{
return (x * y);
}

