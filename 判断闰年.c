#include<stdio.h>//是四的倍数而不是一百的倍数，或者即是四的倍数又是四百的倍数 
int main()
{
	int year;
	printf("输入一个年份"); 
	scanf("%d",&year);
	if(year%4==0&&year%100!=0||year%4==0&&year%400==0)
	{
		printf("是闰年"); 
	}
	else printf("不是闰年");
	return 0; 
}
