#include<stdio.h>//����ð�� 
int main()
{
	int a[5];
	printf("input 5 nums\n");
	int i,j,t;
	
	for(i=0;i<5;i++) scanf("%d",&a[i]);
	
	for(i=0;i<4;i++)//����ѭ�������壺ѭ���кü��ˣ�һ���кü��� 
	{
		for(j=4;j>i;j--)//������for(j=0;j<5-i;j++) 
		{
			if(a[j]>a[j-1])
			{
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;	
			}
		} 
	}
	for(i=0;i<5;i++) printf("%d ",a[i]);
	return 0;
}
#include<stdio.h>//����ð�� 
int main()
{
	int a[5];
	printf("input 5 nums\n");
	int i,j,t;
	
	for(i=0;i<5;i++) scanf("%d",&a[i]);
	
	for(i=0;i<4;i++)//����ѭ�������壺ѭ���кü��ˣ�һ���кü��� 
	{
		for(j=4;j>i;j--)//������for(j=0;j<5-i;j++) 
		{
			if(a[j]>a[j-1])
			{
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;	
			}
		} 
	}
	for(i=0;i<5;i++) printf("%d ",a[i]);
	return 0;
}

#include<stdio.h>//�㷨�Ż� 
int main()
{
	int a[6];
	printf("input 5 nums\n");
	int i,j,t;
	
	for(i=1;i<6;i++) scanf("%d",&a[i]);
	
	for(i=1;i<5;i++)//����ѭ�������壺ѭ���кü��ˣ�һ���кü��� 
	{
		for(j=5;j>i;j--)//������for(j=1;j<6-i;j++) 
		{
			if(a[j]>a[j-1])
			{
				a[0]=a[j];
				a[j]=a[j-1];
				a[j-1]=a[0];	
			}
		} 
	}
	for(i=1;i<6;i++) printf("%d ",a[i]);
	return 0;
}

