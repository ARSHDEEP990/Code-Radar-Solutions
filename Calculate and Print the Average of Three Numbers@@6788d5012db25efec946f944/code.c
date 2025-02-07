#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    int b;
    scanf("%d",&b);

    int c;
    scanf("%d",&c);

    float average = (a+b+c)/3;
    printf("Average: %f",average);
    return 0;
}