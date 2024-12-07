#include<stdio.h>

int main()
{
	int day, month, year;
	printf("Nhap vao ngay: ");
	scanf("%d", &day);
	printf("Nhap vao thang: ");
	scanf("%d", &month);
	printf("Nhap vao nam: ");
	scanf("%d", &year);
	
	int ktra_nam_nhuan = 0;
	
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		ktra_nam_nhuan = 1;
	}
	else 
	{
		ktra_nam_nhuan = 0;
	}
	
	int ktra_thang = 0;
	if(month < 1 || month > 12)
	{
		ktra_thang = 0;
	}
	else 
	{
		ktra_thang = 1;
		int days;
		switch (month) 
		{
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31; 
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
        	days = ktra_nam_nhuan == 1 ? 29 : 28;
            break;
        default:
            days = 0;
            break;
    	}
    	
    	int ktra_ngay = 0;
		if(day < 1 || day > days)
		{
			ktra_ngay = 0;
		}
		else 
		{
			ktra_ngay = 1;
		}
		
		
		if(ktra_thang == 1 && ktra_nam_nhuan == 1 && ktra_ngay == 1)
		{
			printf("Ngay thang nam hop le");
		}
		else
		{
			printf("Ngay thang nam khong hop le");
		}	
	}
	
	return 0;
}
