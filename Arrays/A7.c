#include<stdio.h>
int without(int size, int arr[]){
    int last=arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]<last){
            last=arr[i];
        }
    }
    printf("After the sorting: %d ",last);
    for(int i=1;i<size;i++){
        int min;
        for(int j=0; j<size;j++){
            if(arr[j]>last){
                min=arr[j];
                break;
            }
        }
        for(int j=0; j<size; j++){
            if(arr[j]>last && arr[j]<min){
                min=arr[j];
            }
        }
        printf("%d ",min);
        last= min;
    }

}


int main(){
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    without(size,arr);

    printf("\nOriginal array: ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

}