#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    if(a<b){
        printf("%d is largest", b);
    }else if(b<a){
        printf("%d is largest", a);
    }
}