#include <stdio.h>

int main() 
{
    int a;
    printf ("quando sei nato? \n");
    scanf ("%d",&a);
    if(a>1969)
    {
        printf("sei nato dopo l'atterraggio sulla luna di %d anni\n", a-1969);
    }
    else if ( a < 1969)
    {
        printf("sei nato prima dell'atterraggio sulla luna di %d anni\n", 1969-a);
    }
    else
    {
        printf ("sei nato lo stesso anno dell'atterraggio sulla luna\n");
    }
}