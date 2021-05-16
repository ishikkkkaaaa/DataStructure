#include<stdio.h>

struct abc{
	int a;
	int b;
	double c;
};
int main(){
	struct abc a1;
	printf("size of a1 = %d", sizeof(a1));	
}
