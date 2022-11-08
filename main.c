#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	
	printf("input a word: ");
	 scanf("%c", &a);
	
	printf("input a word: ");
	 scanf("\n %c", &b);

	printf("input a word: ");
	 scanf("\n %c", &c);

	
	FILE*fp;
	fp = fopen("sample.txt", "w");
    fprintf(fp, "%c \n", a);
    fprintf(fp, "%c \n", b);
    fprintf(fp, "%c", c);
	
	fclose(fp);
	
	return 0;
}
