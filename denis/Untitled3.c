#include<stdio.h>

struct abc{
	int sapid;
	char name[100];
};
int main(){
	struct abc a1[4]; 
	int i;
	
	printf("%d", sizeof(a1));
	/*for(i = 0; i <= 3; i++)
	{
		scanf("%d %s", &a1[i].sapid, &a1[i].name);
	}
	
	printf("you entered the data \n");
	
	for(i = 0; i <= 3; i++)
	{
		printf("%d\t%s\n", a1[i].sapid, a1[i].name);
	}*/

}


