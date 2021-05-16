#include<stdio.h>

int main(void){
	int i, n;
	char s[100];
	
	gets(s);
	
	n = 0, i= 0;
	while(s[i] != '\0'){
	if(s[i] >= '0' && s[i] <= '9'){
		n = 10 * n + (s[i] - '0');
		i++;
	}
	else{
		i++;
		continue;
		}
	}
	printf("%d", n);
}
