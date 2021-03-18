/* create an enumerated data type for months
and a structure that supports dates 
fx next day
fx printdate(date)
then print date jan 1 and then the next day
then the same for feb 28, mar 14 , oct 31 , dec 31 */

#include<stdio.h>

typedef enum month{ jan, feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec} month;
typedef struct date{ month m; int d;} date;

void printdate(date d1)
{
    switch (d1.m)
    {
        case jan: printf("january");break;
        case feb: printf("february");break;
        case mar: printf("march");break;
        case apr: printf("april");break;
        case may: printf("may");break;
        case jun: printf("june");break;
        case jul: printf("july");break;
        case aug: printf("august");break;
        case sep: printf("september");break;
        case oct: printf("october");break;
        case nov: printf("november");break;
        case dec: printf("december");break;
        default: printf("%d is an error",d1.m);
    }
    printf(" %d",d1.d);
}

void nextday(date d1)
{
    switch (d1.m)
    {
        case jan: 
        if(d1.d<31)
        {d1.d++;
        printdate(d1);}
    else
        printf("february 1");break;
        case feb: 
        if(d1.d<28)
        {d1.d++;
        printdate(d1);}
    else
        printf("march 1");break;
        case mar: 
        if(d1.d<31)
        {d1.d++;
        printdate(d1);}
    else
        printf("april 1");break;
        case apr: 
        if(d1.d<30)
        {d1.d++;
        printdate(d1);}
    else
        printf("may 1");break;
        case may: 
        if(d1.d<31)
        {d1.d++;
        printdate(d1);}
    else
        printf("june 1");break;
        case jun: 
        if(d1.d<30)
        {d1.d++;
        printdate(d1);}
    else
        printf("july 1");break;
        case jul: 
        if(d1.d<31)
        {d1.d++;
        printdate(d1);}
    else
        printf("august 1");break;
        case aug: 
        if(d1.d<31)
        {d1.d++;
        printdate(d1);}
    else
        printf("september 1");break;
        case sep: 
        if(d1.d<30)
        {d1.d++;
        printdate(d1);}
    else
        printf("october 1");break;
        case oct: 
        if(d1.d<31)
        {d1.d++;
        printdate(d1);}
    else
        printf("november 1");break;
        case nov: 
        if(d1.d<30)
        {d1.d++;
        printdate(d1);}
    else
        printf("december 1");break;
        case dec: 
        if(d1.d<31)
        {d1.d++;
        printdate(d1);}
    else
        printf("january 1 _next year !!");break;
        default: printf("%d is an error",d1.m);
    }
}

int main()
{
    date d1;
    d1.d=1;d1.m=jan;
    printdate(d1); //prints today
    printf("\n\n");
    nextday(d1); //prints next day
    printf("\n\n");

    d1.d=28;d1.m=feb;
    printdate(d1); //prints today
    printf("\n\n");
    nextday(d1); //prints next day
    printf("\n\n");

    d1.d=14;d1.m=mar;
    printdate(d1); //prints today
    printf("\n\n");
    nextday(d1); //prints next day
    printf("\n\n");

    d1.d=31;d1.m=oct;
    printdate(d1); //prints today
    printf("\n\n");
    nextday(d1); //prints next day
    printf("\n\n");

    d1.d=31;d1.m=dec;
    printdate(d1); //prints today
    printf("\n\n");
    nextday(d1); //prints next day
    printf("\n\n");

    return 0;
}