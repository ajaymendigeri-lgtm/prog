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

    for(int i=0; i<size; i++){
        int element=arr[i];
        int temp=element;
        int rev=0;
        while(element>0){
            rev=rev*10+element%10;
            element=element/10;
    }

    if(temp==rev){
        printf("%d is Palindrome\n",temp);
    }
    else{
        printf("%d Not palindrome\n",temp);
    }
    }
    return 0;


}

