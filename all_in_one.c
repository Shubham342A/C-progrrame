#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
// under Constustion===========================================================;
//int prime1;

//calling function-------------------------------------------------
void hello();
int  second();
int third();
float fourth();  //here we take flaot because area come in decimal no;
float fifth();
float sixth();
float seven();
int eight();
int nine();
int ten();
float meter();
float si();
int even();
int leap();
char vowel();
float greatest();
int marks();
float root();
int natural();
int odd();
int odd2();
float fact();
int fibo();
int arm();
float tsq();
//int palm();
//int prime1();
//int cont();
//int d1();
//int linear();

//main function-------------------------------------------------------
int main()
{
	int no;
	printf("\t\t\tMohan Lal Sukhadiya\t\t\t\n");
	printf("\t\t\tCs Practicle\t\t\n");
	printf("\nEnter No According Your Requirment\n");
	printf(" For 1 to 10 Practicle == Press 1\n");
	printf(" For 11 to 20 Practicle == Press 2\n");	
	printf(" For 21 to 25 Practicle == Press 3\n");		
//	printf(" For 31 to 40 Practicle == Press 4\n");
	scanf("%d",&no);
	
	//  if we Press "1" then compiler Run this Condition
	if(no==1)
	{
		int n;
		// 1 to 10 Practicle Name -----------------------------------------------------
		printf("Hello Word                                       = 1\n");
		printf("Declare variable And Print it                    = 2\n");
		printf("To Perform Arthmatic Operation                   = 3\n");
		printf("To Calculate Area Of Circle                      = 4\n");
		printf("To Calculate Area Of Rectangle                   = 5\n");
		printf("To Calculate Area Of Square                      = 6\n");
		printf("Centigrade To Farehenite                         = 7\n");
		printf("Swap 2 No with Third Variable                    = 8\n");
		printf("Swap 2 no Without Any Variable                   = 9\n");
		printf("Convert Sec into Hour And Min                    = 10\n");
		// ---------------------------------------------------------------------------------
		scanf("%d",&n);
		// if User Input 1 then Compiler 1st condition and run Hello Word
		if (n==1)
		{
			hello();
		}
		else if(n==2)
		{
			second();
		}
		else if(n==3)
		{
			third();
		}
		else if(n==4)
		{
			fourth();
		}
		else if(n==5)
		{
			fifth();
		}
		else if(n==6)
		{
			sixth();
		}
		else if(n==7)
		{
			seven();
		}
		else if(n==8)
		{
			eight();
		}
		else if(n==9)
		{
			nine();
		}
		else if(n==10)
		{
			ten();
		}
		
//--------------------------------default-------------------------------------------------------
		else 
		{
			printf("Please Enter Correct Number \n");
		}
		
	}
	// if we press "2" Then Compiler Run This Code
	else if(no==2)
	{
		int n;
		// 11 to 20 Practicle Name -----------------------------------------------------
		printf("Convert cm into inch and meter                  = 1\n");
		printf("Compound intrest and simple intrest             = 2\n");
		printf("Check No Is Even Or Odd                         = 3\n");
		printf("Check Year Is leap yera or not                  = 4\n");
		printf("identify charcter is vowel or consonants        = 5\n");
		printf("to Find Greatest No                             = 6\n");
		printf("Print Marksheet                                 = 7\n");
		printf("to Find Root                                    = 8\n");
		printf("To Print Natural No                             = 9\n");
		printf("To Print Even no series                         = 10\n");
		// ---------------------------------------------------------------------------------
		scanf("%d",&n);
		if (n==1)
		{
			meter();
		}
		else if(n==2)
		{
			si();
		}
		else if(n==3)
		{
			even();
		}
		else if(n==4)
		{
			leap();
		}
		else if(n==5)
		{
			vowel();
		}
		else if(n==6)
		{
			greatest();
		}
		else if(n==7)
		{
			marks();
		}
		else if(n==8)
		{
			root();
		}
		else if(n==9)
		{
			natural();
		}
		else if(n==10)
		{
			odd();
		}
		else 
		{
			printf("Please Enter Correct Number \n");
		}
	}
	else if(no=3)
	{
		int n;
		printf("To Print Odd No Series                          = 1\n");
		printf("To Find Factorial Of Number                     = 2\n");
		printf("To Find Fibonacci series                        = 3\n");
		printf("To Check No Is Armstrong Or Not                 = 4\n");
		printf("To Print Table And Square Of Number             = 5\n");
//		printf("To Check No Is Palindrome Or Not                = 6\n");
//		printf("To Check Given no Is Prime Or Not               = 7\n");
//		printf("Break And Continue Statement using Loop         = 8\n");
//		printf("To Print 1D Array                               = 9\n");
//		printf("Linear Search In 1D Array                       = 10\n");
		// ---------------------------------------------------------------------------------
		scanf("%d",&n);
		if (n==1)
		{
			odd2();
		}
		else if(n==2)
		{
			fact();
		}
		else if(n==3)
		{
			fibo();
		}
		else if(n==4)
		{
			arm();
		}
		else if(n==5)
		{
			tsq();
		}
//		else if(n==6)
//		{
//		    palm();
//		}
//		else if(n==7)
//		{
//			prime1();
//		}
//		else if(n==8)
//		{
//			cont();
//		}
//		else if(n==9)
//		{
//			d1();
//		}
//		else if(n==10)
//		{
//			linear();
//		}
		else 
		{
			printf("Please Enter Correct Number \n");
		}
	}
	else 
	{
	   printf("Please Enter Correct Number \n");	
	}
	return 0;
}

//calling Function progrram---------------------------------------------

// --------------------------------------1 to 10 practicle--------------------------------------------
// 1 st Practicle "Print Hello Word"
void hello()
{
	printf("Hello World \n");
}

// 2nd Declare Variable and Print It
int second()
{
	int a=2,b=3;
	printf("In This Programme You can Go And Check Line No 260; to Know More;\n");
	printf("A = %d \n",a);
	printf("B = %d \n",b);
}

// 3rd Arthmatic Operation --------------------------------------------
int third()
{
	int a,b;
	printf ("Enter The Value Of A = ");
	scanf("%d",&a);
	printf ("Enter The Value Of B = ");
	scanf("%d",&b);
	printf("Addition       = %d\n",a+b);
	printf("Subraction     = %d\n",a-b);
	printf("Multiplication = %d\n",a*b);
	printf("Division       = %d\n",a/b);
	printf("Modulus        = %d\n",a%b);
	return 0;
	
}

//  4th area of circle--------------------------------------------------
float fourth()
{
	float r;
	printf("Enter Radius Of Circle = ");
	scanf("%f",&r);
	printf(" Area Of Circle = %.2f meter square\n",3.14*r*r);
	printf("Circumference Of Circle = %.2f meter\n",2*3.14*r);
	return 0;
}

// 5th Area Of Rectangle-----------------------------------------------------------
float fifth()
{
	float l,b;
	printf("Enter Length Of Rectangle  = ");
	scanf("%f",&l);
	printf("Enter Breadth Of Rectangle = ");
	scanf("%f",&b);
	printf("Area Of Rectangle          = %.2f meter Sqruare\n",l*b);
	printf("Circumference Of Rectangle = %.2f meter\n",2*(l+b));
	return 0;
}

// 6th Area Of Square -------------------------------------------------------
float sixth()
{
	float s;
	printf("Enter Side Of Square = ");
	scanf("%f",&s);
	printf("Area Of Square          = %.2f meter square\n",s*s);
	printf("Circumference Of Square = %.2f meter\n",4*s);
	return 0;
}

// 7th Convert Temprature From Celesius Degree To Farehenite ----------------------

float seven()
{
	float c;
	printf("Enter Temprature In Degree = ");
	scanf("%f",&c);
	printf("Temprature In Farehenite = %.2f farehnite\n",(c*9)/5+32);
	return 0;
}

// 8th swap two No with The Help Of Third Variable ;
int eight()
{
	int a,b,c;
	printf("Enter A = ");
	scanf("%d",&a);
	printf("Enter B = ");
	scanf("%d",&b);
	printf("Before Swapping\n");
	printf("A = %d \n B = %d \n",a,b);
	c=a;
	a=b;
	b=c;
	printf("After Swapping\n");
   	printf("A = %d \n B = %d \n",a,b);
   	return 0;
}

// 9th swap two no without third variable ;

int nine()
{
	int a,b;
	printf("Enter A = ");
	scanf("%d",&a);
	printf("Enter B = ");
	scanf("%d",&b);
	printf("Before Swapping\n");
	printf("A = %d \n B = %d \n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;printf("After Swapping\n");
   	printf("A = %d \n B = %d \n",a,b);
   	return 0;
}

// 10th convert sec into hour;

int ten()
{
   int sec,hour,min,h1,s1;
	printf("Enter Seconds : ");
	scanf("%d",&sec);
	hour=sec/3600;
	h1=sec%3600;
	min=h1/60;
	s1=h1%60;
	printf("H:M::S\n");
	printf("%d:%d:%d",hour,min,s1);
	return 0;	
}

// ------------------------------------------11  to 20 ---------------------------------------------
// 11 th convert cm into inch and m;
float meter()
{
	float cm;
	printf("Enter Centimeter To Convert = ");
	scanf("%f",&cm);
	printf("Centimeter into Meter       = %.2f m\n",cm/100);
	printf("Centimeter Into Inch        = %.2f inch\n",cm/2.54);
	return 0;
}

// 12 th find si and ci 
float si()
{
	float p,t,r;
	printf("Enter Principle Amount = ");
	scanf("%f",&p);
	printf("Enter Time In Year     = ");
	scanf("%f",&t);
	printf("Enter Rate Of Intrest  = ");
	scanf("%f",&r);
	
	printf("Simple Intrest      = %.2f\n",(p*t*r)/100);
	printf("Compound Intrest    = %.2f\n",p*pow(1+r/100,t));
	return 0;
}

// 13 th to Check No Is Even Or Odd ;

int even()
{
	int n;
	printf("Enter Any No = ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("Number Is Even");
		
	}
	else 
	{
		printf("Number Is Odd");
	}
}

// 14 th To Check Year Is Leap Or Not;
int leap()
{
	int n;
	printf("ENTER THE YEAR ");
	scanf("%d",&n);
	if((n%400==0)||(n%4==0))
	{
		printf("Year is leap year ");
	}
	else
	{
		printf("Year is not leap year ");
	}
	return 0;
}

// 15 th to Check Character is Vowel or Consonant
char vowel()
{
	char ch,m;
	printf("Enter Any Character = ");
	scanf("%s",&ch);
	if ((ch=='a')||(ch=='A')||(ch=='e')||(ch=='E')||(ch=='i')||(ch=='I')||(ch=='o')||(ch=='O')||(ch=='u')||(ch=='U'))
	{
		printf("Character Is Vowel");
	}
	
	else 
	{
		printf("Character Is Constant");
	}
	
}

//16th To find Greatest No into Three Variable;
float greatest()
{
	float a,b,c;
	 
	 	printf("A : ");
	 	scanf("%f",&a);
	 	printf("B : ");
	 	scanf("%f",&b);
	 	printf("C : ");
	 	scanf("%f",&c);
	 	if (a>b&&a>c)
	 	{
	 		printf("Greatest No is %.2f",a);
		 }
		 else if(b>c && b>a)
		 {
		 	printf("Greatest No is %.2f",b);
		 }
		 else if (a==b&&b==c&&c==a)
		 {
		 printf("ALL ARE SAME");
	     }
	     else
	     {
	     	printf("Greatest No is %.2f",c);
		 }
		 
	 }
	 
// 17 th marksheet
int marks()
{
	int rollno, std;
	float maths, physics, english, hindi, chemistry;
  char name[30], school_name[30];
  float per;

  printf("Enter your Roll No:");
  scanf("%d", &rollno);

  printf("Enter your name:");
  scanf(" %s", name);
  //gets(name);

  printf("Enter your School name:");
  scanf(" %s", school_name);
  //gets(school_name);

  printf("Enter your Standard:");
  scanf("%d", &std);

  printf("Enter marks of maths:");
  scanf("%f", &maths);

  printf("Enter marks of Physics:");
  scanf("%f", &physics);

  printf("Enter marks of english:");
  scanf("%f", &english);

  printf("Enter marks of hindi:");
  scanf("%f", &hindi);

  printf("Enter marks of Chemistry:");
  scanf("%f", &chemistry);

  printf("===================================================\n");
  printf("MARKSHEET OF STANDARD:%d, %s\n", std, school_name);
  printf("===================================================\n");
   printf("Roll No.: %d Student Name: %s\n", rollno, name);
  printf("---------------------------------------------------\n");
  printf("SUBJECT\t\t\tMARKS\n");
  printf("---------------------------------------------------\n");
  printf("Maths\t\t\t %.2f \n", maths);
  printf("Physics\t\t\t %.2f \n", physics);
  printf("English\t\t\t %.2f \n", english);
  printf("Hindi\t\t\t %.2f \n", hindi);
  printf("Chemistry\t\t %.2f \n", chemistry);
  printf("---------------------------------------------------\n");
  printf("Total Marks:\t\t%.2f\n", maths+physics+english+hindi+chemistry);
  printf("---------------------------------------------------\n");
  per=((maths+physics+english+hindi+chemistry)*100)/500;
  printf("Percentage : %.2f\n",per);
  printf("===================================================\n");
  

  return 0;
}

//18 th root;
float root()
{
	float a,b,c,d,s1,s2,m;
	printf("Enter The Value Of A = ");
	scanf("%f",&a);
	printf("Enter The Value Of B = ");
	scanf("%f",&b);
	printf("Enter The Value Of C = ");
	scanf("%f",&c);
	d=sqrt(b*b-4*a*c);
	m=2*a;
	s1=(-b+d)/m;
	s2=(-b-d)/m;
	printf("Square 1st = %.2f\n",s1);
	printf("Square 2nd = %.2f\n",s2);
	return 0;	
}

// 19 th print natural no ;
int natural()
{
	int i,a,b;
	printf("From : ");
	scanf("%d",&a);
	printf("To :");
	scanf("%d",&b);
	for (i=a;i<=b;i++)
	{
		printf("%d\n",i);
	}
}

// 20 th print even No 
int odd()
{
    int a,b,i;
    printf("From : ");
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
}

//--------------------------------------21to 30----------------------------------------------------------

//21 th Print Odd No
int odd2()
{
	int a,b,i;
    printf("From : ");
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
}

// 22th to Find Factorial No 

float fact()
{
	int i,n,fact=1;
printf("ENTER ANY NO ");
scanf("%d",&n);
for (i=1;i<=n;i++)
 {
 	fact=fact*i;
 }
 printf("THE FACTORIAL OF %d is = %d",n,fact);
 return 0;
}

//23 To Print Fibonanci
int fibo()
{
	int a=0,b=1,m,c,i;
	printf("Enter Any No = ");
	scanf("%d",&m);
	for (i=1;i<=m;i++)
	{
		c=a+b;
		printf("%d\t ",c);
		a=b;
		b=c;
	}
	return 0;
}

//24 to Check No Is Armstrong Or Not 

int arm()
{
	int n,m,r,arm=0;
	printf("Enter Any No : ");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		r=n%10;
		arm+=r*r*r;
		n=n/10;
	}
	if (arm==m)
	{
		printf("Enter No Is Armstrong \n");
	}
	else
	{
		printf("Enter No Is Not Armstrong \n");
	}
	return 0;
}

// 25 To Print Table And Square ;

float tsq()
{
	int n;
	printf("For Table        : 1\n");
	printf("For Square       : 2\n");
	scanf("%d",&n);
	if (n==1)
	{
		float t;
		int i;
		printf("Which Table You Want = ");
		scanf("%f",&t);
		for (i=1;i<=10;i++)
		{
			printf("%.2f * %d = %.2f\n",t,i,t*i);
		}
		return 0;
	}
	if (n==2)
	{
		int  a,b;
		int i;
		printf("From = ");
		scanf("%d",&a);
		printf("To   = ");
		scanf("%d",&b);
		for(i=a;i<=b;i++)
		{
			printf("%d * %d = %d \n",i,i,i*i);
			
		}
		
	}
	return 0;
}

//// 26 to Check No Is Palindrome Or Not
//
//int palm()
//{
//	int n,m,r,palm=0;
//	printf("Enter any Number : ");
//	scanf("%d",&n);
//	m=n;
//	while(n>0)
//	{
//		r=n%10;
//		palm=palm*10+r;
//		n=n/10;
//	}
//	if(palm==m)
//	{
//		printf("Enter No Is palindrome \n");
//	}
//	else 
//	{
//		printf("Enter No Is Not Palindrome\n");
//	}
//}
//
//// 27 To Check Number Is Prime Or Not
//int prime1()
//{
//	printf("Uder Construction");
//}
//
//// 28

