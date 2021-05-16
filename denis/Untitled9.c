#include<stdio.h>

union int_int{
	int a;
	int b;
};

int main(void){
	union int_int a1;
	
	printf("addrress of a1.a = %p\naddrress of a1.a = %p", &a1.a, &a1.b);
}
