// //Write a program to find the largest prime number in an unsorted 1D array. If no prime exists, return a message. 
// Input:
// arr[] = {8, 10, 23, 45, 2, 67}
// Output:
// Largest prime number is: 67




#include <stdio.h>

int main() {
    int arr[20]={1,2,3,4,5,6};
    int i,j;
    int count=0;
    int isprime;
    int n=6;
    int new=-1;
  
    for(i=0;i<n;i++){
        isprime=1;
       
        if(arr[i]<2){
            isprime=0;
        }
        else{
            for(j=2;j*j<=arr[i];j++){
                if(arr[i]%j==0){
                    isprime=0;
                    break;
                }
            }
        }
        if(isprime&&arr[i]>new){
            new=arr[i];
            
            
        }
    }
    if (new != -1) {
        printf("Largest prime number is: %d\n", new);
    } else {
        printf("No prime number exists in the array.\n");
    }
    
    
     
    for(i=0;i<n;i++){
        isprime=1;
       
        if(arr[i]<2){
            isprime=0;
        }
        else{
            for(j=2;j*j<=arr[i];j++){
                if(arr[i]%j==0){
                    isprime=0;
                    break;
                }
            }
        }
        if(isprime&&(new==-1||arr[i]<new)){
            new=arr[i];
            
            
        }
    }
    if (new != -1) {
        printf("smalest prime number is: %d\n", new);
    } else {
        printf("No prime number exists in the array.\n");
    }

    

 
    return 0;
}