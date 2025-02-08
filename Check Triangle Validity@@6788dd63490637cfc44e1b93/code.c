#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int c;
    scanf("%d",&c);

    if(a+b>c && b+c>a && a+c>b){
        printf("Valid");
    }
    else{
        printf("Invalid")
    }
}