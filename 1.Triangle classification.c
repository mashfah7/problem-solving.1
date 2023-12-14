#include <stdio.h>
int main()
{
    float x1,y1,x2,y2,x3,y3;
    float side1,side2,side3;
                                                        
    printf("Enter the value=");
    scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);

    side1=sqrt((x1-x2)*(x1-x2)+(y2-y1)*(y2-y1));
    side2=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    side3=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    //finished the side //
    printf("%f\n%f\n%f\n ",side1,side2,side3);
    if(side1+side2>side3&&side2+side3>side1&&side1+side3>side2)
    {


        if(side1!=side2&&side2!=side3&&side1!=side3)
        {
            printf("Scalene ");
        }
        else if(side1==side2||side2==side3||side1==side3)
        {
            printf("Isosceles ");
        }
        else if(side1==side2&&side2==side3&&side1==side3)
        {
            printf("Equilateral ");
        }

        //math for angles//
        if(((side1*side1)+(side2*side2))==(side3*side3)||((side2*side2)+(side3*side3))==(side1*side1)||((side1*side1)+(side3*side3))==(side2*side2))
        {
            printf("Right triangle");
        }

        else if(((side1*side1)+(side2*side2))<(side3*side3)||((side2*side2)+(side3*side3))<(side1*side1)||((side1*side1)+(side3*side3))<(side2*side2))
        {
            printf("obtuse triangle");
        }
        else{
            printf("Acute triangle");
        }


    }
    else
    {
        printf("Invalid");
    }

 return 0;
}


