#include<stdio.h>
#include<conio.h>
       main()
      {
            int a,b,A[2][2],B[2][2], hasjum[2][2], baris, kolom;
     
            printf("Matriks A\n");

            for(a=0;a<2;a++)
            {
                  for(b=0;b<2;b++)
                  {
                  printf("Masukkan Baris %d dan Kolom %d : ",a+1,b+1);
                  scanf("%d",&A[a][b]);
                  }    
            }
           
            printf("\nMatriks B\n");

            for(a=0;a<2;a++)
            {
                  for(b=0;b<2;b++)
                  {
                  printf("Masukkan Baris %d dan Kolom %d : ",a+1,b+1);
                  scanf("%d",&B[a][b]);
                  }          
            }
            printf("\n");

            for(baris=0;baris<2;baris++)
            {
                  for(kolom=0;kolom<2;kolom++)
                  {
                  hasjum[baris][kolom] =A[baris][kolom]+B[baris][kolom];
               printf("Hasil penjumlahannya:%d\n",hasjum[baris][kolom]);
                  }
                  
            }    
      }

