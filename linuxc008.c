#include <stdio.h>

int is_leap_year(int yearnum)
{
	if ((yearnum%400==0)||(yearnum%4==0&&yearnum%100!=00))
		return 1;
	else
		return 0;
}

int main(void)
{       
	int year;
	printf("please input year:\n");
	scanf("%d",&year);
	if(is_leap_year(year))
		printf("%d is leap year.\n", year);
	else
		printf("%d is not leap year.\n", year);
	return 0;	

}
