#include <stdio.h>

int main(void)
{
	int a[5],b,n,v,c=0;
	scanf("%d %d",&n,&v);
	for(b=0;b<n;b++)
	{
		scanf("%d",&a[b]);
	}
	for(b=0;b<v;b++)
	{
		c=c+a[b];
	}
	printf("%d",c);
	return 0;
}
