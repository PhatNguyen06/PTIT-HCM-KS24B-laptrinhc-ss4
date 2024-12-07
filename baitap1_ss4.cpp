#include<stdio.h>

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	if(n < 0)
	{
		printf("Day la so am ");
	}
	else if(n > 0)
	{
		printf("Day la so duong ");
	}
	else
	{
		printf("N la so 0");
	}
	
	
	return 0;
}
