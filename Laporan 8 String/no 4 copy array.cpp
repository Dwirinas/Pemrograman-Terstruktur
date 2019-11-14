#include<stdio.h>
#include<string.h>

void copystr(char*,char*);

int main(){
	char asal[50]=""; char tujuan[50]="";
	printf("Masukkan kata 1 : "); fgets(asal,sizeof asal, stdin);
	copystr(tujuan,asal);
	printf("kata 2 : %s\n", tujuan);
	printf("kata 1 : %s\n", asal);
}

int pjgstr(char*string){
	int i=0;
	while(string[i]!='\0'){
		i++;
	}
	return i;
}

void copystr(char*tujuan, char*asal){
	int i=0, m=pjgstr(asal)-1;
	while(i<m){
		tujuan[i]=asal[i];
		i++;
	}
}
