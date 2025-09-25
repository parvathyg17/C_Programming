// //Write a program to check if an array is the same when read forwards and backwards. For example:
// Input:
// arr = {1, 2, 3, 2, 1}
// Output:
// Yes, it is Palindromic

#include <stdio.h>

int main() {
int arr[10]={1,2,3,2,1};
int i;
int n=5;
int flag=1;

for(i=0;i<n/2;i++){
   if(arr[i] != arr[n-1-i]){
   flag=0;
   break;
   }
}
if(flag==1){
    printf("its palindrome");
}
else{
    printf("not");
}


    return 0;
}