#include<stdio.h> 
int main()
{
	int a[6];
	int i,min,j;
	printf("Please input five numbers : \n");
	for( i = 1; i < 6; i++) scanf("%d", &a[i]);
	
	for( i = 1; i < 6; i++)
		
	{	
		min=i;//��С�������±�
		for(j = i+1; j < 6; j++)
		if(a[min] > a[j])  
		min=j;
		if(min!=i)//�����������С�ģ��ͽ���
		{
			a[0]= a[min];
			a[min] = a[i];
			a[i] = a[0];
		}
    }
	for(i = 1; i < 6; i++)
	printf("%d ", a[i]);
	return 0;
 }
