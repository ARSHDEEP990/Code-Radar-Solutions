#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    int b;
    scanf("%d",&b);

    int c;
    scanf("%d",&c);

    float average = (float)(a+b+c)/3;
    printf("Average: %.2f",average);
    return 0;
}