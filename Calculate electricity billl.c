#include <stdio.h>
int main ()
{

    int unit;
    float bill;
    printf("Enter the unit number:");
    scanf("%d",&unit);

    if(unit>=1&&unit<=50)// 1st 50
    {
        bill=50*0.50;
    }
    else if (unit>=51&&unit<=150)//2nd 100
    {
        bill=(50*0.50)+((unit-50)*0.75);
    }
    else if(unit>=151&&unit<=250)//3rd 100
    {
        bill=((50*0.50)+(100*0.75)+((unit-150)*1.20));
    }
    else if(unit>=251)//4th beyond 250
    {
        bill=((50*0.50)+(100*0.75)+(100*1.20)+((unit-250)*1.50));
    }
    float all=bill+(bill*0.2);// doing the sum of 20% surcharge and storing it in all//

    printf("%.2f",all);
    return 0;
}
