#include<stdio.h>


void swap(int *x,int*y)
{
  int temp=*x;
  *x=*y;
  *y=temp;
  printf("1st=%d\n",*x);
  printf("2nd=%d",*y);
}



int main(){
  int a=5;
  int b=2;
  swap(&a,&b);


  return 0;}
