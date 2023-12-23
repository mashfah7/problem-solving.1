#include<stdio.h>
int main(){


  char sen[100];
  printf("sentance=");
  gets(sen);
  int i=0,len=0;
  while(sen[i]!='\0')
  {
    i++;
    len++;

  }
  printf("%d",len);













  return 0;}
