#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("Zero");
    }


    if(n>0){
        printf("Positive");
    }
    else{
        printf("Negative");
    }
    return 0;
}