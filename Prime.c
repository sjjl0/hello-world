#include <stdio.h> 
int main()
{
	int a;
	int b,c,d;//b计数，c最大，d求和 
	d=0;
	int i;
	for(a=100;a<999;a++)
	{
		int o=0;
		int m = a / 1 % 10;
		int n = a / 10 % 10;
		int x = a / 100 % 10;
		int u=m+n+x;
		int v=m*n*x;
		int w=m*m+n*n+x*x;
		for(i=2;i<a;i++)
		{
        if(a%i!=0)
			o++;
		else
			o=0;
			break;
		}
		for(i=2;i<u;i++)
		{
        if(u%i!=0)
			o++;
		else
			o=0;
			break;
		}
		for(i=2;i<v;i++)
		{
        if(v%i!=0)
			o++;
		else
			o=0;
			break;
		}
		for(i=2;i<w;i++)
		{
        if(w%i!=0)
			o++;
		else
			o=0;
			break;
		}
		if(o!=0)
		{
        	b++;
        	c=a;
        	d=d+a;	
		}
	}
	for(a=1000;a<9999;a++)
	{
		int oo=0;
		int mm = a / 1 % 10;
		int nn = a / 10 % 10;
		int xx = a / 100 % 10;
		int zz= a/ 1000 % 10;
		int uu=mm+nn+xx+zz;
		int vv=mm*nn*xx*zz;
		int ww=mm*+nn*nn+xx*xx+zz*zz;
		for(i=2;i<a;i++)
		{
        if(a%i!=0)
			oo++;
		else
			oo=0;
			break;
		}
		for(i=2;i<uu;i++)
		{
        if(uu%i!=0)
			oo++;
		else
			oo=0;
			break;
		}
		for(i=2;i<vv;i++)
		{
        if(vv%i!=0)
			oo++;
		else
			oo=0;
			break;
		}
		for(i=2;i<ww;i++)
		{
        if(ww%i!=0)
			oo++;
		else
			oo=0;
			break;
		}
		if(oo!=0)
		{
        	b++;
        	c=a;
        	d=d+a;	
		}
	}
	printf("个数为%d",b);
	printf("最大为%d",c);
	printf("和为%d",d);
} 
