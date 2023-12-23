#include<stdio.h>
int main(){


  char n1[20];
  char n2[20];
  printf("name1=");
  gets(n1);
  printf("name2=");
  gets(n2);

  int i=0,len=0,j=0;
  while(n1[i]!='\0')
  {


    i++;
    len++;
  }
while(n2[j]!='\0')
{
  n1[len+j]=n2[j];

  j++;
}  printf("%s",n1);



  return 0;}
