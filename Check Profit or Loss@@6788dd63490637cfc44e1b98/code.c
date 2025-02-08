#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    int b;
    scanf("%d",&b);

    if(a<b){
        printf("Profit");
    }
    if(a>b){
        printf("Loss");
    }
    if(a==b){
        printf("No Profit No Loss");
    }
    return 0;
}