#include <stdio.h>

int main() 
{
    int a ;
    int b;
    int c;
    printf ("inserisci tre numeri:\n");
    scanf( "%d %d %d", &a,&b,&c);
    if (a+b>c && a+c>b && b+c>a)
    {
        printf ("sono lunghezze di lati di un triangolo\n");

        if ((a==b&& a!=c )|| (b==c && b!=a)|| (c==a && c!=b))
        {
        printf( "il triangolo e isoscele\n");
        }

        else if ((a==b)&&(b==c)&& (a==c))
        {
            printf( "triangolo equilatero\n");
        }

        else 
        {
            printf ("triangolo scaleno\n");
        }

    }
    else
    {
        printf ("non sono lunghezze di lati di un triangolo\n");
    }

}