#include <stdio.h>
 
int main ()
 
{
 
     int b,c,a,n=5,number[15];
 
       printf ("\nPlease enter how many numbers you want to sort:");
 
       scanf ("%d", &n);
 
       printf ("\nPlease enter the numbers to be sorted as ascending order:");
 
       for (b=0; b<n; ++b)
 
       scanf ("%d,",&number[b]);
 
 for (b=0; b<n; ++b)
 
 {
 
   for (c=b+1; c<n; ++c)
 
   {
 
     if (number[b] > number[c])
 
     {
 
       a= number[b];
 
       number[b] = number[c];
 
       number[c] = a;
 
     }
 
   }
 
 }
 
 printf ("\nAscending order of entered numbers");
 
 for (b=0; b<n; ++b)
 
 printf ("\n%d",number[b]);
 
 return 0;
}
