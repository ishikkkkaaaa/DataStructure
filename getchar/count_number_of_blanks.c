#include<stdio.h>
int main(void){
	int nc = 0, c;
	
	while((c = getchar())!= EOF)
	 if (c == ' ')
		++nc;
	
	printf("nc = %5d\n", nc);
	
}
