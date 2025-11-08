#include <stdio.h>
//eQ108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/

int main(){
    int x;
    printf("Enter the space:");
    scanf("%d",&x);
    int array[x];
    for(int i = 0 ; i<x;i++){
        printf("Enter the number :");
        scanf("%d",&array[i]);
    }
    
    int result[x];

    for(int i =0;i<x;i++){
        int product = 1;
        for(int j =0;j<x;j++){
            if(i!=j){
                product = array[j]*product;

            }
            
        }
        result[i]= product;
            
        }
        printf("[");
    for(int i = 0; i<x;i++){
        printf("%d ,",result[i]);

    }
    printf("]");
    return 0 ;

}
    