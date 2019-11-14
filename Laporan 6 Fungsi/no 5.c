#include <stdio.h>
#include <stdlib.h>
float masukan(int);
float average(int, float);

int main()
{
    puts("Program Menentukan Rata-Rata Data\n");
    int n;
    float total,rata;

    printf("Masukkan jumlah data yang diinputkan : ");
    scanf("%d", &n);

    total = masukan(n);
    rata = average(n, total);
    printf("\nTotal dari seluruh data = %g", total);
    printf("\nRata-rata dari seluruh data = %g ", rata);
    return 0;
}

float masukan(int data)
{
    int x;
    float jumlah=0, nilai;

    for(x=1; x<=data; x++)
    {
        printf("Masukkan data ke-%d : ", x);
        scanf("%f", &nilai);
        fflush(stdin);
        jumlah = jumlah + nilai;
    }
    return jumlah;
}

float average(int a, float sum)
{
    float akhir;
    akhir = sum / a;
    return akhir;
}

