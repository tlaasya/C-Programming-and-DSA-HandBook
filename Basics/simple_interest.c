#include<stdio.h>
int main(){
    int p,r,t;
    printf("Enter the principle: ");
    scanf("%d", &p);
    printf("Enter the rate: ");
    scanf("%d", &r);
    printf("Enter the time: ");
    scanf("%d", &t);
    float si = (p * r * t)/100;
    printf("Simple Interest:%.2f", si);
    return 0;
}