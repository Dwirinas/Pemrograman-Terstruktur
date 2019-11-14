#include <stdio.h>
#include <string.h>
main(){
	char str1[]="slanK";
	char str2[]="SLank";
	char str3[]="SLank";

	printf("Hasil pembandingan %s dengan %s --> %d\n", str1, str2, strcmp(str1, str2));
	printf("Hasil pembandingan %s dengan %s --> %d\n", str2, str1, strcmp(str2, str1));
	printf("Hasil pembandingan %s dengan %s --> %d\n", str1, str3, strcmp(str1, str3));
}

