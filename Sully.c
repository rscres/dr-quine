#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#define CODE "#include <stdio.h>%1$c#include <fcntl.h>%1$c#include <sys/stat.h>%1$c#include <stdlib.h>%1$c#define CODE %4$c%5$s%4$c%1$c%1$cint main() {%1$c%2$cint x = %3$d;%1$c%2$cif (x > 0) {%1$c%2$c%2$cchar name[10];%1$c%2$c%2$csprintf(name, %4$cSully_%%d.c%4$c, x);%1$c%2$c%2$cchar *code = CODE;%1$c%2$c%2$cdprintf(open(name, O_RDWR | O_CREAT, S_IRWXU | S_IRWXO), code, 10, 9, x - 1, 34, code);%1$c%2$c%2$cchar buffer[100];%1$c%2$c%2$csprintf(buffer, %4$ccc Sully_%%d.c -o Sully_%%d; ./Sully_%%d%4$c, x, x, x);%1$c%2$c%2$csystem(buffer);%1$c%2$c}%1$c}"
int main() {
	int x = 5;
	if (x >= 0) {
		char name[10];
		sprintf(name, "Sully_%d.c", x);
		dprintf(open(name, O_RDWR | O_CREAT, S_IRWXU | S_IRWXO), CODE, 10, 9, x - 1, 34, CODE);
		char buffer[100];
		sprintf(buffer, "cc Sully_%d.c -o Sully_%d; ./Sully_%d", x, x, x);
		system(buffer);
	}
}