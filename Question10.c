/*Find out the maximum and minimum from an array using dynamic memory allocation
in C.*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,*p,i,max,min;
    printf("Enter the size of the array ");
    scanf("%d",&n);
    p=calloc(n,sizeof(int));
    printf("Enter %d elements ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        if(i==0)
            min=*p;
        else if(min>*(p+i))
        {
            min=*(p+i);
        }    
    }
    max=*p;
    for(i=0;i<n;i++)
    {
        if(max<*(p+i))
        {
            max=*(p+i);
        }
    }
    free(p);
    p=NULL;
    printf("maximum and minimum in the entered values are %d and %d resp.",max,min);
    return 0;
}