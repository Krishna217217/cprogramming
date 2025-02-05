#include<stdio.h>
int main(){
  int num,i,limit,n,small,big;
  printf("enter the number of elements");
  scanf("%d",&n);
  int array[n];
  printf("enter the elements");
  for(i=0;i<n;i++){
    scanf("%d",&array[i]);
  }
  small=array[0];
  big=array[0];
  for(i=0;i<n;i++){
    if(array[i]>big){
      big=array[i];
    }
    if(array[i]<small){
      small=array[i];
    }
  }
  printf("\nthe largest no=%d",big);
  printf("\nthe smallest no =%d",small);
  return 0;
}
