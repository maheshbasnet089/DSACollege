#include <stdio.h>
#include<conio.h>
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    int i;
    
    for ( i = 1; i <= n; i++) 
    {
        result *= i;
    }
    
    return result;
}

int main() {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    
    unsigned long long result = factorial(number);
    printf("The factorial of %d is: %llu\n", number, result);
    
    return 0;
}
