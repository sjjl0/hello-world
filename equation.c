#include <stdio.h>
#include <math.h>
int main(void)
{
	printf("输入二元一次方程各项系数以及方程的值求解方程\n");
	double a, b, c, d, e, f, o, p, q, x, y;
	scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);
	o = a * e - b * d;
	p = c * e - b * f;
	q = a * f - c * d;
	if (p!=0&&q!=0)
	{
		printf("该方程无解\n");
	}
	else
	{

		x = o / p;
		y = o / q;
		printf("x的值为%lf\n", x);
		printf("y的值为%lf\n", y);
	}
	return 0; 
}
}
