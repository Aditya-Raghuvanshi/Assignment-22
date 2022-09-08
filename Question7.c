//Write a program to demonstrate memory leak in C.
#include<stdio.h>
#include<stdlib.h>

void input();
int main()
{
    input();
    printf("Here we have not returned the address of the dynamic memory i.e we loose the address of the dynamic memory and hence this is memory leakage ");

    return 0;
}
void input()
{
    int n,*p;
    printf("Enter the no. of valus you want to enter ");
    scanf("%d",&n);
    p=malloc(n*sizeof(int));
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
}
