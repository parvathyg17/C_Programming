// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num=521;
    int sum=0;
    int digit;
    int n=num;
    int i;
    while(num>0){
        digit=num%10;
        sum+=digit;
        num=num/10;
    }
    printf("sum of digit of %d is : %d ",n,sum);

    return 0;
}