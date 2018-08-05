/*
1. Write a program to implement Euclidean and Extended Euclidean algorithms
*/
#include<stdio.h>
int main()
{
        int a,b,u=1,v=0,m,n,q,r,x=0,y=1,gcd;
        printf("Enter a and b:\n");
        scanf("%d %d",&a,&b);
        while (a!=0) {
                q=b/a;
			 	r=b%a;
                m=x-u*q;
				n=y-v*q;
                b=a;
				a=r;
				x=u;
				y=v;
				u=m;
				v=n;
            }
            printf("x=%d\n y=%d\n gcd=%d",x,y,b);
	return 0;
}
