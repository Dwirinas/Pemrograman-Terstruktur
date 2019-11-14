#include <stdio.h>
#include <string.h>

main(){
	char str1[]="HALO";
	char str2[]="harimau";
	char str3[]="halo";

	printf("Hasil pembandingan %s dengan %s --> %d\n", 
		str1, str2, strcmpi(str1, str2));
	printf("Hasil pembandingan %s dengan %s --> %d\n", 
		str2, str1, strcmpi(str2, str1));
	printf("Hasil pembandingan %s dengan %s --> %d\n", 
		str1, str3, strcmpi(str1, str3));
}

