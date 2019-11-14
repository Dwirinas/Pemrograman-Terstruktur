#include <stdio.h>
#include<conio.h>
#include<math.h>
float rumusabc(float,float,float);
float rumuspitagoras(float,float);
char x ='1';
 float a,b,c,hasil,hasil1,hasil2;
 int i;
main()
{
 while(1)
 {
 /*Cetak menu*/
 for(i=1;i<20;++i)
printf("\xDB");
printf("\n\n");
 printf("\rOPERASI DUA BILANGAN");
 printf("\n1.Operasi phytagoras");
 printf("\n2.Operasi abc");
 printf("\n3.Selesai");
 printf("\n\n");
 for(i=1;i<20;++i)
printf("\xDB");
 printf("\n\nPilihan Anda :");
 x=getche();
 if(x=='3')
 printf("\nProgram selesai,makasihh");
 break;
 /*Pilihan yang salah*/
 if (x<'1' || x>'3')
 {
printf("Anda salah memilih");
printf("\nTekan sembarang tombol");
getch();
continue;
 /*Kembali ke Menu*/
 }
 /*Pilihan yang benar*/
 switch(x)
 {
 case '1':
 	{
	printf("\nmenentukan panjang sisi miring pada segitiga siku-siku");
 	printf ("\nmasukkan panjang sisi yang tegak lurus (1) =");
 	scanf("%f",&a);
 	printf("\nmasukkan panjang sisi yang tegak lurus (2) =");
 	scanf("%f",&b);
 rumuspitagoras( a,b);
 printf("panjang sisi miring dari segitiga siku-siku %f",hasil);
 break;
}
 case '2':
 	{
 	printf("\noperasi menentukan akar-akar dari persamaan ax^2+bx+c=0");
 	printf("\nmasukkan nilai a =");
 	scanf("%f",&a);
 	printf("\nmasukkan nilai b =");
 	scanf("%f",&b);
 	printf("\nmasukkan nilai c =");
 	scanf("%f",&c);
rumusabc(a,b,c);
printf("nilai dari akar akarnya  adalah %f dan %f",hasil1,hasil2);
 break;
}
}
 /*Cetak hasil*/
 printf("\n\nTekan sembarang tombol");
 getch();
 }
 }
 float rumusabc(float a,float b,float c)
 {
hasil1=((-b)+(sqrt((b*b)-(4*a*c))))/(2*a);
hasil2=((-b)-(sqrt((b*b)-(4*a*c))))/(2*a);
return hasil1;
return hasil2;
 }
float rumuspitagoras(float a,float b)
{
	 hasil=sqrt((a*a)+(b*b));
	 return hasil;
}
