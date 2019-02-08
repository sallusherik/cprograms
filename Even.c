#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	if(t<=0)
	{
		printf("invalid");
	}
	else if(t%2==0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
	return 0;
}
