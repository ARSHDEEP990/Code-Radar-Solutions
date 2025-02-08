#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int c;
    scanf("%d",&c);
    if(a==b && b==c){
        printf("Equilateral");
    }
    else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
    }
    if(a!=b && b!=c && a!=c){
        printf("Scalene");
    }
    
    return 0;

}