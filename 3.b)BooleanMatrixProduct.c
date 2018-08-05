/*
Write a program to implement Boolean matrix product
*/


#include<stdio.h>
#include <stdbool.h>

int main()
{
	int i,j,k,r1,c1,r2,c2;
	int a[10][10],b[10][10],result[10][10];

	 printf("Enter rows and columns of first matrix\n");
  scanf("%d%d", &r1, &c1);

  printf("Enter rows and column for second matrix: ");
    scanf("%d %d",&r2, &c2);

	if(c1==r2)
	{
		 printf("\nEnter elements of matrix 1:\n");
   		 for(i=0; i<r1; ++i)
   		 {
   		 	 for(j=0; j<c1; ++j)
        {
            printf("Enter elements a%d%d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }
   		 }


    // Storing elements of second matrix.
    printf("\nEnter elements of matrix 2:\n");
    for(i=0; i<r2; ++i)
    {
    for(j=0; j<c2; ++j)
        {
            printf("Enter elements b%d%d: ",i+1, j+1);
            scanf("%d",&b[i][j]);
        }
    }
        	// Initializing all elements of result matrix to 0
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
        {
            result[i][j] = 0;
        }

         for(i=0; i<r1; ++i)
         {
         	 for(j=0; j<c2; ++j)
         	 {
         	 	for(k=0; k<c1; ++k)
            {
                result[i][j] |=a[i][k] & b[k][j];
            }
         	 }

         }


    // Displaying the result
    printf("\nOutput Matrix:\n");
    for(i=0; i<r1; ++i)
    {
     for(j=0; j<c2; ++j)
        {
            printf("%d \t", result[i][j]);

        }
        	      printf("\n");
    }

 }


	else
	{
		printf("Error! column of first matrix not equal to row of second.\n\n");
	}
}
