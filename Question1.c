/*Define a function to input variable length string and store it in an array without
memory wastage.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* input();
void display(char* );
int main()
{
    char* q;
    q=input();
    int i;
    display(q);
    return 0;
   
}
char* input()
{
    int l,i;
    char *p;
    printf("Enter length of the string ");
    scanf("%d",&l);
    fflush(stdin);
    p=malloc(l);
    printf("Enter the string ");
    fgets(p,l,stdin);
    return(p);
}
void display(char* p)
{
    printf("%s",p);
}


