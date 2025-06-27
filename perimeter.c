#include<stdio.h>
int main()
{
    float l,b,p;
    printf("enter the length:");
    scanf("%f",&l);
    printf("enter the breadth:");
    scanf("%f",&b);
    p = 2*(l+b);
    printf("Perimeter is :%.2f",p);
    return 0; 
}