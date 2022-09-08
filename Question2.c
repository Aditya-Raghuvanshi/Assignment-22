/*Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
     int i,n,*p;
     float avg,sum=0;
     printf("Enter the number of data values would you like to enter ");
     scanf("%d",&n);
     p=calloc(n,sizeof(int));
     printf("Enter the %d numbers ",n);
     for(i=0;i<n;i++)
     {
        scanf("%d",p+i);
        sum=sum+*(p+i);
     }
     free(p);
     p=NULL;
     avg=sum/n;
     printf("Average of given numbers is %.02f ",avg);
     return 0;

}