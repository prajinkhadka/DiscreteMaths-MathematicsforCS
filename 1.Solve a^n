/*
a. A Recursive Algorithm for Computing a^n.
*/
#include<stdio.h>
int power(int a,int n)
{
if(n==0)
{
return 1;
}

else
{
return a*power(a, n-1);
}

}

int main()
{
int a,n,x;
printf("Enter a non-zero real number: ");
scanf("%d",&a);

printf("Enter positive power: ");
scanf("%d",&n);

x=power(a,n);
printf("The value of %d ^ %d = %d ",a,n,x);

}
