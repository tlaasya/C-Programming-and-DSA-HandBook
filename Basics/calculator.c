#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    int c = a+b;
    int d = a-b;
    int e = a*b;
    int f = a/b;
    int g = a%b;
    printf("sum of numbers: %d\n", c);
    printf("sub of numbers: %d\n", d);
    printf("multipul of numbers: %d\n", e);
    printf("division of numbers: %d\n", f);
    printf("module of two numbers: %d\n", g);
    return 0;
}