#include <stdio.h>

int main()
{
    int a ;
    int b ;
    printf ("inserisci due numeri");
    scanf ("%d %d" , &a, &b);
    int resto = a%b ;
    if ( resto == 0)
    {
    printf (" il resto di a e b è 0 quindi i numeri sono multipli\n ");
    }
    else
    {
        printf ("il resto e diverso da 0 \n");
    }
    
}