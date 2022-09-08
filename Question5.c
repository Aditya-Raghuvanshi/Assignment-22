/*Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation.*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
     int i,n,*p,sum=0;
     printf("Enter the number of data values would you like to enter ");
     scanf("%d",&n);
     p=calloc(n,sizeof(int));
     printf("Enter the %d numbers ",n);
     for(i=0;i<n;i++)
     {
        scanf("%d",p+i);
        sum=sum+*(p+i);
     }
     printf("You entered : ");
     for(i=0;i<n;i++)
     {
          printf("%d ",*(p+i));
     }
     printf("\nSum of the elements is %d ",sum);
     free(p);
     p=NULL;
     return 0;

}