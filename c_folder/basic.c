// #include <stdio.h>


// int sum_of_digit( int* n );
// int main() {

//     int n ;
//     printf(" Enter your number: ");
//     scanf("%d",n );

//     sum_of_digit(n);
//     return 0;
// }
// int sum_of_digit( int n ) {
    
// }

// #include <stdio.h>
// void cal_Temp( float temp);

// int main() {
//     float temp ;
//     printf(" Enter: ");
//     scanf("%f", &temp);
//     cal_Temp( float temp);
//     return 0 ;

// }


// void cal_Temp( float temp){
//     if ( temp > 10.00 ){
//          printf(" Hot "); 
//         }
//     else printf("Cold ")
//     }



//  #include <stdio.h>
//  int main(){
//     int arra[10];
//     int count = 0 ;
//     for ( int i = 0 ; i < 10 ; i++ ){
//         printf("Type %d Th value : ", (i+1));
//         scanf("$d", &arra[i]);
//     }
//     int n ;
//     printf("\nwhich number want to count from array :");
//     scanf("%d", &n );

//     for( int i = 0 ; i < 10 ; i++){
//         if( n==arr[i]){
//             count++ ;
//         }
//     }
//     printf(" total %d times ", count);
//     return 0 ;
//  }








//     int m , n ;

//     printf("First input : ")
//     scanf("%d" , &n);
//         printf("second input : ")
//     scanf("%d" , m );
//     max_calculation( &n , &m); 

//     void max_calculation( int* n , int* m ) {
//         int 
//     }




//     #include <stdio.h>
//     int reverse( int arr[] , int n );
//     int main() {

//         int arr[5] = {1,2,3,4,5};
//         reverse( arr , 5 );

//         for 
//         return 0 ;
//     }
//      int reverse( int arr[] , int n ) {
//         for( int i = 0 ; i < n/2 ; i++ ){
//             int first_val = arr[i];
//             int second_val = arr[n-i-1];

//             arr[i] = first_val ;
//             arr[n-i-1] = second_val ;
//         }
//      }


// #include <stdio.h>
//     int main() {
//         int n , count = 0;
//         int arr[10] = {1,2,3,4,5};
//         scanf(" %d " , &n );
        


//         for( int i = 0 ; i<= 10 ; i++ ){
//             if( arr[i] == n ){
//                 count++ ;
//             }
//         }
//         printf(" %d " , count );
//         return 0 ;
//     }

// // #include <stdio.h>
// // #include <string.h>

// // int main() {
// //     char str[100];
// //     int freq[256] = {0};
// //     int i, max = 0;
// //     char ch;

// //     printf("Enter a string: ");
// //     fgets(str, sizeof(str), stdin);

// //     for(i = 0; str[i] != '\0'; i++) {
// //         freq[(unsigned char)str[i]]++;
// //     }

// //     for(i = 0; i < 256; i++) {
// //         if(freq[i] > max && i != '\n') {
// //             max = freq[i];
// //             ch = i;
// //         }
// //     }

// //     printf("Highest frequency character: %c\n", ch);
// //     printf("Frequency: %d\n", max);

// //     return 0;
// // }

// // #include <stdio.h>
// // #include <string.h>

// // int main() {
// //     char str[100] ; //= {'A', 'P', 'N', 'A', 'G', 'C', 'O', 'L', 'L', 'E', 'G', 'G', '\0'};
// //     int i, j, count, max = 0;
// //     char maxChar;

// //    printf("Enter a string: ");
// //    gets(str);

// //     for(i = 0; str[i] != '\0'; i++) {
// //         count = 1;

// //         for(j = i + 1; str[j] != '\0'; j++) {
// //             if(str[i] == str[j]) {count++;}}

// //         if(count > max) {
// //             max = count;
// //             maxChar = str[i];}}
    
// //     printf("Highest frequency character: %c", maxChar);

// //     return 0;
// // }

// #include <stdio.h>
// int main (){
// //comditional statement

//    int today = 2 ;
//   switch(today) {
//      case 1:
//         printf("sunday");
//         break;
//      case 2:
//         printf("monday");
//         break;
//      case 3:
//         printf("tuesday");
//         break;
//     default: printf("invalid");
//   }
  
//     return 0;
// }

// Level 1: Basics (Input/Output, Variables)
// Print Hello, World!
// Print your name, age, and college.
// Take two integers as input and print their sum.
// Find the average of three numbers.
// Swap two numbers (using a third variable).
// Swap two numbers (without a third variable).
// Convert Celsius to Fahrenheit.
// Convert Fahrenheit to Celsius.
// Find the area and perimeter of a rectangle.
// Find the area of a circle.

//Level 2: Conditions (if, else)
// Check whether a number is even or odd.
// Check whether a number is positive, negative, or zero.
// Find the largest of two numbers.
// Find the largest of three numbers.
// Check whether a year is a leap year.
// Check whether a character is uppercase or lowercase.
// Check whether a character is a vowel or consonant.
// Find whether a number is divisible by both 3 and 5.
// Calculate electricity bill based on units.

//Level 3: Loops (for, while, do-while)
// Print numbers from 1 to 100.
// Print numbers from 100 to 1.
// Print all even numbers from 1 to N.
// Print all odd numbers from 1 to N.
// Find the sum of first N natural numbers.
// Find the factorial of a number.
// Print the multiplication table of a number.
// Reverse a number.
// Count the digits in a number.
// Find the sum of digits.
// Check whether a number is a palindrome.

//Level 4: Number Problems
// Check whether a number is an Armstrong number.
// Check whether a number is prime.
// Print all prime numbers from 1 to N.
// Find the GCD (HCF) of two numbers.
// Find the LCM of two numbers.
// Generate the Fibonacci series.
// Check whether a number is perfect.
// Find the largest digit in a number.
// Find the smallest digit in a number


// Level 5: Patterns

// *
// **
// ***
// ****
// *****
// *****
// ****
// ***
// **
// *

// 1
// 12
// 123
// 1234
// 12345

// 1
// 22
// 333
// 4444
// 55555

//     *
//    ***
//   *****
//  *******
// *********

// Level 6: Functions
// Write a function to add two numbers.
// Write a function to check prime numbers.
// Write a function to calculate factorial.
// Write a function to reverse a number.
// Write a function to find the maximum of two numbers.

// Level 7: Arrays
// Input and print an array.
// Find the sum of array elements.
// Find the largest element.
// Find the smallest element.
// Find the average of array elements.
// Reverse an array.
// Search an element (Linear Search).
// Sort an array in ascending order.
// Sort an array in descending order.
// Find the second largest element.


// #include <stdio.h>
// int main()
// {
//     int arr[100],n,i ;
//     int sum = 0;
//     printf("Enter size: ");
//     scanf("%d",&n);

//     printf("Enetr value: ");
//     for (int i = 0 ; i<n ; i++ ){
//         scanf("%d",&arr[i]);
//     };
//     sum = arr[0];
//     for(int i = 0 ; i < n ; i++){
//         if (arr[i] > sum )
//             sum = arr[i];
//     }

//     printf("largest : %d",sum);

    
//     return 0;
// }










#include <stdio.h>
#include <string.h>

int main() {
    int n =8;
    (n%2==0) ? printf("even") : printf("odd");
    return 0;
}








// Level 8: Strings
// Find the length of a string (without strlen()).
// Reverse a string.
// Check whether a string is a palindrome.
// Count vowels and consonants.
// Count words in a sentence.
// Convert lowercase to uppercase.
// Convert uppercase to lowercase.
// Compare two strings (without strcmp()).
// Copy one string to another.
// Concatenate two strings (without strcat()).

// Level 9: Pointers
// Swap two numbers using pointers.
// Find the largest element using pointers.
// Print an array using pointers.
// Reverse an array using pointers.
// Demonstrate pointer arithmetic.

// Level 10: Structures & Files
// Store student details using a structure.
// Store employee details.
// Write data to a file.
// Read data from a file.
// Copy one file into another.
// Challenge Problems
// Guess the Number game.
// Rock-Paper-Scissors.
// Student Grade Management System.
// Bank Management System.
// Library Management System.
// Tic-Tac-Toe (2 players).
// Snake and Ladder (basic version).
// Calendar generator.
// ATM Simulation.
// Contact Management System.