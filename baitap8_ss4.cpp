#include<stdio.h>

int main()
{
	int a, b, c;
	printf("Nhap canh thu 1: ");
	scanf("%d", &a);
	printf("Nhap canh thu 2: ");
	scanf("%d", &b);
	printf("Nhap canh thu 3: ");
	scanf("%d", &c);
	
	if(a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0)
	{
		printf("La 3 canh tam giac");
	}
	else printf("khong phai 3 canh tam giac");
	
	return 0;
}
