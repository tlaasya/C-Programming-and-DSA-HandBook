#include<stdio.h>
int main(){
    int p,r,t;
    printf("Enter the principle: ");
    scanf("%d", &p);
    printf("Enter the rate: ");
    scanf("%d", &r);
    printf("Enter the time: ");
    scanf("%d", &t);
    float ci = p*(1 + r/100)* t - p;
    printf("Compound Number: %.2f", ci);
}