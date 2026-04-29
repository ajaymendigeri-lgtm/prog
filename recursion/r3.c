#include<stdio.h>
int sum(int n){
    if(n>0){
        return sum(n-1)+n;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int ans=sum(n);
    printf("%d\n",ans);
}