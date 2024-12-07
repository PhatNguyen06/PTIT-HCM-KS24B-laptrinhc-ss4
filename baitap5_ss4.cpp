#include<stdio.h>

int main()
{
	int so1, so2, so3;
	printf("Nhap so thu nhat: ");
	scanf("%d", &so1);
	printf("Nhap so thu hai: ");
	scanf("%d", &so2);
	printf("Nhap so thu ba: ");
	scanf("%d", &so3);
	
	if(so1 <= so3 && so2 >= so3)
	{
		printf("So thu 3 nam trong khoang giua so 1 va so 2");
	}
	else if(so2 <= so3 && so1 >= so3)
	{
		printf("So thu 3 nam trong khoang giua so 1 va so 2");
	}
	else 
	{
		printf("So 3 khong nam giua");
	}
	
	return 0;
}
