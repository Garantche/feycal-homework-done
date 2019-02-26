#include <stdio.h>
#include <cs50.h>
 int main(void)
{

int n;
int a=500;
int b=250;
int c=200;
int d=100;
int e=50;
int f=25;
int g=10;
int h=5;
int k=1;
int sum=0;
    do
    {
     n=get_int("Remain price: ");
    }
    while(n<=0);

    while(n>=a)
    {
        n=n-a;
        sum++;
    }
    while(n>=b)
    {
    n=n-b;
    sum++;
    }

    while(n>=c)
    {
        n=n-c;
        sum++;
    }

    while(n>=d)
    {
        n=n-d;
        sum++;
    }

    while(n>=e)
    {
        n=n-e;
        sum++;
    }


    while(n>=f)
    {
        n=n-f;
        sum++;
    }

    while(n>=g)
    {
        n=n-f;
        sum++;
    }

    while(n>=h)
    {
        n=n-h;
        sum++;
    }

    while(n>=k)
    {
        n=n-k;
        sum++;
    }
    {
        printf("then number of coins are %i \n", sum);
    }
}