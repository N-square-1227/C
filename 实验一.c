#include<stdio.h>
int main()
{
	int i,n;
	float sum=0.0;
	for(i=1;i<=100;i++)
	{
		if(i%2==0&&i!=1)
			{
				n=-1;
			}
		else n=1;
		sum+=1.0/i*n;//Ã»´øÉÏ.0 !
	}
	printf("%.6f",sum);
	return 0; 
 } 
 
