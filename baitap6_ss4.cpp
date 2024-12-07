#include<stdio.h>

int main()
{
	int so_dien;
	printf("Nhap so dien: ");
	scanf("%d", &so_dien);
	
	int tien;
	if(so_dien >= 0 && so_dien < 50)
	{
		tien = so_dien * 10000;
	}
	else if(so_dien >= 50 && so_dien < 100)
	{
		tien = (50 * 10000) + ((so_dien - 50) * 15000);
	}
	else if(so_dien >= 100 && so_dien < 150)
	{
		tien = (50 * 10000) + (50 * 15000) + ((so_dien - 100) * 20000);
	}
	else if(so_dien >= 150 && so_dien < 200)
	{
		tien = (50 * 10000) + (50 * 15000) + (50 * 20000) + ((so_dien - 150) * 25000);
	}
	else
	{
		tien = (50 * 10000) + (50 * 15000) + (50 * 20000) + (50 * 25000) + ((so_dien - 200) * 30000);
	}
	
	printf("So tien dien trong thang nay la: %d", tien);
	
	return 0;
}
