#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , n = 2 ;
    int higher  , lower , quotient , remainder;

    printf("Enter  2 integers: \n");

    int arr[2];

    for ( i  = 0 ; i < 2; i++) {
        scanf("%d" , &arr[i]);
    }
    higher = (arr[0] > arr[1]) ? arr[0] : arr[1];
    lower = (arr[0] > arr[1]) ? arr[1] : arr[0];

    while (remainder != 0 ){

    quotient = higher / lower;   // Integer division
    remainder = higher % lower;   // Remainder

    printf("a = b * n + r\n");
    printf("%d = %d * %d + %d\n \n", higher, lower, quotient, remainder);

    higher = lower;
    lower = remainder;

    }
    printf("The GCD is: %d\n", higher);

    return 0;
}
