#include <stdio.h>

int permutasi (int, int);
int kombinasi (int, int);

main()
{
    int n=0, r=0;
    printf("Masukkan n : "); scanf("%d", &n);
    printf("Masukkan r : "); scanf("%d", &r);

    printf("\n");

    printf("====PERMUTASI====\n");
    printf("Hasil permutasi : %d \n\n", permutasi (n, r));
    printf("====KOMBINASI====\n");
    printf("Hasil kombinasi : %d \n", kombinasi (n, r));
}

int permutasi (int n, int r)
{
    int hasil1=1, hasil2=1, hasil3, x, y, z;

    //n!//
    for (x=1; x<=n; x++)
    {
        hasil1 *= x;
    }
    printf("n! = %d\n", hasil1);

    //(n-r)!//
    z=n-r;
    for (y=1; y<=z; y++)
    {
        hasil2 *= y;
    }
    printf("(n-r)! = %d\n", hasil2);

    hasil3 = hasil1/hasil2;
    return (hasil3);
}

int kombinasi (int n, int r)
{
    int hasil1=1, hasil2=1, hasil3=1, hasil4, x, y, z, a;

    //n!//
    for (x=1; x<=n; x++)
    {
        hasil1 *= x;
    }
    printf("n! = %d\n", hasil1);

    //r!//
    for (a=1; a<=r; a++)
    {
        hasil2 *= a;
    }
    printf("r! = %d\n", hasil2);

    //(n-r)!//
    z=n-r;
    for (y=1; y<=z; y++)
    {
        hasil3 *= y;
    }
    printf("(n-r)! = %d\n", hasil3);

    hasil4 = hasil1/(hasil2*hasil3);

    return (hasil4);
}
