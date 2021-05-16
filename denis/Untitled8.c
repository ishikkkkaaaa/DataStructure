#include<stdio.h>

union int_int{
	int a;
	int b;
};

int main(void){
	union int_int a1;
	
	scanf("%d", &a1.a);
	printf("a1.a = %d", a1.a);
	
	scanf("%d", &a1.b);
	printf("a1.b = %d", a1.b);
}
