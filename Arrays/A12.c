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

    for(int i=0; i<size; i++){
        int count=0;
        int flag=0;
        for(int j=0; j<size; j++){
            if(j<i){
                if(arr[i]==arr[j]){
                    flag=1;
                    break;
                }
            }
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(flag==0){
        printf("%d=%d\n",arr[i],count);
        }


    }




}