#include<stdio.h>
int main(){
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    int sum=0;
    for(int i=0; i<size; i++){
        sum=sum+arr[i];
    }
    printf("Sum of array elements: %d\n",sum);
    printf("Average: %g\n",(float)sum/size);
    
}