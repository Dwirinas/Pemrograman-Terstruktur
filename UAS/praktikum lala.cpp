#include<stdio.h>
#include<stdlib.h>

//define
void inputdata();
void pencarian(int);
	FILE *f_struktur;
	char jawaban;
	int sudah_benar;
	int kodecari;

	struct{
		int kode;
		char nama[60];
		char alamat[250];
		char tgllahir[10];
	}karyawan;

//declare
void inputdata(){
		if((f_struktur = fopen("DATAKARYAWAN.DAT","wt")) == NULL){
		printf("File tidak dapat diciptakan!\n");
	//	exit(1);
	}
	do
	{
  		fflush(stdin); /* Hapus isi penampung keyboard */
  		puts("Masukan Data Karyawan");
  		puts("-------------------------------");
  		fflush(stdin);
  		puts("");
  		printf("Kode Karyawan	:");
		scanf("%d",&karyawan.kode);
		fflush(stdin);
		printf("Nama Karyawan	:");
		gets(karyawan.nama);
		fflush(stdin);
		printf("Alamat Karyawan	:");
		gets(karyawan.alamat);
		fflush(stdin);
		printf("Tanggal lahir	:");
		gets(karyawan.tgllahir);
		fflush(stdin);
		fflush(stdin); // hapus isi penampung keyboard
		
		//rekan sebuah data bertipe strukur
	
	
		fwrite(&karyawan,sizeof(karyawan), 1, f_struktur);
	fflush(stdin);
	printf("\nMau mecari data lagi[Y/T]?");
	jawaban = getchar();
	printf("\n");
    }while(jawaban == 'Y'|| jawaban == 'y');
   
    fclose(f_struktur);
}


void pencarian(int kode){
	int ada;
	    do
    {
    	if((f_struktur = fopen("DATAKARYAWAN.DAT","r")) == NULL){
		printf("File tidak dapat diciptakan!\n");
			//	exit(1);
	}

	while(fread(&karyawan, sizeof(karyawan), 1, f_struktur) == 1){
			printf("%2s. %-20s %-20s %s\n\n", "Kode","Nama","Alamat","Tanggal lahir");
			printf("%2s. %-20s %-20s %s\n\n", "--","----","----","----");
		
		if (karyawan.kode== kode){
			printf("%4d. %-20s %-20s %s\n\n", karyawan.kode,karyawan.nama, karyawan.alamat,karyawan.tgllahir);
		}else{
		
		printf("Data tidak ditemukan!\n");
			break;}
	
	}

	fflush(stdin);
	printf("\nMau mecari data lagi[Y/T]?");
	jawaban = getchar();
	printf("\n");
    }while(jawaban == 'Y'|| jawaban == 'y');
    fflush(stdin);
    system("cls");
    	
    fclose(f_struktur);
}
main(){
	
	//used
	inputdata();
	
	system("cls");
	printf ("Cari Karyawan : ");
	scanf ("%d",&kodecari); 
	pencarian(kodecari);

	}
