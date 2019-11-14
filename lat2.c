#include <stdio.h>

int maks(int,int,int);
int min(int,int,int);
main(){
	int x,y,z;
	
	printf("Masukan bilangan 1 :");
	scanf("%d",&x);
	printf("Masukan bilangan 2 :");
	scanf("%d",&y);
	printf("Masukan bilangan 3 :");
	scanf("%d",&z);	
	
	printf("\nNilai terbesar antara bilangan %d, %d dan %d adalah %d",x,y,z, maks(x,y,z));
	printf("\nNilai terkecil antara bilangan %d, %d dan %d adalah %d",x,y,z, min(x,y,z));
}

int maks(int a,int b,int c){
	if ((a>b)&(a>c)){
		return a;
	}else
	if ((b>a)&(b>c)){
		return b;
	}else
		return c; }
		
int min(int a,int b,int c){
	if ((a<b)&(a<c)){
		return a;
	}else
	if ((b<a)&(b<c)){
		return b;
	}else
		return c;	
}

