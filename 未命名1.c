#include  <stdio.h>
int main()
{
	int sum(int x,int y);
	int a,b,c;
	scanf("%d,%d",&a,&b);
	c=sum(a,b);
	printf("sum=%d\n",c);
	return 0;
}
int sum(int x,int y)
{
	int z;
	z=x+y;
	return(z);
}
