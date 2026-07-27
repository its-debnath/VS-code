// 1. Sum of Digits ,Question: Write a C program that takes an integer from the user and calculates the sum of its digits using a function.

// Example:
// Input: 1234
// Output: Sum = 10

// 2. Temperature Checker

// Question: Write a C program using a function that accepts temperature as input and prints:

// "Hot" if temperature is greater than 10°C
// "Cold" otherwise

// Example:
// Input: 15
// Output: Hot

// 3. GST Calculator
// Question: Write a C program using a function to calculate the final price of a product after adding 18% GST.

// Example:
// Input: 1000
// Output: 1180

// 4. Greeting Program

// Question:
// Write a C program using a function that greets the user based on a character input:

// I → Print "Namaste"
// R → Print "Bonjour"
// Any other input → Print "Invalid Input"
// Arrays
// 5. Count Occurrence in Array

// Question:
// Write a C program to input 10 integers into an array and count how many times a specific number appears.

// Example:
// Array: 1 2 3 2 5 2 8 9 2 7
// Search: 2
// Output: 4 times

// 6. Find Largest Number in Array

// Question:
// Write a C program to find the largest element in an array.

// Example:
// Input: 4 8 2 15 9
// Output: Largest = 15

// 7. Find Smallest Number in Array

// Question:
// Write a C program to find the smallest element in an array.

// Example:
// Input: 4 8 2 15 9
// Output: Smallest = 2

// 8. Reverse an Array

// Question:
// Write a C program to reverse the elements of an array using a function.

// Example:
// Input: 1 2 3 4 5
// Output: 5 4 3 2 1

// 9. Insert Element at End

// Question:
// Write a C program to insert a new element at the end of an array.

// Example:
// Original Array: 1 2 3 4 5
// Insert: 8
// Output: 1 2 3 4 5 8

// 10. Array Input and Output

// Question:
// Write a C program to take 10 integers as input into an array and print them.

// Pointers
// 11. Maximum Using Pointers

// Question:
// Write a C program that accepts two integers and finds the larger number using pointers and a function.

// 12. Swap Two Numbers Using Pointers

// Question:
// Write a C program to swap two numbers using pointers.

// Example:
// Before: 10 20
// After: 20 10

// 13. Array Traversal Using Pointers

// Question:
// Write a C program to input array elements and print them using pointer arithmetic.

// 14. Print A to Z Using Pointer

// Question:
// Write a C program to print all uppercase English alphabets (A to Z) using a character pointer.

// Mixed Practice
// 15. Search Element in Array

// Question:
// Write a C program to search for a given number in an array and print how many times it occurs.

// 16. Sum of Array Elements

// Question:
// Write a C program to calculate the sum of all elements in an array.

// 17. Average of Array Elements

// Question:
// Write a C program to calculate the average of array elements.

// 18. Even and Odd Count

// Question:
// Write a C program to count how many even and odd numbers are present in an array.

// 19. Factorial Using Function

// Question:
// Write a C program to calculate factorial of a number using a function.

// 20. Fibonacci Series

// Question:
// Write a C program to print Fibonacci series up to N terms.


// /**
// //Write a program to remove blank spaces in a string.
// #include <stdio.h>
// int main() {
//     char str[100] = "The old bicycle leaned against the wall as the rain quietly started to fall";
//     char rts[100];
//     int j = 0;
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (str[i] != ' ') {
//             rts[j] = str[i];
//             j++;
//         }
//     }
//     rts[j] = '\0';
//     printf("%s", rts);
//     return 0;
// } **/


//Write a program to replace lowercase letters with uppercase & vice versa in a string.
#include <stdio.h>
int main(){
  char str[7] = "abcdef";
  for ( int i = 0 ; str[i] != '\0' ; i++ ) {
    printf("%c", str[i]);
  }

  return 0;
}