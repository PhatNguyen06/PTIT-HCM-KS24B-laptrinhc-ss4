#include<stdio.h>

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	if(n % 3 == 0 && n % 5 != 0)
	{
		printf("n chi chia het cho 3, khong chia het cho 5");
	}
	else if(n % 3 != 0 && n % 5 == 0)
	{
		printf("n chi chia het cho 5, khong chia het cho 3");
	}
	else if(n % 3 == 0 && n % 5 == 0)
	{
		printf("n chia het cho ca 3 va 5");
	}
	else
	{
		printf("n khong chia het cho 3 va 5");
	}
	return 0;
}
