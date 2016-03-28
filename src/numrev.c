#include<stdio.h>

char *nWords[]={"zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

int main (void)
{
    int n;
    int rev=0;
    printf("\n Please Enter a Integer:");
    scanf("%d",&n);    
    while(n)
	{
		rev=rev*10+n%10;
		n=n/10;
	} 
   printf("\n Original number=%d, Reverse=%d\n:",n,rev);   
   return(0);
}



/*

Q: Print individual digits as words without using if or switch
Given a number, print words for individual digits. It is not allowed to use if or switch.

Examples:

Input:  n = 123
Output: One Two Three

Input:  n = 350
Output: Three Five Zero

*/