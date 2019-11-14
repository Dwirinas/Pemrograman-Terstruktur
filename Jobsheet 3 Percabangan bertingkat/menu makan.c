#include<stdio.h>
#include<conio.h>

main()
{
   int pilihan;
   
   printf("================================\n");
   printf("Menu makanan : \n");
   printf("1.Nasi Padang\n");
   printf("2.Pempek Palembang\n");
   printf("3.Siomay Bandung\n");
   printf("================================\n");
   printf("Masukan pilihan mu (1/2/3) : ");
   scanf("%d",&pilihan);
   
   switch(pilihan)
   {
      case 1 : printf("Nasi Padang sudah di pesan harap menunggu beberapa menit\n");
	  break;
      case 2 : printf("Pempek Palembang sudah di pesan harap menunggu beberapa menit\n");
	  break;
      case 3 : printf("Siomay Bandung sudah di pesan harap menunggu beberapa menit\n");
	  break;
      default : printf("Pilihan yang anda masukan tidak tersedia\n");
	  break;
   }
   getch();
}
