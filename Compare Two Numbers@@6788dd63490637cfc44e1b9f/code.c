#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int a;
    scanf("%d",&a);

    if(n>a){
        printf("First");
    }
    if(a>n){
        printf("Second");
    }
    if(n==a){
        printf("Equal");
    }
    return 0;
}