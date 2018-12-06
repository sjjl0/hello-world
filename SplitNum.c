#include <stdio.h>
int main()
{
	int a,b[100];
	int i;
	int j;
	int h=0;
	int c;
	scanf ("%d",&a);
	for(i=0;i<100;i++)
		b[i]=0;
	while(a>0)
	{
		b[h]=a%10;
		a=a/10;
		h++;
	}
	for(i=0;i<100;i++)
		for(j=0;j<i-1;j++)
		{
			if(b[j+1]<b[j])
			{
				c=b[j+1];
				b[j+1]=b[j];
				b[j]=c;
			}
		}
	for(i=0;i<100;i++)
	{
		if(b[i]!=0)
			printf("%d ",b[i]);
	}
	return 0;
}
