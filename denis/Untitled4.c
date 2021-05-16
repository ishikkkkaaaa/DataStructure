#include<stdio.h>

struct int_char{
	int a;
	char b;
	char c;
	char d;
};

int main(void){

	struct int_char a1;	
	a1.a = 10;
	a1.b = 'z';
	
	printf("%d %c size of a1 = %d", a1.a, a1.b, sizeof(a1));
}
