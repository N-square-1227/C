#include<stdio.h>
#include<math.h> 
int main()
{
	int n,i;
	scanf("%d", &n);
	if(n<=1) printf("%d is not a prime number\n", n);
	else if(n==2||n==3) printf("%d is a prime number\n", n);
	else for(i = 2; i <=sqrt(n); i++)
	{
		if(n % i == 0)  printf("%d is not a prime number\n", n);
		else printf("%d is a prime number\n", n);
	}
	return 0;
}
