// Program for sum of 1+2!+3!+….+n! using one for loop

#include <stdio.h>
int main(){
    int n,sum = 0,fact = 1;
    printf("Enter the limit: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        fact *= i;
        sum += fact;
    }
    printf("Sum is %d\n",sum);
    return 0;
}