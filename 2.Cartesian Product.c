//Write a program that takes two or more sets as input and produces their Cartesian product as output.

#include<stdio.h>
int main()
{
	int a[10],b[10],c[10],i,j,k=0,n,m;
	 printf("Enter the size of array A");
 scanf("%d",&n);
 printf("Enter the element of First array A");
   for(i=0;i<n;i++)
     {
       scanf("%d",&a[i]);
     }
     printf("Enter the size of array B");
 scanf("%d",&m);
 printf("Enter the elements of array B");
   for(j=0;j<m;j++)
     {
       scanf("%d",&b[j]);
     }
     printf("{ ");
     for(i=0;i<n;i++)
     {
     	for(j=0;j<m;j++)
     	{
     		printf("( %d , %d ), ",a[i],b[j]);
		 }
	 }
	 printf("}");
}
