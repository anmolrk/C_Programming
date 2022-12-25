#include<stdio.h>
#include<conio.h>
int main()
{
   printf("calculator");
   int num1,num2;
   float addition, Mul, Div;
   printf("enter two numbers");
   scanf("%d %d",&num1,&num2);
   addition=num1+num2;
   printf("addition of num1=%d num2=%d",addition);
   printf("enter two numbers");
   scanf("%d %d",&num1,&num2);
   Mul=num1*num2;
   printf("Multiplication of num1=%d and num=%d is",Mul);
   printf("enter two numbers");
   scanf("%d %d",&num1,&num2);
   Div=num1/num2;
   printf("Division of num1=%d and num=%d is",Div);
   printf("thank you");
   getch();
   
   
}

