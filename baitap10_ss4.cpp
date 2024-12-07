#include<stdio.h>

int main()
{
	int a, b, c;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	
	if(a < b && a < c && b < c)
	{
		printf("%d %d %d", a, b, c);
	}
	else if(a < b && a < c && c < b)//a c b
	{
		printf("%d %d %d", a, c, b);
	}
	else if(b < a && b < c && a < c)
	{
		printf("%d %d %d", b, a, c);
	}
	else if(b < a && b < c && c < a)//bca
	{
		printf("%d %d %d", b, c ,a);
	}
	else if(c < a && c < b && a < b)
	{
		printf("%d %d %d", c, a, b);
	}
	else 
	{
		printf("%d %d %d", c, b, a);
	}
	
	return 0;
}
