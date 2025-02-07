#include <stdio.h>
int main(){
    float a;
    scanf("%d",&a);

    float b;
    scanf("%d",&b);

    float c;
    scanf("%d",&c);

    float average = (a+b+c)/3;
    printf("Average: %.2f",average);
    return 0;
}