#include<stdio.h>
int main()
{
	int num[100];
	int i,tem,j=0,k,ggkf;//j:������Ч���ֵĸ��� 
	int ins;
	for(i=0;i<100;i++)
	{
		scanf("%d",&tem);
		if(tem==-1)break;
		if(tem>=0&&tem<=100)
		{
			num[i]=tem;
			j++;	
		}
	}
	printf("%d\n\n",j);
	
	
		for(i=0;i<j;i++)//mmpp xu 
	{
		for(k=0;k<j-i-1;k++)
		{
			if(num[k]<num[k+1])
			{
				ins=num[k];
				num[k]=num[k+1];
				num[k+1]=ins;//...
			}
		}
	}
	
	
	for(i=0;i<j;i++)//��������Ľ�� 
	{
		printf("%d��",num[i]);
	}
	printf("\n\n");//i,k
	
	
	for(i=0;i<100;i++) 
	{
		ggkf=0;
		for(k=0;k<j;k++) 
		{
			if(num[k]==i)
			{
				ggkf+=1;	
			}	
		}
		
		 	if(ggkf!=0)
		 {
			printf("%d��%d��\n",i,ggkf);
		 } 
			else continue;
	} 
	return 0;
}










