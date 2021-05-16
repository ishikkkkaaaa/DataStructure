#include<stdio.h>

union abc{
	int a;
	char b;
};

int main(void){
	union abc a1;
	a1.a = 4;
	a1.b = 2;
	
	printf("%d %c", a1.a, a1.b);
}
