#include<stdio.h>
int power(int a,int b){ 
  if(b==0){
  return 1;
  }
  else if (b==1){
  return a;
  }
  else{
    return a*power(a,b-1);
    }
}
int main() {
  int a;
  int b;
  int r;
  printf("enter a non zero number");
  scanf("%d",&a);
  printf("enter the exponent value");
  scanf("%d",&b);
  r=power(a,b);
  printf("%d",r);
}
