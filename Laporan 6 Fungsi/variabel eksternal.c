int i; 
void tambah(void);

main()
{ 
	extern int i;
	printf("Nilai awal i = %d\n", i); 
	i += 7; 
	printf("Nilai i kini = %d\n", i); 
	tambah(); 
	printf("Nilai i kini = %d\n", i); 
	tambah(); 
	printf("Nilai i kini = %d\n", i); 
	puts("");
}
void tambah(void)
{ 
	extern int i;
	i++;
}
