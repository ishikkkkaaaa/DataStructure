#include<stdio.h>

struct int_int{
	int a;
	int b;
};

int main(void){
	struct int_int a1;
	
	printf("addrress of a1.a = %p\naddrress of a1.b = %p", &a1.a, &a1.b);
}
