#include <stdio.h> 
#define MAKS 30 
 
void cariRata(float[MAKS][4]); 
void tampilkan(float[MAKS][4]); 
 
main() 
{  float nilai[MAKS][4] = {{1,81,90,62},{2,50,83,87},{3,89,55,65},{4,77,70,92}}; 
 
 printf("\n\t-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=- \n");  
 printf("\t\tPROGRAM MENCARI NILAI RATA-RATA");  
 printf("\n\t-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=- \n\n");      
 tampilkan(nilai);  
 cariRata(nilai);  
 } 
 void tampilkan(float data[MAKS][4])
{
int i,j,jumData = 4;
printf("Daftar Nilai:\n\n");
printf("---------------------------------------------\n");
printf("| %2s | %10s | %10s | %10s |\n","No","Bahasa","Matematika","Digital");
printf("---------------------------------------------\n");
for(i=0;i<jumData;i++)
printf("| %2d | %10.0f | %10.0f | %10.0f|\n",i+1,data[i][1],data[i][2],data[i][3]);
printf("---------------------------------------------\n");
}
void cariRata(float data[MAKS][4])
{
int i,j,jumData = 4;
float total = 0;
printf("\nNilai Rata-rata:\n\n");
printf("-------------------\n");
printf("| %2s | %12s\n","No","Rata-rata |");
printf("-------------------\n");
for(i=0;i<jumData;i++)
{
total = 0;
for(j=0;j<3;j++)
{
total = total + data[i][j];
}
printf("| %2d | %10.2f |\n",i+1,total/j);
}
printf("-------------------\n");
}
