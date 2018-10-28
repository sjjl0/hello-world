#include <stdio.h>
#include <math.h>
int main(void)
{
	printf("输入一元二次方程各项系数求解方程\n");
	//a*x*x+b*x+c==0
	double a, b, c, x, y, z, o;
	scanf("%lf%lf%lf", &a, &b, &c);
	z = b * b - 4 * a*c;
	if (z < 0)
	{
		printf("该方程无实数根\n");
	}
	else
	{
		o = sqrt(z);
		x = (-b + o) / (2 * a);
		y = (-b - o) / (2 * a);
		printf("该方程第一个解为%lf\n", x);
		printf("该方程第二个解为%lf\n", y);
	}
	getchar();
	return 0;
}
