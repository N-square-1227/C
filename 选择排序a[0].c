#include<stdio.h> 
int main()
{
	int a[6];
	int i,min,j;
	printf("Please input five numbers : \n");
	for( i = 1; i < 6; i++) scanf("%d", &a[i]);
	
	for( i = 1; i < 6; i++)
		
	{	
		min=i;//最小的数的下标
		for(j = i+1; j < 6; j++)
		if(a[min] > a[j])  
		min=j;
		if(min!=i)//如果他不是最小的，就交换
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
