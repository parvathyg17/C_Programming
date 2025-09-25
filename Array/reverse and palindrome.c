// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num=1201;
    int sum=0;
    int digit;
    int reverse=0;
    int n=num;
    int i;
    
    while(num>0){
        digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
        
        
    }
    if(n == reverse){
        printf("palindrome");
    }
    else{
        printf("not");
    }
    printf("\nreversed no is %d",reverse);
    return 0;
}



//factorial
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num=6;
    int i;
    int fact=1;
    
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}




//// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num=6;
    int i;
    int base=2;
    int exponent=3;
    int result=1;
    
    
    for(i=1;i<=exponent;i++){
         result=result*base;
    }
    printf("%d",result);
    return 0;
}