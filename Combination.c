//2. Write a program to generate combination.

#include<stdio.h>

long int fact( int x)
{
     long int f=1;
     int i;
     for(i=1;i<=x;i++)
       f=f*i;
     return(f);
}

int main()
{
int n ,r,i,ncr;
printf("Enter value of n and r : ");
scanf("%d %d",&n,&r);
if( n>= r)
{

ncr = fact( n) / (fact( r) * fact(n- r) );

printf("Combination C(%d , %d) = %d",n,r,ncr);
}

else {
		printf("Wrong Input ! Enter n>=1 .");
	}

return 0;

}
