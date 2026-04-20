#include<stdio.h>
int main(){
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0; i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    int flag=1;
    for(int i=0; i<size/2; i++){
        if(arr[i]!=arr[size-i-1]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("Palindrome\n");
    }
    else{
        printf("Not palindrome\n");
    }
}