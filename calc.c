#include<stdio.h>
int add(int a,int b)
{	
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
int mod(int a,int b)
{
	return a%b;
}
int main()
{
	int num1,num2,result;
	printf("select the arithmetic operation that you wish to perform");
	printf("\n1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	printf("\n5.Modulo");
	int choice;	
	printf("\nEnter your choice");
	scanf("%d",&choice);
	printf("\nEnter first number");
	scanf("%d",&num1);
	printf("\nEnter second number");
	scanf("%d",&num2);
	switch(choice)
	{
		case 1: result=add(num1,num2);
			break;
		case 2: result=sub(num1,num2);
			break;
		case 3: result=mul(num1,num2);
			break;
		case 4: result=div(num1,num2);
			break;
		case 5: result=mod(num1,num2);
			break;
		default:printf("Exiting");
	}
	printf("The result is %d",result);
	return 0;
}
