#include<stdio.h>
int main(){
  int num1,num2,calculator;
  char pp;
  printf("enter the numbers");
  scanf("%d,%d",&num1,&num2);
  printf("enter the operator");
  scanf(" %c",&pp);
  switch(pp)
  {
   case '+':
   int sum;
   sum=num1+num2;
   printf("sum of two numbers is: %d", sum);
   break;
   case '-':
   int sub;
   sub=num1-num2;
   printf("sub of two numbers is: %d", sub);
   break;
   case '*':
   int multi;
   multi=num1*num2;
   printf("multiplication of two numbers is: %d",multi);
   break;
   case '/':
   int div;
   div=num1/num2;
   printf("div of two numbers is:%d",div);
   break;
   default: printf("invalid operation");
   break;
   }
   return 0;
   }
   
   

