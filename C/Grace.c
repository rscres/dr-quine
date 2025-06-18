#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#define NAME "Grace_kid.c"
#define CODE "#include <stdio.h>%1$c#include <fcntl.h>%1$c#include <sys/stat.h>%1$c#define NAME %2$cGrace_kid.c%2$c%1$c#define CODE %2$c%3$s%2$c%1$c#define A() int main(){dprintf(open(NAME, O_RDWR | O_CREAT | O_TRUNC, S_IRWXU), CODE, 10, 34, CODE);}%1$c//I'm reproducing myself%1$cA()"
#define A() int main(){dprintf(open(NAME, O_RDWR | O_CREAT | O_TRUNC, S_IRWXU), CODE, 10, 34, CODE);}
//I'm reproducing myself
A()