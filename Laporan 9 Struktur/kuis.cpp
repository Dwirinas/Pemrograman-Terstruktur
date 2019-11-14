#include<stdio.h>

struct tugas {
	int tugas1, tugas2;
};

struct nilai {
	int softskill, skill;
	struct tugas harian;
};

struct mhs_polines{
	char nim;
	char nama;
	struct nilai input;
	int total;
	char grade;
};

main(){
	struct mhs_polines polines;
	int jumlah;
	
	printf("NIM		: ");
	scanf("%s", &polines.nim);
	printf("Nama	: ");
	scanf("%s", &polines.nama);
	
	printf("<<Input Nilai Mahasiswa>>\n");
	printf("Softskill	: ");
	scanf("%d", &polines.input.softskill);
	printf("Skill	: ");
	scanf("%d", &polines.input.skill);
	
	printf("<<Input Nilai Tugas>>\n");
	printf("Tugas 1		: ");
	scanf("%d", &polines.input.harian.tugas1);
	printf("Tugas 2 : ");
	scanf("%d", &polines.input.harian.tugas2);
	
	printf("<<Data Mahasiswa>>");
	printf("\nNIM : %s", polines.nim );
	printf("Nama : %s", polines.nama);
	printf("<<Nilai>>");
	printf("Softskill : %d", polines.input.softskill);
	printf("Skill : %d", polines.input.skill);
	printf("Tugas 1 : %d", polines.input.harian.tugas1 );
	printf("Tugas 2 : %d", polines.input.harian.tugas2 );
	
	jumlah =((polines.input.softskill*5)+(polines.input.skill*3) + polines.input.harian.tugas1 + polines.input.harian.tugas2)/10;
	

}
