// 9.  Sum of All Even Digits of a Number: Calculate  sum of all even digits of a Number.
//  Calculate  sum of all even digits of a Number.
// Input:
// Enter the Number : 1234
// Output:
// Sum of even digits: 6




#include <stdio.h>

int main() {
    int i;
    int num;
    int digit;
    int sum=0;
    int fact=1;
    
    printf("enter a num:");
    scanf("%d",&num);
   while(num>0){
       digit=num%10;
       if(digit%2==0){
           sum=sum+digit;
       }
      num=num/10;
   }
    printf("Sum of even digits:%d",sum);

    return 0;
}