#include <stdio.h>

int sumOfDigits(int n){
    if(n<10){
        return n;
    }else{
        return n%10+sumOfDigits(n/10);
    }
}

void main(){
    int n,result;
    printf("Enter the number");
    scanf("%d",&n);
    result  = sumOfDigits(n);
    printf("The sum of Digits of number %d is %d",n,result);
}