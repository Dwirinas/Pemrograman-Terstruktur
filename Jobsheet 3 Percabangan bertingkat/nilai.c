#include<stdio.h>
#include<conio.h>

main()
{
 float nilai;
 printf("Masukan nilai yang didapat : ");
 scanf("%f", &nilai);
 if(nilai > 80){
   printf("Anda Mendapat Nilai A ");
   if(nilai==100){
     printf("Dengan Angka Sempurna");
   }
 }else if(nilai > 70){
 printf("Anda Mendapat Nilai B ");
   if(nilai>=78){
     printf("Sedikit Lagi Dapat Nilai A");
   }
 }else if(nilai > 60){
   printf("Anda Mendapat Nilai C ");
 }else if(nilai > 50){
   printf("Anda Mendapat Nilai D ");
 }else {
   printf("Anda Mendapat Nilai E ");
 }
 getch();
}
