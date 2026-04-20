#include<stdio.h>
int main(){
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements: ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Array elements: ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    
    for(int i=0; i<size/2; i++){
        int t=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=t;
    }

    printf("After reverse: ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}