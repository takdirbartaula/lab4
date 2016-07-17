/*  Program: To find factorial of a given number
 By : Takdir Bartaula [0542]
  # Date   : 7/17/2016

  */
#include<stdio.h>
long int fact(int);
 int main()
 {
 	int n,f;
 	printf("Enter a number to get its factorial\n\a");
 	scanf("%d",&n);
 	f=fact(n);
 	printf("The Factorial of %d is %d",n,f);
 	return 1;
 }
 
 long int fact(int n)
 {
 if (n==1 || n==0)
 return 1;
 else
 return (n*fact(n-1));	
}
