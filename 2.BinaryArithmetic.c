/*
Write a program to implement binary integer addition, multiplication, and division
*/

//At first make the file and save the given code name it as binaryheader.h 
int convert(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec % 2 + 10 * convert(dec / 2));
    }
}

//Now use this code in the same folder where the header file has been created

#include <stdio.h>
  #include <stdlib.h>
  #include"binaryheader.h"

  /* performs binary addition for the given values */
  int binaryAddition(int n1, int n2) {
        int carry;
        while (n2 != 0) {
                /* calculating the carry and do a left shift*/
                carry = (n1 & n2) << 1;
                /* calculating the sum */
                n1 = n1 ^ n2;
                n2 = carry;
        }
        return n1;
  }

  /* performs binary subtraction for the given values */
  int binarySubtracton(int n1, int n2)
   {
        int carry;
        /* finding two's complement for n2 and add the o/p with n1 */
        n2 = binaryAddition(~n2, 1);

        while (n2 != 0) {
                /* calculating the carry and do a left shift*/
                carry = (n1 & n2) << 1;
                /* calculating the sum */
                n1 = n1 ^ n2;
                n2 = carry;
        }
        return n1;
  }

  /* performs binary multiplication for the given values */
  int binaryMultiplication(int n1, int n2) {
        int i, res = 0;
        for (i = 0; i < n2; i++) {
                res = binaryAddition(res, n1);
        }
        return res;
  }

  /* performs binary division for the given values */
  int binaryDivision(int n1, int n2) {
        int i, res, count = 0, twosComplement;
        if (n1 < n2) {
                printf("Division of %d and %d is %d\n", n1, n2, 0);
                return 0;
        }

        res = n1;
        twosComplement = binaryAddition(~n2, 1);
        /*
         * Add n1 with 2's complement of n2 continuosly
         * until n1 becomes lesser value than n2.
         * Division of two numbers without using arithmetic
         * operator.
         */
        for (i = 0; res > 0; i++) {
                res = binaryAddition(res, twosComplement);
                if (res <= 0) {
                        if (res == 0)
                                count = binaryAddition(count, 1);
                        break;
                } else {
                        count = binaryAddition(count, 1);
                }
        }
        return count;
  }


  int main() {
        int n1, n2, dec1, dec2, res, ch;
        while (1) {
                printf("1. Binary Addition\n");
                printf("2. Binary Subtraction\n");
                printf("3. Binary Multiplication\n");
                printf("4. Binary Division\n5. Exit\n");
                printf("Enter your choice:");
                scanf("%d", &ch);

                /* if choice is not exit, get the inputs n1 and n2 */
                if (ch != 5) {
                       printf("Enter two decimal numbers: ");
                        scanf("%d%d", &dec1, &dec2);
                        n1 = convert(dec1);
    					n2=convert(dec2);
                }

                switch(ch) {
                        case 1:
                                /* binary addition */
                                res = binaryAddition(n1, n2);
                                break;
                        case 2:
                                /* binary subtraction */
                                res = binarySubtracton(n1, n2);
                                break;
                        case 3:
                                /* binary multiplication */
                                res = binaryMultiplication(n1, n2);
                                break;
                        case 4:
                                /* binary division */
                                res = binaryDivision(n1, n2);
                                break;
                        case 5:
                                exit(0);
                        default:
                                printf("Wrong option!!\n");
                                break;
                }
                printf("Result: %d\n\n", res);
        }
  }
