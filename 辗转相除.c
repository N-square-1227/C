#include<stdio.h>
int main()
{
	int n, m, t,num1,num2;//��Ҫ����ԭʼnum1��num2���� 
	printf("Please input two numbers :\n");
	scanf("%d%d",&num1,&num2);
	n=num1;
	m=num2;
	if(n < m)//��֤n��С��m 
	{
		t = m;
		m = n;
		n = t;
	}
	
	while(n % m)//������Ϊ0ʱ �˳�ѭ����
	{
		t = n % m;
		n = m;//��һ���еĴ��� 
		m = t;//��һ���е�С�� 
	}//һֱ�ô�����n��С����m�� 
	printf("����շת���������õ������Լ���ǣ�%d\n",m);
	printf("����շת���������õ�����С�������ǣ�%d\n",num1*num2/m);
	return 0;
 }
