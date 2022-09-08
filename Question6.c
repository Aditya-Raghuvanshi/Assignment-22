//Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n,*p,large;
    printf("Enter the number of values you want enter ");
    scanf("%d",&n);
    p=malloc(n*sizeof(int));
    printf("Enter %d values ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    large=*p;
    for(i=0;i<n;i++)
    {
        if(large<*(p+i))
        {
            large=*(p+i);
        }
    }
    free(p);
    p=NULL;
    printf("Largest element in the given numbers is %d ",large );
    return 0;
}