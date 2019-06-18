<<<<<<< HEAD
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
/*class Prime {
=======
class Number {
>>>>>>> upstream/master
public:
  Number(int num):mNum(num) {
  }
  Number(const Number &n):mNum(n.mNum) {
  }
  ~Number();
  NumberSet split() {
  	NumberSet ns;
  	int n = mNum;
  	while(n != 0) {
  	  int d = n % 10;
  	  Number dig(d);
  	  ns.add(dig);
  	  n = n / 10;
	}
	return ns;
  }
  bool isPrime() {
  	for(int i = 2; i < mNum; ++i) {
  	  if(mNum % i == 0)
  	    break;
	}
	if(i != mNum)
	  return false;
	return true;
  }
private:
  const int mNum;
};
class NumberSet {
private:
  Number *nums[20];
  int size;
public:
  NumberSet() {
  	size = 0;
  	for(int i = 0; i < 20; ++i)
  	  nums[i] = NULL;
  }
  ~NumberSet() {
  	for(int i = 0; i < size; ++i)
  	  delete nums[i];
  }
  bool add(const Number &n) {
  	if(size != 20 && nums[size] == NULL) {
	 nums[size] = new Number(n); 
     size += 1;
     return true;
    }
    return false;
  }
  Number sum() {
  	Number sum(0);
  	for(int i = 0; i < size; ++i) {
  	  if(nums[i] != NULL)
  	    sum.add(*(nums[i]));
	}
	return sum;
  }
};
class SuperPrime : public Number {
public:
  SuperPrime(int num);
  ~SuperPrime();

  bool isPrime();

  Prime sumBit();
  Prime multiBit();
  Prime sqaureSumBit();
private:
  const int num;
}
int main()
{
    SuperPrime sp(113);
    if(sp.isPrime()) {
        ; // do something
    }
}
