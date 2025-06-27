#include<stdio.h>
int main()
{
	int num,digit,rev=0;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		rev=rev*10+digit;
		digit=num/10;
	}
	if(rev==num)
		printf("Palindrome");
	else
		printf("Not Palindrome");
	return 0;
}