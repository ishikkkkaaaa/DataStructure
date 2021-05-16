#include<stdio.h>

union int_int{
	int a;
	char b;
	char c;
	char d;
	char e;
};

int main(void){
	union int_int a1;
	printf("%d", sizeof(a1));
	
}
