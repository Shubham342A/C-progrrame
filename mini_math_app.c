//mini math app;
//lets chill
#include<stdio.h>
#include<conio.h>
int table();
int square();
int counting();      // prototype function
int even();
int odd();
int eq();
int main()             //main function
{                      // main 
    int time;
    printf("How Many Time You Want To Run :");
    scanf("%d",&time);
    while(time--)
    {
   	   char ch;
	   printf("\nEnter What You Want \n");
	   printf("Table = t\n");
	   printf("Square = s\n");
	   printf("Counting = c\n");
	   printf("Even = e\n");
	   printf("Odd = o\n");
	   printf("Equation = x\n");
	   scanf(" %c", &ch);
	   if (ch=='t')       //table
	    {
		  printf("Which Table You want \n ");
		  table();
	    }
	   else if(ch=='s')  //square
	    {
		  printf("From you Want : ");
		  square();
     	}
	   else if(ch=='c')  //counting
	    {
		  printf("From : ");
		  counting();
	    }
	   else if(ch=='e')  //even
	   {
		  printf("From : ");
		  even();
	   }
	  else if(ch=='o')  //odd
	   {
		  printf("From : ");
		  odd();
	   }
	  else if(ch=='x')  //equation
	   {
		  eq();
	   }
	  else    //default
	   {
		  printf("You Enter Wrong  Character"); //default
	   }
    }	
	return 0;
}
int table()
{                      //table
	int i,t;
	scanf("%d",&t);
	for (i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",i,t,i*t);
	}
	
   return 0;	
}
int square()
{                      //square
  int a,b,i;
  scanf(" %d", &a);
  printf("To : ");
  scanf(" %d", &b);
  for (i=a;i<=b;i++)
  {
  	printf("%d * %d = %d\n",i,i,i*i);
  }
  return 0;
}
counting()
{                      //counting
	int i,a,b;
	scanf("%d",&a);
	printf("To :");
	scanf("%d",&b);
	for (i=a;i<=b;i++)
	{
		printf("%d\n",i);
	}
	return 0;
}
even()
{                      //even no
	int a,b,i;
	scanf(" %d", &a);
    printf("To : ");
    scanf(" %d", &b);
	for (i=a;i<=b;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
odd()
{                      //odd no
	int a,b,i;
	scanf(" %d", &a);
    printf("To : ");
    scanf(" %d", &b);
	for (i=a;i<=b;i++)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
	}
	return 0;
	}
int eq()
{                      //calculator
	int a,b;
	char ch;
	printf("Enter The Value Of A   : ");
	scanf("%d",&a);
	printf("Enter The Value Of B   : ");
	scanf("%d",&b);
	printf("Select Operator  : \n");
	printf(" Addition   :  +\n ");
	printf("Subraction :  -\n ");
	printf("Multiply   :  *\n ");
	printf("Division   :  /\n ");
	printf("Modulas    :  %% \n");
	scanf(" %c", &ch);
	if(ch=='+')
	{
		printf("Addition is %d\n",a+b);
	}
     else if(ch=='+')
	{
		printf("Subraction is %d\n",a-b);
	}
	 else if(ch=='*')
	{
		printf("Multiplication is %d\n",a*b);
	}
	 else if(ch=='/')
	{
		printf("Division is %d\n",a/b);
	}
	 else if(ch=='%')
	{
		printf("Modulas is %d\n",a%b);
	}
	else
	{
		printf("Wrong Oprator");
	}
	return 0;
}
