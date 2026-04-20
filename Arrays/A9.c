#include<stdio.h>
int main(){
    int size,temp,min,ind;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<size-1; i++){
        min=arr[i];
        ind=i;
    for(int j=i+1; j<size; j++){
        if(arr[j]<min){
            min=arr[j];
            ind=j;
        }
    }
    temp=arr[i];
    arr[i]=arr[ind];
    arr[ind]=temp;
    }
    printf("Selection Sort: ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }


}