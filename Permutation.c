/1. Write a program to generate permutations.

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
int n ,r,i,p;
printf("Enter value of n and r : ");
scanf("%d %d",&n,&r);

  p= fact( n) / fact( n- r);

printf("Permutation P(%d , %d) = %d",n,r,p);

return 0;

}
