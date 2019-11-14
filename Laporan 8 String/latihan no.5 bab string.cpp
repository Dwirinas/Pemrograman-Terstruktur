#include <stdio.h>
#include <string.h>

main ()
{
	char teks1[250],teks2[250],hasilbalik[250];
	
	printf("\nmasukkan kalimat \t");
	gets(teks1);
	
	printf("\npanjang kalimat \t = %d karakter",strlen(teks1));
	printf("\nhasil pembalikan \t = %s",strrev (teks1));
	strcpy(teks2,teks1);
	printf("\nhasil copy \t = %s",teks2);
	
}
	int pjgstr(char sesuatu[])
	{
		int i=0;
		while(sesuatu[i])
		i++;
		return i;
		
	}
