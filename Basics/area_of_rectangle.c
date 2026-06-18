#include<stdio.h>
int main(){
    int l,b;
    printf(" Enter length: ", l);
    scanf("%d", &l);
    printf("Enter breath: ", b);
    scanf("%d", &b);
    int area = l * b;
    printf("Area of rectangle: %d\n", area);
    return 0;
}