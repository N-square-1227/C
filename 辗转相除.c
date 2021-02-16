#include<stdio.h>
int main()
{
	int n, m, t,num1,num2;//还要保留原始num1，num2数据 
	printf("Please input two numbers :\n");
	scanf("%d%d",&num1,&num2);
	n=num1;
	m=num2;
	if(n < m)//保证n不小于m 
	{
		t = m;
		m = n;
		n = t;
	}
	
	while(n % m)//当余数为0时 退出循环，
	{
		t = n % m;
		n = m;//新一轮中的大数 
		m = t;//新一轮中的小数 
	}//一直让大数是n，小数是m。 
	printf("利用辗转相除法计算得到的最大公约数是：%d\n",m);
	printf("利用辗转相除法计算得到的最小公倍数是：%d\n",num1*num2/m);
	return 0;
 }
