#include<stdio.h>
int main(void){
	int cdigit[10];
	int i, c;
	
	for(i=0 ; i<=9 ; i++)
		cdigit[i] = 0;
	
	while((c = getchar()) != EOF)
		if(c >= '0' && c <= '9')
			++cdigit[c - '0']; // cdigit[x] = cdigit[x] + 1
		
	for(i=0 ; i<=9 ; i++)
		printf("%d ", cdigit[i]);
}
