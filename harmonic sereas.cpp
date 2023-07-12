#include <stdio.h>
int main()
{
     int i,num;
     float sum=0;
     printf("Enter the numbers of terms\n");
     scanf("%d",&num);
     printf("The harmonic seres is : ");
     for ( i = 1; i <=num; i++)
     {
          printf("1/%d + ",i);
          sum=sum+(1/i);
     }
     printf("The sum of seris is : %f",sum);
}
