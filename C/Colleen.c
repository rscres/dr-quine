#include <stdio.h>

//This is a comment

void print() {
	char *str = "#include <stdio.h>%1$c%1$c//This is a comment%1$c%1$cvoid print() {%1$c%2$cchar *str = %3$c%4$s%3$c;%1$c%2$cprintf(str, 10, 9, 34, str);%1$c}%1$c%cint main(void) {%1$c%2$c//This is another comment%1$c%2$cprint();%1$c%2$creturn (0);%1$c}%1$c";
	printf(str, 10, 9, 34, str);
}

int main(void) {
	//This is another comment
	print();
	return (0);
}
