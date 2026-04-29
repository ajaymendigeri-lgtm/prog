#include<stdio.h>
int dec(int n){
    if(n>0){ 
    printf("%d\n",n);
        dec(n-1);
    printf("%d\n",n);

    return 0;
    }
    
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    dec(n);
}