#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main (void)
{
 long long number;

int add=0;


    do{
        number=get_long_long("please your card number");

    }
    while (number<0);



    long long carte = number;
    while(carte>0)
    {
        carte=carte/10;
        add++;
    }

    if(add!=13 && add!=15 && add!=16)
    {
        printf("this is an invalid card number");
    }

     carte = number ;
     int sum=0;

    for(int i=1; i<=add; i++)
    {
        int numb =carte%10;
        if (i%2==0)
        {
             numb=numb*2;
        }
        if(i%2!=0)
        {
             numb=numb*1;
        }
        if(numb>9)
        {
             numb=numb-9;
        }
        sum=sum+numb;
        carte=carte/10;


    }

    if (sum%10!=0)
    {
        printf("invalid card");

    }
    else
    {
        printf("this card is valid  ");
    }
    carte=number;
    {
        carte=carte/10;
    }

    int first = carte;
    if ((first==34 ||first==37)&&( add ==15))
    {
        printf(" from Amex ");
    }
    else if ((first>50 && first<56&&add==16))

    {
        printf(" from Mastercard");
    }
    else if ((first/10==4 )&&(add==13 || add==16))

    {
    printf("  from visa");
    }
    else

    {
        printf("card number from another bank");
    }

}