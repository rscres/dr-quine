#include <stdio.h>

//This is a comment

void print() {
	char *str = "#include <stdio.h>%c%c//This is a comment%c%cvoid print() {%c%cchar *str = %c%s%c;%c%cprintf(str, 10, 10, 10, 10, 10 , 9, 34, str, 34, 10, 9, 10, 10, 10 , 10, 9, 10, 9, 10, 9, 10, 10);%c}%c%cint main(void) {%c%c//This is another comment%c%cprint();%c%creturn (0);%c}%c";
	printf(str, 10, 10, 10, 10, 10 , 9, 34, str, 34, 10, 9, 10, 10, 10 , 10, 9, 10, 9, 10, 9, 10, 10);
}

int main(void) {
	//This is another comment
	print();
	return (0);
}
