//Write a program that takes a real number and produces is ceiling and floor integers as output.

/* 
#include<stdio.h> //using math library
#include<math.h>
main()
{
float n;
printf("Enter any number:");
scanf("%f",&n);
printf("Ceiling number: %f\n",ceil(n));
printf("Floor number: %f",floor(n));
return 0;

} */


#include<stdio.h> //without using math library
#include<math.h>
main()
{
float n;
int x;
printf("Enter any number: ");
scanf("%f",&n);
x=(int)n;
if(n>0)
{
if(n==x)
{
printf("Floor is %d\n",x);
printf("Ceiling is %d",x);
}
else
{
printf("Floor is %d\n",x);
printf("Ceiling is %d",x+1);
}

}
else if(n==0)
{
printf("Floor is %d\n",x);
printf("Ceiling is %d",x);
}
else //n<0
{
if(n==x)
{
printf("Floor is %d\n",x);
printf("Ceiling is %d",x);
}
else
{
printf("Floor is %d\n",x-1);
printf("Ceiling is %d",x);
}

}
return 0;
}
