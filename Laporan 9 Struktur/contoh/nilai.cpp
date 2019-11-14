#include <stdio.h> 
#include <string.h> 
#define MAKS 20 

struct tugas { 
int t1, t2;
};

struct  nilai {  
int softkill, skill; 
struct tugas harian;
}; 

struct student { 
char name[30];
char nim[15]; 
struct nilai mhs;

 };

main() 
{ 
	struct student data[MAKS]; 
	int i=0, jml; 
	int total;
	char grade;
	char lagi;
	do
	{ 
		printf("Name : "); 
		gets(data[i].name); 
		printf("Nim : ");
		gets(data[i].nim);
		
		printf("\n<<Masukkan Nilai>>");
		printf("\nMasukkan nilai Softkill = ");
		scanf("%d",&data[i].mhs.softkill);
		printf("\nMasukkan nilai skill = ");
		scanf("%d",&data[i].mhs.skill);
		printf("\n<<Masukkan nilai tugas>>");
		printf("\nNilai tugas 1 dan tugas 2 (XXX/XXX)");
		scanf("%d/%d",&data[i].mhs.harian.t1,
		&data[i].mhs.harian.t2);
		i++;
		fflush(stdin); 			
		printf("\nMau memasukkan data lagi [Y/T] ?"); 
		lagi = getchar( ); 		
		fflush(stdin);			
		
} while(lagi == 'Y' || lagi == 'y');
	jml = i; 
	printf("\nDATA MAHASISWA\n"); 
	for (i=0; i<jml; i++) 		
	
	{
 	printf("\n\nName : %s",data[i].name);
 	printf("\nNim  : %s",data[i].nim);
 	printf("\nNILAI ANDA !!!!");
 	printf("\nJenis	|Nilai");
 	printf("\nSoftkill| %d",data[i].mhs.softkill);
 	printf("\nSkill	|%d",data[i].mhs.skill);
 	printf("\nTugas 1	|%d",data[i].mhs.harian.t1);
 	printf("\nTugas 2	|%d",data[i].mhs.harian.t2);
 	total=(((data[i].mhs.softkill*5)+ (data[i].mhs.skill*3) + (data[i].mhs.harian.t1 + data[i].mhs.harian.t2))/10);
 	printf("\nTotal nilai : %d", total);
 	if (total>90){
 		printf("\nGrade = A");
 		}else if(total>80){
 			printf("\nGrade = B");}
 			else if(total>70){
 				printf("\nGrade = C");}
 				else if(total>50){
 					printf("\nGrade = D"); }
 					else if(total>40){
 						printf("\nGrade = E");
					 }
					else { 
					printf("\nNilai anda tidak memenuhi !!!");
					
					}
			 }
}
