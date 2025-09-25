// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num=5;
    int a=0;
    int b=1;
    for(int i=1;i<=num;i++){
        printf("%d",a);
        int sum=a+b;
        a=b;
        b=sum;
    }

    return 0;
}