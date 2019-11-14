#include <stdio.h>

int terbesar (int, int);

main()
{
    int a, b, hasil=0;

    printf("Masukkan bilangan ke-1 : ");
    scanf("%d", &a);
    printf("Masukkan bilangan ke-2 : ");
    scanf("%d", &b);

    terbesar (a, b);
}

int terbesar (int a, int b)
{
    int temp;

    if (a<b)
    {
        temp = b;
        b = a;
        a = temp;
    }
        printf("Bilangan terbesar adalah : %d dan bilangan terkecil %d \n \n", a,b);

        return 0;
}
