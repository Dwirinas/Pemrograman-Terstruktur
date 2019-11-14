int i = 273; 		//variabel eksternal 
void tambah(void); 
main(){ 
	extern int i; //variabel eksternal

	printf("Nilai awal i = %d\n", i); 
	i += 7; 
	printf("Nilai i kini = %d\n", i); 
	tambah(); 
	printf("Nilai i kini = %d\n", i); 
	tambah(); 
	printf("Nilai i kini = %d\n\n", i);
}
	void tambah(void)
	{ 
	int i = 10;		 //variabel lokal

	i++; 
	printf("Nilai i dalam fungsi tambah() = %d\n", i);
}

