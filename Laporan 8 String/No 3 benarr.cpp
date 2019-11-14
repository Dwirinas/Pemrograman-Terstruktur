#include<stdio.h>
#include<string.h>
#define MAKS 256

	char kar[MAKS], x;
	int jumkar=0, i;
	int karakter(int);
	void back();
	
main(){

	printf("Masukkan Kata : ");
	gets(kar);
	
	printf("Panjang string %s = %d 	karakter\n", kar,strlen(kar));
	
	printf("Kalimat Setelah dibalik : ");
	back();
}
 int karakter(int jumkar)
	{
		for(i=0; kar[i]!='\0'; i++)
		{
			jumkar++;
	}
	return(jumkar);
} 

	void back()
{
      for (i=jumkar; i>='\0'; i--)
      {
            x = kar[i];
            printf("%c", x);
      }
      printf("\n\n");

}
