#include<stdio.h>

struct abc{
	int a;
	char c;
};
int main(){
	struct abc a1;
	struct abc *ptr;
	
	ptr = &a1;
	
	scanf("%d %c", ptr->a, ptr->c);
	
	printf("you enter \n");
	
	printf("%d %c", ptr->a, ptr->c);
}
