#include <stdio.h>
int main()
{
	long long a;
	long long b=0;
	scanf("%d",&a);
	long long i;
		for(i=2;i<a;i++)
		{
        if(a%i==0)
		{
        	b++;
        }
    }

    if(b==0)
	{
        printf("%d是素数。\n", a);
    }
	else
	{
        printf("%d不是素数。\n", a.);
    }
	return 0;
}
