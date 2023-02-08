#include <stdio.h>

int main() 
{
 int anno ;
 
 printf ("inserisci un numero:\n");
 scanf ("%d", &anno);
 if ((anno%4 ==0 && anno%100 !=0) || anno%400 ==0 )  
 {
    printf(" e bisestile");
 }
 else
 {
    printf( "non bisestile");
 }
}