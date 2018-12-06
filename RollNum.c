#include <stdio.h>
int main()
{
	int a,b,c;
	c=0;
	scanf ("%d",&a);
	b=a;
	while(b>0)
	{
		c=c*10+b%10;
		b=b/10;
	}
	if(c==a)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
