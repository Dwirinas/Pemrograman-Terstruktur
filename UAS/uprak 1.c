#include<stdio.h>
#include<stdlib.h>

void inputdata();
void pencarian(int);
	FILE *f_struktur; 
	char jawaban;
	int sudah_benar;
	
	int carikode;
	int i;
	struct{
		int kode;
		char nama[60];
		char alamat[250];
		char tgllahir[10];
	}karyawan;

main(){
	inputdata();
	system("cls");
	tampilkan();
	system("cls");
	printf("Cari Karyawan");
	printf("Masukkan Kode : ");

}

void inputdata(){
	if((f_struktur = fopen("DAFBUK.DAT","wb")) == NULL)
	{
	 
	printf("File tidak dapat diciptakan!\n"); 
	exit(1);
	}
	
	do
	{
		fflush(stdin);
		printf("Masukkan Data Karyawan\n");
		printf("kode : ");
		scanf("%d", &karyawan.kode);
		printf("Nama : "); 
		scanf("%s", &karyawan.nama);
		printf("Alamat :"); 
		scanf("%s", &karyawan.alamat);
		printf("Tanggal lahir (DD-MM-YYYY) : ");
		scanf("%s", &karyawan.tgllahir);
		fflush(stdin); 
		fwrite(&karyawan,sizeof(karyawan), 1, f_struktur); 
		printf("\nMau merekam data lagi[Y/T]?"); 
		jawaban = getchar();
		printf("\n");
	}while(jawaban == 'Y'|| jawaban == 'y'); 
}
void tampilkan(){
	printf("Data Karyawan\n");
	if((f_struktur = fopen("DATAKARYAWAN.DAT","rb")) != NULL)
	{

	while(fread(&karyawan, sizeof(karyawan), 1, f_struktur) == 1) 
	printf("%2s %-20s %-20s %s\n\n", "Kode", "Nama", "Alamat", "Tanggal lahir");
	printf("%2s %-20s %-20s %s\n\n", "---", "---", "----", "-------");
	printf("%2s %-20s %-20s %s\n\n",	i++,karyawan.kode,karyawan.nama, karyawan.alamat, karyawan.tgllahir); 

	printf("\n");
	fclose(f_struktur);	
	}
}

