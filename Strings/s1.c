#include<stdio.h>
int main(){
    char str[50];
    printf("Enter the string: ");
    scanf("%s",str);

    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
        printf("\n");
    }
    printf("The length:%d\n",i);
}