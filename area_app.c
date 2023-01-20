//to find area of diffrent shape
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
//-----------------------------------------------------
float square();     //2d function
float rectangle();
float circle();
float scalen();
float isoscalen();
float equivalent();
float rightangle();
float rhombus();
float parallelogram();
float trapezium();    //2d function
//------------------------------------------------------
float cube();           // 3d function
float cuboid();
float sphere();
float hemisphere();
float cylinder();
float cone();          // 3d function
//------------------------------------------------------


int main()
{
	int time;
	printf("How Many Time You Want To Run  ");
	scanf("%d",&time);
	while(time--)
	{
		int n;
		printf("\nFor 2d Shape : 2\n");
		printf("For 3d Shape : 3\n");
		scanf("%d",&n);
//------------------------2d main------------------------------
		if(n==2)
		{
			int m;
			printf("\nDont Give Space");
			printf("\n square       = 1\n");
			printf("rectangle      = 2\n");
			printf("circle         = 3\n");
			printf("scalen         = 4\n");
			printf("isoscalen      = 5\n");
			printf("equivalent     = 6\n");
			printf("rightangle     = 7\n");
			printf("rhombus        = 8\n");
			printf("parellelogram  = 9\n");
			printf("trapezium      = 10\n");
			scanf("%d",&m);
			if(m==1)
			 {
				square();
			 }
			 else if(m==2)
			 {
				rectangle();
			 }
			 else if(m==3)
			 {
				circle();
			 }
			 else if(m==4)
			 {
				scalen();
			 }
			 else if(m==5)
			 {
				isoscalen();
		   	 }
			 else if(m==6) 
			 {
				equivalent();
			 }
			 else if(m==7)
			 {
				rightangle();
			 }
			 else if(m==8)
			 {
				rhombus();
			 }
			 else if(m==9)
			 {
				parallelogram();
			 }
			 else if(m==10)
			 {
				trapezium();
			 }
			 else 
			 {
			 	printf("Wrong Word");
			 }			
		}
//---------------3d main-----------------------------------		
		else if(n==3)
		{
			int m;
			printf("\nDont Give Space");
			printf("\ncube         = 1\n");
			printf("cuboid       = 2\n");
			printf("sphere       = 3\n");
			printf("hemisphere   = 4\n");
			printf("cylinder     = 5 \n");
			printf("cone         = 6 \n");
			scanf("%d",&m);
			if (m==1)
			{
				cube();
			}
			else if (m==2)
			{
				cuboid();
			}
			else if (m==3)
			{
				sphere();
			}
			else if (m==4)
			{
				hemisphere();
			}
			else if (m==5)
			{
				cylinder();
			}
			else if (m==6)
			{
				cone();
			}
			else 
			{
				printf("\nWrong Number\n");
			}
		}
//----------------------default----------------------------------------
		else
		{
				printf("\nWrong Number\n");
		}
		
	}
	return 0;
}
//-----------------------------------------------------2D function ----------------------------------------------------------
// 1 = squre
float square()
{
	char ch;
	float a;
	printf("Total Surface Area = t\n");
	printf("Perimeter          = p\n");
	scanf(" %c",&ch);
	
	if(ch=='t')
	{
		printf("Enter Side = ");
    	scanf("%f",&a);
		printf("Total Surface Area Of Square = %.2f ",a*a);
	}
	else if(ch=='p')
	{
		printf("Enter Side = ");
    	scanf("%f",&a);
		printf("Perimeter of Square = %.2f",4*a);
	}
	else
	{
		printf("Wrong Character");
	}
	return 0;
}

// 2 = rectangle
float rectangle()
{
	char ch;
	float a,b;
	printf("Total Surface Area = t\n");
	printf("Perimeter          = p\n");
	scanf(" %c",&ch);
	
	if(ch=='t')
	{
			printf("Enter length = ");
        	scanf("%f",&a);
        	printf("Enter breadth = ");
        	scanf("%f",&b);
   	    	printf("Total Surface Area Of Rectangle = %.2f ",a*b);
	}
	else if(ch=='p')
	{
		printf("Enter length = ");
    	scanf("%f",&a);
	    printf("Enter breadth = ");
	    scanf("%f",&b);
		printf("Perimeter of Rectangle = %.2f",2*(a+b));
	}
	else
	{
		printf("Wrong Character");
	}
	return 0;
}

// 3 = circle
float circle()
{ 
	char ch;
	float a;
	printf("Total Surface Area = t\n");
	printf("Perimeter          = p\n");
	scanf(" %c",&ch);
	
	
	if(ch=='t')
	{
		printf("Enter Radius = ");
    	scanf("%f",&a);
		printf("Total Surface Area Of Circle = %.2f ",3.14*a*a);
	}
	else if(ch=='p')
	{
		printf("Enter Radius = ");
    	scanf("%f",&a);
		printf("Perimeter of Circle = %.2f",2*3.14*a);
	}
	else
	{
		printf("Wrong Character");
	}
	return 0;
}

// 4 = scalen triangle
float scalen()
{
	char ch;
	float a,b,c,s;
	printf("Total Surface Area = t\n");
	printf("Perimeter          = p\n");
	scanf(" %c",&ch);
	
	if(ch=='t')
	{
		printf("Enter the Value Of A= ");
    	scanf("%f",&a);
     	printf("Enter the Value Of B= ");
    	scanf("%f",&b);
    	printf("Enter the Value Of c= ");
    	scanf("%f",&c);
    	s=(a+b+c)/2;
		printf("Total Surface Area Of Scalen Triangle = %.2f ",sqrt(s*(s-a)*(s-b)*(s-c)));
	}
	else if(ch=='p')
	{
		printf("Enter the Value Of A= ");
    	scanf("%f",&a);
    	printf("Enter the Value Of B= ");
    	scanf("%f",&b);
    	printf("Enter the Value Of c= ");
    	scanf("%f",&c);
    	s=(a+b+c)/2;
 		printf("Perimeter of Scalen Triangle = %.2f",a+b+c);
	}
	else
	{
		printf("Wrong Character");
	}
	return 0;
}

// 5 = Isoscalen Triangle
float isoscalen()
{
	char ch;
	float a,b;
	printf("Total Surface Area = t\n");
	printf("Perimeter          = p\n");
	scanf(" %c",&ch);
	
	if(ch=='t')
	{
			printf("Enter Height = ");
        	scanf("%f",&a);
        	printf("Enter breadth = ");
        	scanf("%f",&b);
   	    	printf("Total Surface Area Of Rectangle = %.2f ",0.5*a*b);
	}
	else if(ch=='p')
	{
		printf("Enter A = ");
    	scanf("%f",&a);
	    printf("Enter B = ");
	    scanf("%f",&b);
		printf("Perimeter of Rectangle = %.2f",2*(a+b));
	}
	else
	{
		printf("Wrong Character");
	}
	return 0;
}

// 6 = equivalent Triangle
float equivalent()
{
	char ch;
	float a;
	printf("Total Surface Area = t\n");
	printf("Perimeter          = p\n");
	scanf(" %c",&ch);
	
	
	if(ch=='t')
	{
		printf("Enter Side = ");
    	scanf("%f",&a);
		printf("Total Surface Area Of Equivalent Triangle = %.2f ",sqrt(3)/4*(a*a));
	}
	else if(ch=='p')
	{
		printf("Enter Side = ");
    	scanf("%f",&a);
		printf("Perimeter of Equivalent Triangle = %.2f",3*a);
	}
	else
	{
		printf("Wrong Character");
	}
	return 0;
}

// 7 = Right angle Triangle
float rightangle()
{
	char ch;
	float a,b,c,h;
	printf("Total Surface Area = t\n");
	printf("Perimeter          = p\n");
	scanf(" %c",&ch);
	
	
	if(ch=='t')
	{
		printf("Enter height = ");
	    scanf("%f",&a);
	    printf("Enter breadth = ");
    	scanf("%f",&b);
		printf("Total Surface Area Of Right angle Triangle = %.2f ",0.5*a*b);
	}
	else if(ch=='p')
	{
		printf("Enter height = ");
    	scanf("%f",&a);
    	printf("Enter breadth = ");
    	scanf("%f",&b);
		printf("Enter Hypotaneus = ");
		scanf("%f",&c);
		printf("Perimeter of Right angle Triangle = %.2f",a+b+c);
	}
	else
	{
		printf("Wrong Character");
	}
	return 0;
}

// 8 = rhombus
float rhombus()
{
	char ch;
	float a,b,c;
	printf("Total Surface Area = t\n");
	printf("Perimeter          = p\n");
	scanf(" %c",&ch);
	
	
	if(ch=='t')
	{
		printf("Enter Diagonal 1 = ");
	    scanf("%f",&a);
    	printf("Enter Diagonal 2 = ");
    	scanf("%f",&b);
		printf("Total Surface Area Of Rhombus = %.2f ",0.5*a*b);
	}
	else if(ch=='p')
	{
		printf("Enter Side = ");
		scanf("%f",&c);
		printf("Perimeter of Rhombus = %.2f",4*c);
	}
	else
	{
		printf("Wrong Character");
	}
	return 0;
}

// 9 = parallelogram
float parallelogram()
{
    char ch;
	float a,b;
	printf("Total Surface Area = t\n");
	printf("Perimeter          = p\n");
	scanf(" %c",&ch);
	
	
	if(ch=='t')
	{
		printf("Enter Height = ");
	    scanf("%f",&a);
	    printf("Enter breadth = ");
	    scanf("%f",&b);
		printf("Total Surface of Parallelogram = %.2f ",a*b);
	}
	else if(ch=='p')
	{
		 printf("Enter Length = ");
	     scanf("%f",&a);
	     printf("Enter breadth = ");
	     scanf("%f",&b);
	   	 printf("Perimeter of Parallelogram = %.2f",2*(a+b));
	}
	else
	{
		printf("Wrong Character");
	}
	return 0;	
}

// 10 = trapezium
float trapezium()
{
	char ch;
	float a,b,c,d,h;
	printf("Total Surface Area = t\n");
	printf("Perimeter          = p\n");
	scanf(" %c",&ch);
	
	
	if(ch=='t')
	{
	    printf("Enter the Value Of A= ");
        scanf("%f",&a);
        printf("Enter the Value Of B= ");
       	scanf("%f",&b);
    	printf("Enter the Value Of C= ");
    	scanf("%f",&c);
    	printf("Enter the Value Of D= ");
    	scanf("%f",&d);
    	printf("Enter the Value Of H= ");
    	scanf("%f",&h);
		printf("Total Surface Trapezium = %.2f ",0.5*h*(a+c));
	}
	else if(ch=='p')
	{
		printf("Enter the Value Of A= ");
    	scanf("%f",&a);
      	printf("Enter the Value Of B= ");
    	scanf("%f",&b);
    	printf("Enter the Value Of C= ");
    	scanf("%f",&c);
     	printf("Enter the Value Of D= ");
    	scanf("%f",&d);
    	printf("Enter the Value Of H= ");
     	scanf("%f",&h);
		printf("Perimeter of Trapezium = %.2f",a+b+c+d);
	}
	else
	{
		printf("Wrong Character");
	}
	return 0;
}

//---------------------------------------------------2D function ----------------------------------------------------------

//---------------------------------------------------3D function ----------------------------------------------------------

// 1 = cube
float cube()
{
	char ch;
	float a;
	printf("For Total Surface Area  = t \n");
	printf("For Curved Surface Area = c \n");
	printf("For  Volume             = v \n");
	scanf(" %c",&ch);
	if (ch=='t')
	{
		printf("Enter Side = ");
		scanf(" %f",&a);
		printf("Total Surface Area Is %.2f",6*a*a);
	}
	else if(ch=='c')
	{
		printf("Enter Side = ");
		scanf(" %f",&a);
		printf("Curved Surface Area Is %.2f",4*a*a);
	}
	 else if(ch=='v')
	{
		printf("Enter Side = ");
		scanf(" %f",&a);
		printf("Volume  Is %.2f",a*a*a);
	}
	else
	{
		printf("Please Enter Correct Operator ");
	}
	return 0;
}

//  2 = Cuboid
float cuboid()
{
	char ch;
	float a,b,c;
	printf("For Total Surface Area  = t \n");
	printf("For Curved Surface Area = c \n");
	printf("For  Volume             = v \n");
	scanf(" %c",&ch);
	if (ch=='t')
	{
		printf("Enter Length = ");
		scanf(" %f",&a);
		printf("Enter Breadth = ");
		scanf(" %f",&b);
		printf("Enter Height = ");
		scanf(" %f",&c);
		printf("Total Surface Area Is %.2f",2*(a*b+b*c+c*a));
	}
	else if(ch=='c')
	{
		printf("Enter Side = ");
		scanf(" %f",&a);
		printf("Enter Breadth = ");
		scanf(" %f",&b);
		printf("Enter Height = ");
		scanf(" %f",&c);
		printf("Curved Surface Area Is %.2f",2*c*(a+b));
	}
	 else if(ch=='v')
	{
		printf("Enter Side = ");
		scanf(" %f",&a);
		printf("Enter Breadth = ");
		scanf(" %f",&b);
		printf("Enter Height = ");
		scanf(" %f",&c);
		printf("Volume  Is %.2f",a*b*c);
	}
	else
	{
		printf("Please Enter Correct Operator ");
	}
	return 0;
}

// 3 = Sphere 

float sphere()
{
	char ch;
	float a;
	printf("For Total Surface Area  = t \n");
	printf("For Curved Surface Area = c \n");
	printf("For  Volume             = v \n");
	scanf(" %c",&ch);
	if (ch=='t')
	{
		printf("Enter Radius = ");
		scanf(" %f",&a);
		printf("Total Surface Area Is %.2f",4*3.14*a*a);
	}
	else if(ch=='c')
	{
		printf("Enter Radius = ");
		scanf(" %f",&a);
		printf("Curved Surface Area Is %.2f",4*3.14*a*a);
	}
	 else if(ch=='v')
	{
		printf("Enter Radius = ");
		scanf(" %f",&a);
		printf("Volume  Is %.2f",4/3*3.14*a*a);
	}
	else
	{
		printf("Please Enter Correct Operator ");
	}
	return 0;
}

// 4 = Hemisphere 

float hemisphere()
{
	char ch;
	float a;
	printf("For Total Surface Area  = t \n");
	printf("For Curved Surface Area = c \n");
	printf("For  Volume             = v \n");
	scanf(" %c",&ch);
	if (ch=='t')
	{
		printf("Enter Radius = ");
		scanf(" %f",&a);
		printf("Total Surface Area Is %.2f",3*3.14*a*a);
	}
	else if(ch=='c')
	{
		printf("Enter Radius = ");
		scanf(" %f",&a);
		printf("Curved Surface Area Is %.2f",2*3.14*a*a);
	}
	 else if(ch=='v')
	{
		printf("Enter Radius = ");
		scanf(" %f",&a);
		printf("Volume  Is %.2f",(2/3)*3.14*a*a);
	}
	else
	{
		printf("Please Enter Correct Operator ");
	}
	return 0;
}

// 5 = Cylinder

float cylinder()
{
	char ch;
	float a,b;
	printf("For Total Surface Area  = t \n");
	printf("For Curved Surface Area = c \n");
	printf("For  Volume             = v \n");
	scanf(" %c",&ch);
	if (ch=='t')
	{
		printf("Enter Radius = ");
		scanf(" %f",&a);
		printf("Enter Height  = ");
		scanf(" %f",&b);
		printf("Total Surface Area Is %.2f",(2*3.14*a*b)+(2*3.14*a*a));
	}
	else if(ch=='c')
	{
		printf("Enter Radius = ");
		scanf(" %f",&a);
		printf("Enter Height  = ");
		scanf(" %f",&b);
		printf("Curved Surface Area Is %.2f",2*3.14*a*b);
	}
	 else if(ch=='v')
	{
		printf("Enter Radius = ");
		scanf(" %f",&a);
		printf("Enter Height  = ");
		scanf(" %f",&b);
		printf("Volume  Is %.2f",3.14*a*a*b);
	}
	else
	{
		printf("Please Enter Correct Operator ");
	}
	return 0;
}

// 6 = Cone

float cone()
{
	char ch;
	float a,b;
	printf("For Total Surface Area  = t \n");
	printf("For Curved Surface Area = c \n");
	printf("For  Volume             = v \n");
	scanf(" %c",&ch);
	if (ch=='t')
	{
		printf("Enter Radius = ");
		scanf(" %f",&a);
		printf("Enter Length  = ");
		scanf(" %f",&b);
		printf("Total Surface Area Is %.2f",3.14*a*(a+b));
	}
	else if(ch=='c')
	{
		printf("Enter Radius = ");
		scanf(" %f",&a);
		printf("Enter Length  = ");
		scanf(" %f",&b);
		printf("Curved Surface Area Is %.2f",3.14*a*b);
	}
	 else if(ch=='v')
	{
		printf("Enter Radius = ");
		scanf(" %f",&a);
		printf("Enter Height  = ");
		scanf(" %f",&b);
		printf("Volume  Is %.2f",1/3*3.14*a*a*b);
	}
	else
	{
		printf("Please Enter Correct Operator ");
	}
	return 0;
}
//-----------------------------------------------------3D function--------------------------------------------------------------------

