#include<stdio.h> 
int main()
{
	int a[5];
	int i,t,min;
	printf("Please input five numbers : \n");
	for( i = 0; i < 5; i++)
	scanf("%d", &a[i]);
	
	for( i = 0; i < 5; i++)
		min=i;//��С�������±�
	for(int j = i+1; j < 5; j++)
	if(a[min] > a[j])  
	min=j;
	if(min!=i)//�����������С�ģ��ͽ���
	{
		t= a[min];
		a[min] = a[i];
		a[i] = t;
	}
	}
	for(i = 0; i < 5; i++)
	printf("%d ", a[i]);
	return 0;
 }
