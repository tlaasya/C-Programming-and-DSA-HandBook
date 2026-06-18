#include<stdio.h>
int main(){
    int r;
    printf("Enter radius number: ",r);
    scanf("%d", &r);
    float area = 3.14 * r * r;
    printf("Area of circle: %.2f\n", area);
    return 0;
    

}