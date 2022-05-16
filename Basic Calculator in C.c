#include<stdio.h>
#include<conio.h>
#include<math.h>





void division()
{
float a,b,c;	
printf("\nenter the number numerator:");
scanf("%f",&a);//address of operator for put a value in amphersand
printf("enter the denominator:");
scanf("%f",&b);
c=a/b;
printf("quotient=%f",c);
printf("\n");
main();
}

void Multiplication()
{
int a,b,c;	
printf("\nenter the number:");
scanf("%d",&a);//address of operator for put a value in amphersand
printf("enter the number:");
scanf("%d",&b);
c=a*b;
printf("multiplicative=%d",c);
printf("\n");
main();
}

void Addition()
{
int a,b,c;	
printf("\nenter the number:");
scanf("%d",&a);//address of operator for put a value in amphersand
printf("enter the number:");
scanf("%d",&b);
c=a+b;
printf("sum=%d",c);
printf("\n");
main();
}

void Substraction()
{
int a,b,c;	
printf("\nenter the number:");
scanf("%d",&a);//address of operator for put a value in amphersand
printf("enter the number:");
scanf("%d",&b);
c=a-b;
printf("%d",c);
printf("\n");
main();
}

void Power()
{
int a,b,result;	
printf("\nenter the number:");
scanf("%d",&a);//address of operator for put a value in amphersand
printf("enter the number:");
scanf("%d",&b);
result = pow(a,b);
printf("given number to the power=%d",result);
printf("\n");
main();
}

void Modulus()
{
int a,b,result;	
printf("\nenter the number:");
scanf("%d",&a);//address of operator for put a value in amphersand
printf("enter the number:");
scanf("%d",&b);
result = a%b;
printf("The reminder is = %d",result);
printf("\n");
main();
}


int main()
{
int user_response;
printf("For division=1,for Multiplication=2,for Addition=3,Substraction=4,for Modulus=5,For Power=6");
printf("\nWhich operation you want to Do:");
scanf("%d",&user_response);
if(user_response==1)
   {
   	 division();	
   }

if(user_response==2)
  {
	Multiplication();
  }
if(user_response==3)
    {
    	Addition();
	}
if(user_response==4)
    { 
	Substraction();  
    }

if(user_response==5)
{
	Power();
}
if(user_response==6)
   {
   	Modulus();
   }
else
{
	printf("invalid command choose the right command");
	printf("\n");
	main();
}

}





