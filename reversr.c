#include<stdio.h>
int main(){
  char str[100];
  printf("enter the string to be reversed:");
  fgets(str,sizeof(str),stdin);
  int length;
  for(length=0;str[length]!='\0';length++);
  int i=length-1;
  for (int j=0;j<length/2;j++){
    int temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i--;
   }
  printf("the reversed string is");
  puts(str);
 return 0;
 }
