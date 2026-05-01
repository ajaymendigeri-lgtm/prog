#include<stdio.h>
int power(int a, int b){
    if(b==0) return 1;
        return power(a,b-1)*a;
    
   
}



int main(){
    int x;
    printf("Enter the base value: ");
    scanf("%d",&x);

    int y;
    printf("Enter the power: ");
    scanf("%d",&y);   

    int ans=power(x,y);
    printf("%d\n",ans);
}