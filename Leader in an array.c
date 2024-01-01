#include<stdio.h>
int main ()
{
    int num;


    printf("Enter the number=");
    scanf("%d",&num);
    int array[num];//declared as a array///
    for(int i=0; i<num; i++)
    {

        scanf("%d",&array[i]);
    }
    int lead=array[num-1];
    int count=0;
    int sample[100];// as example


    sample[count]=lead; //




    for(int i=num-1; i>=0; i--)//16 17 4 3 5 2//
    {
        if(array[i]>lead)
        {
            lead=array[i];
            count++;
            sample[count]=lead;
        }

    }
    for(int i=count; i>=0; i--)
    {
        printf("%d ",sample[i]);

    }


   return 0;
}
