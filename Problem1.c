/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.*/
#include <stdio.h>

#define UPPER_LIMIT 1000

int main(){
    int sum;
    sum = 0;
    for (size_t i = 1; i < UPPER_LIMIT; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
        if (i % 5 == 0) {
            sum += i;
        }
        if (i % 3 == 0 && i % 5 == 0) {
            sum -= i;
        }
    }
    printf("Euler Project Problem 1 answer = %d\n", sum);
}
