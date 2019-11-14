#include<stdio.h>
#include<conio.h>
#define maks 30

void input (int);
int findmax(int[],int);

int main(){
int n;

	printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- \n");
	printf("PROGRAM MENCARI NILAI MAX dari ARRAY Inputan");
	printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- \n\n");
	printf("Masukkan jumlah data = ");
	scanf("%d", &n);
	if(n>maks){
	}
input (n);
getch();
}

	void input (int n){
	int x[maks], max, i;
	
	for(i=0; i<n; i++){
	printf("Masukkan nilai ke-%d = ", i+1);
	scanf("%d", &x[i]);
	}
	max=findmax(x, n);
	printf("\nNilai terbesar adalah %d", max);
}

int findmax(int x[maks], int n){
int i, max;

	for(i=0; i<n; i++){
	if(i==0){
	max=x[0];
	}
	else{
	if(max<=x[i])
	max=x[i];
	}
	}
return max;
}

