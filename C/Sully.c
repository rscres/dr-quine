#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#define CODE "#include <stdio.h>%1$c#include <fcntl.h>%1$c#include <sys/stat.h>%1$c#include <stdlib.h>%1$c#include <string.h>%1$c#define CODE %4$c%5$s%4$c%1$cint main(int argc, char **argv) {%1$c%2$cint i = %3$d;%1$c%2$c(void)argc;%1$c%2$cif (strstr(argv[0], %4$c_%4$c)) i = i -1;%1$c%2$cif (i >= 0) {%1$c%2$c%2$cchar name[10];%1$c%2$c%2$csprintf(name, %4$cSully_%%d.c%4$c, i);%1$c%2$c%2$cdprintf(open(name, O_RDWR | O_CREAT, S_IRWXU | S_IRWXO), CODE, 10, 9, i, 34, CODE);%1$c%2$c%2$cchar buffer[100];%1$c%2$c%2$csprintf(buffer, %4$ccc Sully_%%d.c -o Sully_%%d; ./Sully_%%d%4$c, i, i, i);%1$c%2$c%2$csystem(buffer);%1$c%2$c}%1$c}"
int main(int argc, char **argv) {
	int i = 5;
	(void)argc;
	if (strstr(argv[0], "_")) i = i -1;
	if (i >= 0) {
		char name[10];
		sprintf(name, "Sully_%d.c", i);
		dprintf(open(name, O_RDWR | O_CREAT, S_IRWXU | S_IRWXO), CODE, 10, 9, i, 34, CODE);
		printf("%d\n", i);
		char buffer[100];
		sprintf(buffer, "cc Sully_%d.c -o Sully_%d; ./Sully_%d", i, i, i);
		system(buffer);
	}
}