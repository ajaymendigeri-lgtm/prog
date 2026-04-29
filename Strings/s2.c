#include<stdio.h>
int main(){
    char str[50];
    printf("Enter the string: ");
    scanf("%s",str);

    int i=0;
    for(i=0;str[i]!='\0';i++){
        
    }
    for(int j=0; j<i/2; j++){
        int temp=str[j];
        str[j]=str[i-1-j];
        str[i-1-j]=temp;
    }
    printf("%s\n",str);
}