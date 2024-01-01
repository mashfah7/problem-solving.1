#include <stdio.h>
int main()
{


    int num,sum=0;
    printf("Enter the number=");
    scanf("%d",&num);
    for(int start=1; start<num; start++)
    {
        if(num%start==0)//last number after division must be 0//
        {
            sum=sum+start;
        }

    }
    if(sum==num)//sum will be stored as user given input//
    {
        printf("yes");
    }
    else
    {
        printf("no");

    }


    return 0;
}
