//Write a program to demonstrate dangling pointers in C.
#include<stdio.h>
#include<stdlib.h>

float* area_circle();
int main()
{
    area_circle();
    return 0;
}
float* area_circle()
{
    float* r,area;
    printf("Enter the radius of the circle ");
    r=malloc(sizeof(float));
    printf("Enter the radius of the circle ");
    free(r);
    scanf("%f",r);
    area=3.14*(*r)*(*r);
    printf("Area of the circle is %.04f \n",area);
    printf("Here pointer r is dangling pointer because we loose the address of dynamic memory and pointer r contains garbage address and doing illigal memory access ");
}