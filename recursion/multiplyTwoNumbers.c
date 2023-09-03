#include <stdio.h>

int multiply(int a, int b){
    if(b>=1){
        printf("%d %d",a,b);
        return a + multiply(a,b-1);
    }else{
        return 0;
    }
}

void main(){
    int a,b,result;
    printf("Enter first number");
scanf("%d",&a);
printf("Enter second number");
scanf("%d",&b);
    result = multiply(a,b);
    printf("The result is %d",&result);
}