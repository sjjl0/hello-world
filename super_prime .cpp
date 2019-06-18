#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	int d,da,db,dc;
	int ed,eda,edb,edc;
	int i,j,k;
	int x=0,y=0,z=0;
	int m,n;
	for(i=1;i<10;i++)
		for(j=0;j<10;j++)
			for(k=0;k<10;k++)
			{
				a=i;
				b=j;
				c=k;
				d=i*100+j*10+k;
				da=a+b+c;
				db=a*b*c;
				dc=a*a+b*b+c*c;
				for(m=2;m<d-1;m++)
					if(d%m==0)
						ed=1;
				for(m=2;m<da-1;m++)
					if(da%m==0)
						eda=1;
				for(m=2;m<db-1;m++)
					if(db%m==0)
						edb=1;
				for(m=2;m<dc-1;m++)
					if(dc%m==0)
						edc=1;
				if(ed!=1&&eda!=1&&edb!=1&&edc!=1)
				{
					x++;
					y+=d;
					z=d;	
				}
				ed=0;
				eda=0;
				edb=0;
				edc=0;
			}
	cout<<"个数为"<<x<<"和为"<<y<<"最大为"<<z<<endl;
	return 0;
 } 
