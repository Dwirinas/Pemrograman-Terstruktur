#include <stdio.h>
#include<string.h>

main()
{
   char nama[20];

   printf("Masukkan Nama Anda : ");
   fgets(nama, sizeof nama, stdin);

   printf("%s Selalu Semangat, Saranghae \n", nama);
}
