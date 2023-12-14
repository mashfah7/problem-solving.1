#include <stdio.h>
int main ()
{                                                     
    int  student;//number of students//
    double total_mark=0;
    double  MT=30,TF=0.4;
    double attend,assignment,class_test,mid_term,final_term;
    double arr[100];

    printf("Enter the number of sudent=");
    scanf("%d",&student);

    //taking input of each students
    for(int line=0; line<student; line++)
    {
        printf("Enter the numbers for student no=%d\n",line+1);
        scanf("%lf%lf%lf%lf%lf",&attend,&assignment,&class_test,&mid_term,&final_term);
        total_mark=attend+assignment+class_test+(mid_term*MT)/50+(final_term*TF);
        //total=total+mark;
        printf("%lf\n",total_mark);
        arr[line]=total_mark; //arr[0]//
    }



 for (int i = 0; i < student; i++)
{

    if (90 <= arr[i] && arr[i] <= 100)

    {
        printf("A\n");
    }
    else if (86 <= arr[i] && arr[i] <= 89)
    {
        printf("A-\n");
    }
    else if (82 <= arr[i] && arr[i] <= 85)
    {
        printf("B+\n");
    }
    else if (78 <= arr[i] && arr[i] <= 81)
    {
        printf("B\n");
    }
    else if (74 <= arr[i] && arr[i] <= 77)
    {
        printf("B-\n");
    }
    else if (70 <= arr[i] && arr[i] <= 73)
    {
        printf("C+\n");
    }
    else if (66 <= arr[i] && arr[i] <= 69)
    {
        printf("C\n");
    }
    else if (62 <= arr[i] && arr[i] <= 65)
    {
        printf("C-\n");
    }
    else if (58 <= arr[i] && arr[i] <= 61)
    {
        printf("D+\n");
    }
    else if (55 <= arr[i] && arr[i] <= 57)
    {
        printf("D\n");
    }
    else if (arr[i] < 55)
    {
        printf("F\n");
    }
}


return 0;
}
