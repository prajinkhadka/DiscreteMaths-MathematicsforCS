/*
Write a program that takes name and age of a 5 persons as an input and gives the degree of membership of the person as its output according to following membership functions.

a. Degree of membership = 1 			if age<=20
Degree of membership = (30-age)/10 		if age>20 and age<=30
Degree of membership = 0 				if age>30

b. Degree of membership = 1 			if age<=15
Degree of membership = (35-age)/20 		if age>15 and age<=35
Degree of membership = 0 				if age>35

Perform set operations according to rules of fuzzy sets, on these two sets.

*/
#include<stdio.h>
int i,age[5];
float a[5],b[5],c[5];
char name[5][15];
void unio()
{
 for(i=0;i<5;i++)
 {
  if(a[i]>=b[i])
  c[i]=a[i];
  else
  c[i]=b[i];
 }
 printf("union\n");
 printf("{  ");
 for(i=0;i<5;i++)
 {
  printf("%.2f / %s ,",c[i],name[i]);
 }
 printf("}");
}
void intersection()
{
 for(i=0;i<5;i++)
 {
  if(a[i]<=b[i])
  c[i]=a[i];
  else
  c[i]=b[i];
 }
 printf("\nintersection\n");
 printf("{");
 for(i=0;i<5;i++)
 {
  printf("%.2f / %s , ",c[i],name[i]);
 }
 printf("}");
}
void complement()
{
 printf("\ncomplement\n");
 printf("complement of A");
 printf("{");
 for(i=0;i<5;i++)
 {
 printf("%.2f / %s ,",1.00-a[i],name[i]);
 
 }
 printf("}");
 printf("\ncomplement of B");
 printf("{ ");
 for(i=0;i<5;i++)
 {
 printf("%.2f / %s ,",1.00-b[i],name[i]);
 
 }
 printf("}");
 
}

 
int main()
{
 for(i=0;i<5;i++)
 {
  printf("Name=\t");
  scanf("%s",&name[i]);
  printf("Age=\t");
  scanf("%d",&age[i]);
 }
 printf("{ ");
 for(i=0;i<5;i++)
 {
  if(age[i]<=20)
  {
   a[i]=1;
   printf("%.2f / %s ",a[i],name[i]);
  }
  else if((age[i]>20)&&(age[i]<=30))
  {
   a[i]=(30-age[i])/10.00;
    printf("%.2f / %s",a[i],name[i]); 
  }
  else if(age[i]>30)
  {
   a[i]=0;
   printf("%.2f / %s",a[i],name[i]);
  }
  printf(", ");
 }
 printf("}");
 printf("\n");
  printf("{ ");
 for(i=0;i<5;i++)
 {
  if(age[i]<=15)
  {
   b[i]=1;
   printf("%.2f / %s ",b[i],name[i]);
  }
  else if((age[i]>15)&&(age[i]<=35))
  {
   b[i]=(35-age[i])/20.00;
    printf("%.2f / %s",b[i],name[i]); 
  }
  else if(age[i]>35)
  {
   b[i]=0.00;
   printf("%.f / %s",b[i],name[i]);
  }
  printf(", ");
 }
 printf("}");
 printf("\n");
 unio();
 intersection();
 complement();
 return 0;
 
}
