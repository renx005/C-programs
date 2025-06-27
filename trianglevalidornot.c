// Program to check whether a triangle is valid or not given its three angles

#include <stdio.h>
int main(){
    int a=0,b=0,c=0;
    printf("Enter three angles: ");
    scanf("%d%d%d",&a,&b,&c);
    
    if (a+b+c==180)
    {
        printf("It is a valid Triangle");
    }
    else
    {
        printf("It is an invalid Triangle");
    }
}