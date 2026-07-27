#include <stdio.h>


int sum_of_digit( int* n );
int main() {

    int n ;
    printf(" Enter your number: ");
    scanf("%d",n );

    sum_of_digit(n);
    return 0;
}
int sum_of_digit( int n ) {
    
}

#include <stdio.h>
void cal_Temp( float temp);

int main() {
    float temp ;
    printf(" Enter: ");
    scanf("%f", &temp);
    cal_Temp( float temp);
    return 0 ;

}


void cal_Temp( float temp){
    if ( temp > 10.00 ){
         printf(" Hot "); 
        }
    else printf("Cold ")
    }



 #include <stdio.h>
 int main(){
    int arra[10];
    int count = 0 ;
    for ( int i = 0 ; i < 10 ; i++ ){
        printf("Type %d Th value : ", (i+1));
        scanf("$d", &arra[i]);
    }
    int n ;
    printf("\nwhich number want to count from array :");
    scanf("%d", &n );

    for( int i = 0 ; i < 10 ; i++){
        if( n==arr[i]){
            count++ ;
        }
    }
    printf(" total %d times ", count);
    return 0 ;
 }








    int m , n ;

    printf("First input : ")
    scanf("%d" , &n);
        printf("second input : ")
    scanf("%d" , m );
    max_calculation( &n , &m); 

    void max_calculation( int* n , int* m ) {
        int 
    }




    #include <stdio.h>
    int reverse( int arr[] , int n );
    int main() {

        int arr[5] = {1,2,3,4,5};
        reverse( arr , 5 );

        for 
        return 0 ;
    }
     int reverse( int arr[] , int n ) {
        for( int i = 0 ; i < n/2 ; i++ ){
            int first_val = arr[i];
            int second_val = arr[n-i-1];

            arr[i] = first_val ;
            arr[n-i-1] = second_val ;
        }
     }


#include <stdio.h>
    int main() {
        int n , count = 0;
        int arr[10] = {1,2,3,4,5};
        scanf(" %d " , &n );
        


        for( int i = 0 ; i<= 10 ; i++ ){
            if( arr[i] == n ){
                count++ ;
            }
        }
        printf(" %d " , count );
        return 0 ;
    }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];
//     int freq[256] = {0};
//     int i, max = 0;
//     char ch;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     for(i = 0; str[i] != '\0'; i++) {
//         freq[(unsigned char)str[i]]++;
//     }

//     for(i = 0; i < 256; i++) {
//         if(freq[i] > max && i != '\n') {
//             max = freq[i];
//             ch = i;
//         }
//     }

//     printf("Highest frequency character: %c\n", ch);
//     printf("Frequency: %d\n", max);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100] ; //= {'A', 'P', 'N', 'A', 'G', 'C', 'O', 'L', 'L', 'E', 'G', 'G', '\0'};
//     int i, j, count, max = 0;
//     char maxChar;

//    printf("Enter a string: ");
//    gets(str);

//     for(i = 0; str[i] != '\0'; i++) {
//         count = 1;

//         for(j = i + 1; str[j] != '\0'; j++) {
//             if(str[i] == str[j]) {count++;}}

//         if(count > max) {
//             max = count;
//             maxChar = str[i];}}
    
//     printf("Highest frequency character: %c", maxChar);

//     return 0;
// }

#include <stdio.h>
int main (){
//comditional statement

  //  int today = 2 ;
  // switch(today) {
  //    case 1:
  //       printf("sunday");
  //       break;
  //    case 2:
  //       printf("monday");
  //       break;
  //    case 3:
  //       printf("tuesday");
  //       break;
  //   default: printf("invalid");
  // }
  
    return 0;
}