/*Write a program to calculate the sum of n numbers entered by the user using malloc
and free.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,*p,n,sum=0;
    printf("Enter the numbers of values you want to sum ");
    scanf("%d",&n);
    p=malloc(n*sizeof(int));
    printf("Enter all the numbers ");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        sum=sum+*(p+i);
    }
    free(p);
    printf("Sum of the given numbers is %d ",sum);
    return 0;
}