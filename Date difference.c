#include<stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

int main()
{
    struct date date1,date2;

    int daysinmonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int totaldays1=0;
    int totaldays2=0;

    printf("Enter the first date (dd mm yyyy): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter the second date (dd mm yyyy): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    if(date1.year%400==0 || (date1.year%100!=0 && date1.year%4==0))
    {
        daysinmonth[1]=29;
    }

    for(int i=1; i<date1.year; i++)
    {
         if(date1.year%400==0 || (date1.year%100!=0 && date1.year%4==0))
         {
             totaldays1=totaldays1+366;
         }
         else
         {
             totaldays1=totaldays1+365;
         }
    }

    for(int i=1; i<date1.month; i++)
    {
        totaldays1=totaldays1+daysinmonth[i-1];
    }

    totaldays1=totaldays1+date1.day;

    daysinmonth[1]=28;
    if(date2.year%400==0 || (date2.year%100!=0 && date2.year%4==0))
    {
        daysinmonth[1]=29;
    }

    for(int i=1; i<date2.year; i++)
    {
         if(date2.year%400==0 || (date2.year%100!=0 && date2.year%4==0))
         {
             totaldays2=totaldays2+366;
         }
         else
         {
             totaldays2=totaldays2+365;
         }
    }

    for(int i=1; i<date2.month; i++)
    {
        totaldays2=totaldays2+daysinmonth[i-1];
    }

    totaldays2=totaldays2+date2.day;

    int difference=totaldays2-totaldays1;
    printf("The difference between the two dates is %d days.\n", difference);
}
