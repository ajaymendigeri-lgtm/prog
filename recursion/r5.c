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



/*
#include <stdio.h>

// Print negative Fibonacci (left side)
void negafib(int limit, int a, int b){
    if(a < limit) return;

    negafib(limit, b, a - b);  // go deeper first (to reverse order)
    printf("%d ", a);
}

// Print positive Fibonacci (right side)
void posfib(int limit, int a, int b){
    if(a > limit) return;

    printf("%d ", a);
    posfib(limit, b, a + b);
}

int main(){
    int limit;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    if(limit < 0){
        printf("Invalid input\n");
        return 0;
    }

    // Negative side (excluding 0)
    negafib(-limit, 0, 1);

    // Positive side (including 0)
    posfib(limit, 0, 1);
}
*/