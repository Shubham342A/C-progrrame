#include<stdio.h>
#include<conio.h>
int main()
{
	int m,n,i,j,sum=0;
    scanf("%d",&m);   //scan m and n  
	scanf("%d",&n);   // m is intial no  n is final no 
	if (m<=n)  // when m is less than n
	{
	   for (i=m;i<=n;i++) 
	    {
		   sum+=i;
	    }
	      printf("the total from %d to %d is %d",m,n,sum);	
	}
	else if (n<m)
	{
		for (j=m;j>=n;j--)
	     {
		     sum+=j;
	     }
	         printf("the total from %d to %d is %d",m,n,sum);
	}
	
	return 0;
}
