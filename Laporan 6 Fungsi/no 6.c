#include <stdio.h>
#include <stdlib.h>
float f_to_i(float);
float i_to_cm(float);
float cm_to_m(float);

int main()
{
    float kaki, inchi, cm, m;
    puts("Program Konversi Ukuran Kaki Menjadi Meter\n");
    printf("Masukkan ukuran kaki anda : ");
    scanf("%f", &kaki);

    inchi = f_to_i(kaki);
    cm = i_to_cm(inchi);
    m = cm_to_m(cm);

    printf("%g feet = %g inchi\n", kaki, inchi);
    printf("%g inchi = %g cm\n", inchi, cm);
    printf("%g cm = %g m\n", cm, m);
    return 0;
}

float f_to_i(float x)
{
    float y;
    y = x * 12;
    return y;
}

float i_to_cm(float a)
{
    float b;
    b = a * 2.54f;
    return b;
}

float cm_to_m(float c)
{
    float d;
    d = c / 100;
    return d;
}

