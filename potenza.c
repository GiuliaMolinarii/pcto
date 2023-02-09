#include <stdio.h>

int main()
{
    int x ;
int y;
printf ("inserisci due numeri" );
    scanf ("%d %d" , &x, &y);
   int z = x;
   if (y==0)
   {
    printf("1\n");
    }
   else
   {
    while(y>1)
    { 
    z = z * x; 
    y= y-1;
    }
    printf("%d\n",z);
    }
}