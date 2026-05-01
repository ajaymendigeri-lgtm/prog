#include <stdio.h>

void fibonacci(int limit, int a, int b){
    if(a > limit) return;

    printf("%d ", a);
    fibonacci(limit, b, a + b);
}

int main(){
    int limit;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    if(limit < 0){
        printf("Invalid input");
    } else {
        fibonacci(limit, 0, 1);
    }
}