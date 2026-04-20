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

    printf("Sum of array if each element: ");
    for(int i=0; i<size; i++){
        int sum=0;

        while(arr[i]>0){
            sum=sum+arr[i]%10;
            arr[i]=arr[i]/10;
        }
        printf("%d ",sum);
    }
    printf("\n");
}