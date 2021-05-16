#include<stdio.h>

int main(void)
{
	int num, i;
	
	printf("Enter the number\n");
	scanf("%d", &num);
	
	for(i = 0; num; num >>= 1)
		if(num & 1)
			i = i+1;
	
	printf("total number of 1's = %d", i);
	
}
