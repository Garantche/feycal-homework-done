#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


int main (int argc, string argv[])
{
    if (argc==2)
    {
    string n;



    int k=atoi(argv[1]);


    n=get_string("the text you want to hidden:");


     printf("cipher text is:");
     for(int i=0; i<strlen(n); i++)
     if(isalpha(n[i]))
     {
         if(islower(n[i]))
         {

             printf("%c",(((n[i]-97)+k)%26)+97);

         }

         if(isupper(n[i]))
         {
             printf("%c",(((n[i]-65)+k)%26)+65);
         }
     }
     else
        {
            printf("%c",n[i]);
        }
        printf("\n");
    }
    return 0;

}