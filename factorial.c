#include<stdio.h>
int main(){
 int n,i=1,factorial=1;
 printf("enter the positive number");
 scanf("%d",&n);
 while(i<=n){
 factorial=factorial*i;
 i++;
 }
 printf("factorial is %d", factorial);
 return 0;
 }
 
