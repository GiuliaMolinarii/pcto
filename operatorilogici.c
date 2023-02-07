#include <stdio.h>

int main()
{
    int a;
    int b;

    printf ("inserisci due numeri\n" );
    scanf ("%d %d" , &a, &b);

 if (a > b)
 {
    printf (" a è > b\n");
 }
 else if ( a == b)
 {
    printf ("a è = b\n");
 }
  else ( a<b)
  {
    printf ( "a è < b \n");
  }
}
