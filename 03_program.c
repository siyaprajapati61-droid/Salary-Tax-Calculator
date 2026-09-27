#include<stdio.h>
int main()
//tax calculate salary tax paid by an employee to the goverment
{
    float tax = 0;
    int salary;
    printf("enter the salary\n");
    scanf("%d",&salary);
    if (salary<=250000)
    {
        tax = 0;
    }
    else if (salary>250000 && salary<=500000 )
    {
        tax = 0.05*(salary<250000);
    }
    else if (salary>500000 && salary<=1000000)
    {
        tax = 0.05*(500000-250000)+0.2*(salary-500000);
    }
    else if (salary<=1000000)
    {
        tax = 0.5*(500000-250000)+0.2*(1000000-500000)+0.3*(salary-1000000);
    }
    printf("tax = %2f\n",tax);
    return 0;
}