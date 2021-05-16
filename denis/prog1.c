#include<stdio.h>

int main(void)
{
	char ch;
	
	scanf("%c", &ch);
	
	if('0' <= ch  && ch <= '9')
		printf("number is pressed");
	else if('A' <= ch  && ch <= 'Z')
		printf("UPPER CASE");
	else if('a' <= ch  && ch <= 'z')
		printf("lower case");
		
		
}
