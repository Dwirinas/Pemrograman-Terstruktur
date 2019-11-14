#include <stdio.h>

int pjgstr(int);
void balikstr();

int n, jumlah, a;
char kar[256], balik,  x;

void main()
{

      printf("Masukkan kalimat : ");
      gets(kar);

      printf("\nJumlah karakter adalah : %d \n\n", pjgstr(n));
     
      printf("Hasil karakter setelah dibalik : ");
      balikstr();
}

int pjgstr(int n)
{

      for (n=0; kar[n]!='\0'; n++)
      {
            jumlah++;
      }
      return (jumlah);
}

void balikstr()
{
      for (a=jumlah; a>='\0'; a--)
      {
            x = kar[a];
            printf("%c", x);
      }
      printf("\n\n");

}
