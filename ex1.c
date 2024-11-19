/******************
Name:Gilad Bergfroind 
ID:331749978
Assignment:ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  int number = 0;
  int position = 0;
  // What bit
    /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  printf("What bit:\n");
  printf("Please enter a number:\n");
  scanf("%d",&number);
  printf("Please enter a position:\n");
  scanf("%d",&position);
  int bitInPosition = (number>>position) & 1; // by moving the bits of the number position times to the right we are getting the wnated bit and by doing &1 we are taking the most right bit
  printf("The bit in position %d of number %d is: %d", position, number, bitInPosition);
  
  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
    printf("Please enter a number:\n");
    scanf("%d",&number);
    printf("Please enter a position:\n");
    scanf("%d",&position);
    int bitOnInPosition = number | (1<<position);
    printf("Number with bit %d set to 1: %d\n",position,bitOnInPosition);
    int bitOffInPosition = number & ~(1<<position);
    printf("Number with bit %d set to 0: %d",position, bitOffInPosition);
  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
      printf("Please enter a number:\n");
    scanf("%d",&number);
    printf("Please enter a position:\n");
    scanf("%d",&position);
    int toggledBit = number ^ (1<<position);
    printf("Number with bit %d toggled: %d\n",position, toggledBit);
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
    printf("Please enter a number:\n");
    scanf("%d",&number);
    int leastSignificantBit = number & 1;
    int evenOrOdd = leastSignificantBit ^ 1;
    printf("%d",evenOrOdd);
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
    printf("Please enter the first number (octal):\n");
    int number2, number1;
    scanf("%o",&number2);
    printf("Please enter the second number (octal):\n");
    scanf("%o",&number1);
    int hexaSum = number1 + number2;
    printf("The sum in hexadecimal: %X\n",hexaSum);
    int position3 = (hexaSum >> 3)&1;
    int position5 = (hexaSum >> 5)&1;
    int position7 = (hexaSum >> 7)&1;
    int position11 = (hexaSum >> 11)&1;
    printf("The 3,5,7,11 bits are %d%d%d%d\n", position3,position5,position7,position11);
  printf("Bye!\n");
  
  return 0;
}
