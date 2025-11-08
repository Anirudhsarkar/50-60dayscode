#include <stdio.h>
//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
int first(int assekt[],int get, int n){
    int count = 0 ;
    int k;
    
    for(int i = 0; i<n;i++){
        count++;
        if(assekt[i]==get){
            break;
        }
       
    }
    printf("%d,",count);
}
int decend(int ass[],int get , int n ){
    int count =0;
    int m = n-1;
    int v;
    
    for(int i = m;i>=0;i--){
        count++;
        if(ass[i]==get){
            break;
        }
        
        v = n-count;
        printf("%d",v);
       
    }
}
int main (){
    int x;
    printf("Enter the space of array ");
    scanf("%d",&x);
    int array[x];
    for(int i =0 ; i<x;i++){
        scanf("%d",&array[i]);
    }
    int target;
    printf("Enter the target");
    scanf("%d",&target);
    first(array,target,x);
    decend(array,target,x);
    return 0 ; 

}