#include<stdio.h>
#include"extern_int.c"
int main(void){
	extern int a;
	printf("%d", a);
}
