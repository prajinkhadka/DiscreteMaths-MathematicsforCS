/*
4 Write a program to perform operations with large integers by breaking down
them into set of small integers
*/
#include<stdio.h>
int main()
{
int user_num[2];
int numbers[4];
int a[10][10];
int i,j,sum[4];

printf("\nEnter two numbers of seven digits: \n");
for(i=0;i<=1;i++)
{
scanf("%d",&user_num[i]);
}

printf("\n\nEnter four relative prime numbers:\n");
for(i=0;i<4;i++)
{
scanf("%d",&numbers[i]);
}

for(i=0;i<2;i++)
{
for(j=0;j<4;j++)
{
a[i][j]=user_num[i] % numbers[j];
}
}

for(i=0;i<4;i++)
{
j=0;
sum[i]=(a[j][i]+a[j+1][i])%numbers[i];
}

printf("\n\n The tuple of 4 numbers is: \n\n");
printf("(");
for(i=0;i<4;i++)
{

printf("%d , ",sum[i]);
}
printf(")");

printf("\n\n");
}
