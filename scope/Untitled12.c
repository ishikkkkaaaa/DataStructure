//conditional operator ?: 
// int i = (condition) ? a : b ;
#include<stdio.h>
int main(void){
int a, b, c;

scanf("%d%d%d",&a,&b,&c);

printf("%-05d",a>b ? (a>c ? a:c ):(b>c ? b:c));
	}
