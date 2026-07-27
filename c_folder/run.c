// #include <stdio.h>
// int main() {
//   int arr[] = {1, 2, 3, 4, 5 };
//     int n = 5;
//     int num = 8 ;
//     arr[n] = num ; 

//  n++ ;
//   for ( int i = 0 ; i < n ; i++ ) {
//     printf("%d ", arr[i]);
//   }
//   return 0;
// }



// // (1) : Design a calcalutor switch-case
// #include <stdio.h>

// int main()
// {
//     printf("HELLO WORLD\n");
//     return 0;
// }


#include <stdio.h>

int main(){
    // int length = 3;
    // int breadth = 6;
    int length, breadth;
    printf("Enter length\n");
    scanf("%d", &length);

    printf("Enter breadth\n");
    scanf("%d", &breadth);

    printf("The area of this rectangle is %d", length*breadth);
    return 0;
}